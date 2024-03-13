import java.util.Scanner;

public class J {
    public static void main(String[] args) {
        int n;
        long ans = (long)-1e9, sum = 0, val;
        Scanner scan = new Scanner(System.in);
        n = scan.nextInt();
        for (int i = 0; i < n; i++) {
            val = scan.nextLong();
            if((sum+=val)>=0){
                ans = Math.max(sum, ans);
            }else{
                sum=0;
                ans = Math.max(val, ans);
            }
        }
        
        System.out.println(ans);
    }
}
      
             