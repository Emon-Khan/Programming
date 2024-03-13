interface Animal {
    public static final int x = 5;
    public abstract void run();
}

class Dog implements Animal {
    @Override
    public void run() {
        //System.out.println();
        System.out.println("Dog");
    }

    public void bark() {
        System.out.println("Bark");
    }
}

class Cat implements Animal {
    public void run() {
        System.out.println("Cat");
    }
}

public class xy {

    public void xyz() {
        System.out.println("XYZ");
    }

    public static void func(Animal ob) {
        ob.run();
    }

    public static void main(String[] args) {
        Animal d = new Dog();
        Dog dd = new Dog();
        // d.run();
        // dd.run();
        // dd.bark();
        func(d);
        func(new Dog());
        System.out.println(Animal.x);
        // d.xyz();

        // Cat c=new Cat();
        // func(c);

    }
}