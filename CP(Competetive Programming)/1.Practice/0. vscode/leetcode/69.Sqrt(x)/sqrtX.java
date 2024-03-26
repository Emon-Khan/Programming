import java.util.Scanner;

public class sqrtX {
    public static void main(String[] args) {
        int x;
        Scanner scan = new Scanner(System.in);
        x = scan.nextInt();
        sqrtX obj = new sqrtX();
        int ans = obj.mySqrt(x);
        System.out.println(ans);
        scan.close();
    }

    public int mySqrt(int x) {
        if (x == 0 || x == 1) {
            return x;
        }
        int start = 1;
        int mid = -1;
        int end = x;
        while (start <= end) {
            mid = start + (end - start) / 2;
            if ((long) mid * mid > (long) x) {
                end = mid - 1;
            }else if((long) mid * mid < (long) x){
                start = mid + 1;
            }else{
                return mid;
            }
        }
        return end;
    }
}
