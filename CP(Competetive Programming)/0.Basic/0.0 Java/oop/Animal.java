public class Animal {
    private String name;
    private String type;

    public Animal(String name, String type) {
        this.name = name;
        this.type = type;
    }

    @Override
    public String toString() {
        return "Animal [name=" + name + ", type=" + type + "]";
    }

    public static void main(String[] args) {
        Animal animal = new Animal("Deer", "Graminivorous");
        System.out.println(animal); // Animal@1f32e575 without toString
        // Animal [name=Deer, type=Graminivorous] with toStrings
    }

}
