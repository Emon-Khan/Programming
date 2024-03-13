interface Car {
    void brand();
}

interface Bike {
    void brand();
}

class Vehicle implements Car, Bike {
    @Override
    public void brand() {
        System.out.println("The brand name for both of the Car & Bike are BMW");
    }

}

public class MultipleInheritance {
    public static void main(String[] args) {
        Vehicle obj = new Vehicle();
        obj.brand();
    }
}
