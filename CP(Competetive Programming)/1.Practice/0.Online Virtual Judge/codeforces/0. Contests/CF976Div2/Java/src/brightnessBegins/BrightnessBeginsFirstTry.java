// WA on test case 8
package brightnessBegins;

import java.util.Scanner;

public class BrightnessBeginsFirstTry {
	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();

		while (t != 0) {
			long k = scanner.nextLong();
			long left = 1;
			long right = (long) 2e18;
			while (right - left > 1) {
				long mid = (left + right) / 2;
				long temp = mid - (int) (Math.sqrt(mid));
				if (temp < k) {
					left = mid;
				} else {
					right = mid;
				}

			}
			System.out.println(right);
			t--;
		}
		scanner.close();
	}
}
