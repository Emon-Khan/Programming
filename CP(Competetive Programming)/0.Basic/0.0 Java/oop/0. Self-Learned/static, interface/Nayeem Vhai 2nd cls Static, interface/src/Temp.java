public class Temp{
    public interface Animal{
        public void run();
    }
    public static class Dog implements Animal {

        @Override
        public void run() {
            System.out.println("Dog ");
        }
        
    }
    public static class Cat implements Animal {

        @Override
        public void run() {
            System.out.println("Cat ");
        }
        
    }
    public void test(){
        System.out.println("This is test");
    }
    public static void main(String[] args) {
        Animal d = new Dog();
        Animal c = new Cat();
        Cat cc = new Cat();
        d.run();
        c.run();
        cc.run();
        Temp ob = new Temp();
        ob.test();
        //Temp.test();
    }
}


