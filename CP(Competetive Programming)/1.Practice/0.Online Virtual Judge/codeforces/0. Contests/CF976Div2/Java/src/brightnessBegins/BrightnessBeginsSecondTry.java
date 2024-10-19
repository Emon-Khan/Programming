package brightnessBegins;

import java.util.Scanner;

public class BrightnessBeginsSecondTry {
	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();

		while (t != 0) {
			long k = scanner.nextLong();

			System.out.println(k + (int) (Math.sqrt(k) + 0.5));
			t--;
		}
		scanner.close();
	}
}
