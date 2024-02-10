public class Cat extends Animal {
    public String Bark() {
        return "Meow Meow";
    }

    public static void main(String[] args) {
        Cat cat = new Cat();
        System.out.println(cat.Bark());
    }
}
