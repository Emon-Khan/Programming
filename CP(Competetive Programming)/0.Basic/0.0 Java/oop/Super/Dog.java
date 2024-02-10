public class Dog extends Animal {
    String dogTemp;
    public Dog(String name, String type, String dogTemp) {
        super(name, type);
        this.dogTemp = dogTemp;
    }

    public void BarkSound() {
        super.BarkSound();
        System.out.println("Wowh Wowh");
    }

    public static void main(String[] args) {
        Dog dog = new Dog("Deer", "Gramenivous", "This is dogTemp");
        dog.BarkSound();
        System.out.println(dog.dogTemp);
    }
}
