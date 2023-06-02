package encapsulation;

public class encapTest {
    public static void main(String[] args) {
        person ob = new person();
        ob.setName("Emon");
        System.out.println(ob.getName());
        ob.setAge(18);
        System.out.println(ob.getAge());
    }
}
