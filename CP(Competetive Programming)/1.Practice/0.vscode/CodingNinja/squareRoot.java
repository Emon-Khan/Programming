import java.util.Scanner;

/**
 * squareRoot
 */
public class squareRoot {

    public static void main(String[] args) {
        long n;
        Scanner scan = new Scanner(System.in);
        n = scan.nextLong();
        squareRoot obj = new squareRoot();
        long ans = obj.calc(n);
        System.out.println(ans);
        scan.close();
    }
    long calc(long n){
        double x = n;
        return (long)Math.sqrt(x);
    }
}