public class Bar extends Foo {
    public void doIt(float fl){
        System.out.println(fl);
    }

    public static void main(String[] args) {
        Bar obj = new Bar();
        obj.doIt(5);
        obj.doIt(5.5f);
        obj.doIt("String");
    }
}
