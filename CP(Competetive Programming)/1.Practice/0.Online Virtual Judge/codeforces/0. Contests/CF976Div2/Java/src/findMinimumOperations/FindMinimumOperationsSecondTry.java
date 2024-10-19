package findMinimumOperations;

import java.util.Scanner;

public class FindMinimumOperationsSecondTry {

	public static void main(String[] args) {
		Scanner myObj = new Scanner(System.in);
		int t = myObj.nextInt();
		while (t > 0) {
			long n = myObj.nextLong();
			long k = myObj.nextLong();
			long ans = 0;
			if (k == 1) {
				ans = n;
			} else {
				while (n > 0) {
					ans += n % k;
					n /= k;
				}
			}
			System.out.println(ans);
			t--;
		}
		myObj.close();
	}
}
