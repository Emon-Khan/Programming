package exception_handling;

public class exceptionDemo {

    public static void main(String[] args) {
        try {
            int x = 10;
            int y = 0;
            int result = x / y;
            System.out.println("Result : " + result);
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Exception : " + e);
        } catch (ArithmeticException e) {
            System.out.println("Exception : " + e);
        } finally {
            System.out.println("Last line of the program");
        }
    }
}
