
import java.util.*;

public class Oath_of_the_Nights_Watch {

    public static void main(String[] args) {
        int n;
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        int[] ar = new int[n];
        for (int i = 0; i < n; i++) {
            ar[i] = input.nextInt();
        }
        Arrays.sort(ar);
        int flag = 0;
        for (int i = 1; i < n - 1; i++) {
            if (ar[i] > ar[0] && ar[i] < ar[n - 1]) {
                flag++;
                //System.out.println(flag);
            }
        }
        System.out.println(flag);
    }
}
