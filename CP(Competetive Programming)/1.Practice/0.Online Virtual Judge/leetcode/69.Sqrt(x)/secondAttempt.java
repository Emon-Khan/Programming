import java.util.Scanner;

public class secondAttempt {

    public static void main(String[] args) {
        long x;
        Scanner scan = new Scanner(System.in);
        x = scan.nextLong();
        long startPoint = 0;
        long endPoint = x;
        long halfPoint;
        while (startPoint <= endPoint) {
            halfPoint = (startPoint + endPoint) / 2;
            if (halfPoint * halfPoint < x) {
                startPoint = halfPoint + 1;
            } else if (halfPoint * halfPoint > x) {
                endPoint = halfPoint - 1;
            } else {
                endPoint = halfPoint;
                break;
            }
        }
        System.out.println(endPoint);
        scan.close();
    }
}