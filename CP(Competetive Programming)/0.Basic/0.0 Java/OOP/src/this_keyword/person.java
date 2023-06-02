package this_keyword;

public class person {

    /*Part-1*/
 /*String name;
    int age;
    String hairColor;
    person(String name, int age){
        this.name = name;
        this.age = age;
    }
    person(String name, int age, String hairColor){
        this(name, age);
        this.hairColor = hairColor;
    }
    void display(){
        System.out.println("Name : "+name);
        System.out.println("Age : "+age);
        System.out.println("Hair Color : "+hairColor);
    }*/

 /*Part-2*/
    void message() {
        System.out.println("I am message method");
    }

    void display() {
        this.message();
        System.out.println("I am display method");
    }
}
