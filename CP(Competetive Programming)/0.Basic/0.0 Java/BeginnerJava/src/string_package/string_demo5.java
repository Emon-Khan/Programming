package string_package;

public class string_demo5 {
    public static void main(String[] args) {
        StringBuffer sb = new StringBuffer("Emon");
        sb.append(" Khan");
        System.out.println(sb);
        /*sb.reverse();
        System.out.println(sb);
        sb.delete(0, 3);
        System.out.println(sb);*/
        sb.setLength(6);
        System.out.println(sb);
    }
}
