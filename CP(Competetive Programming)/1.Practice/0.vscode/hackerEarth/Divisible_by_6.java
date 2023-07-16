import java.util.*;

public class Divisible_by_6 {
    static long sumOfNumber(long n) {
        long ans = 0;
        while (n != 0) {
            ans += n % 10;
            n = n / 10;
        }
        return ans;
    }

    static boolean ContainsEvenNumber(long n) {
        while (n != 0) {
            if ((n & 1) == 0) {
                return true;
            }
            n = n / 10;
        }
        return false;
    }
    static long findLength(long n){
        int count = 0;
        while(n!=0){
            if((n&1)==1){
                n=n/10;
            }else{
                return count;
            }
            count++;
        }
        return count;

    }

    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        long n = scan.nextLong();
        if (sumOfNumber(n) % 3 == 0) {
            if (ContainsEvenNumber(n)) {
                System.out.println(findLength(n));
            } else {
                System.out.println("-1");
            }
        } else {
            System.out.println("-1");
        }
        scan.close();
    }
}
