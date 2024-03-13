interface Car{
    void speed();
}
abstract class Bike {
    /*@Override
    public void speed() {
        System.out.println("Feel the speed of a car");
    }*/
    abstract void run();
}
class Honda implements Car {
    /*@Override
    void run() {
        System.out.println("Honda");
    }*/
    void temp(){
        System.out.println("temp");
    }
}

class Tarogp extends Bike {
    @Override
    void run() {
        System.out.println("Tarogp");
    }
}

public class AbstractClass {
    public static void main(String[] args) {
        Honda ob = new Honda();
        Bike obj = new Tarogp();
        //Bike ob = new Bike();
        //ob.run();
        obj.run();
        //ob.speed();
        ob.temp();
    }
}
