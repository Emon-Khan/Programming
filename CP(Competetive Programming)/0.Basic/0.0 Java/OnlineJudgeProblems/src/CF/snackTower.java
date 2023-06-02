
import java.util.*;

public class snackTower {

    public static void main(String[] args) {
        int n;
        Scanner in = new Scanner(System.in);
        n = in.nextInt();
        int[] arr = new int[n + 1];
        int[] temp = new int[n + 1];
        int flag;
        for (int i = 1; i <= n; i++) {
            arr[i] = in.nextInt();
        }
        flag = n;
        for (int i = 1; i <= n; i++) {
            temp[arr[i]] = 1;
            while (temp[flag] == 1) {
                System.out.print(flag + " ");
                flag--;
            }
            System.out.println();
        }

    }
}
