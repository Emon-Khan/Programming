public class Cat extends Animal {
    public String Bark() {
        return "Meow Meow";
    }

    public static void main(String[] args) {
        Animal cat = new Cat();
        System.out.println(cat.Bark());
    }
}
