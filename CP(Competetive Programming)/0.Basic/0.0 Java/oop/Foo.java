public class Foo {
    public void doIt(int number) {
        System.out.println(number);
    }

    public void doIt(String str) {
        System.out.println(str);
    }

    public static void main(String[] args) {
        Foo obj = new Foo();
        obj.doIt(5);
        obj.doIt("Hmmm");
    }
}
