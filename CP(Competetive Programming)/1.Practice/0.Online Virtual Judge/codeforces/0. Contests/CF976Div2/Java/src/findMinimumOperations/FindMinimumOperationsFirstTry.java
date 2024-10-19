// WA On Test Case 3
package findMinimumOperations;

import java.util.Scanner;

public class FindMinimumOperationsFirstTry {
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
				while (n >= k) {
					int count = (int) (Math.log(n) / Math.log(k));
					n = n - ((long) Math.pow(k, count));
					ans += 1;
				}
				ans += n;
			}

			System.out.println(ans);
			t--;
		}
		myObj.close();

	}

}
