package Polymorphism;

public class Dog extends Animal {
    @Override
    public void eat() {
        System.out.println("Dog can eat");
    }

    public void bark() {
        System.out.println("Can bark");
    }

    public static void main(String[] args) {
        Animal animal = new Dog(); // upcasting  //run-time polymorphism
        //Reference Variable = Object of child class
        animal.eat();
        //animal.bark();
    }
}