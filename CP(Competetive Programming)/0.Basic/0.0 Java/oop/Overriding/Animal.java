public class Animal {
    public String Bark(){
        return "Don't know";
    }
    public static void main(String[] args) {
        Animal animal = new Animal();
        System.out.println(animal.Bark());
    }
}
