package Overriding;
import java.io.ObjectInputFilter.Config;

class Animal{
    void run(){
        System.out.println("It is an Animal");
    }
}
class Dog extends Animal{
    @Override
    void run() {
        System.out.println("I am a Dog who extends the Animal Class");
    }
}
public class Overriding{
    public static void main(String[] args) {
        Animal animal = new Dog();//upcasting || animal is a reference variable of parent class A 
        //It is refering to the subclass object || subclass method is overriding the parent class method
        //subclass method is invoked at runtime  || method invocation is determined by the jvm not compiler,it is 
        //known as runtime polymorphism
        animal.run();
    }
}




