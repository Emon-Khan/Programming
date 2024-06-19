// First Approach Using Nested For Loop Verdict ->> TLE
package firstTry;

import java.util.ArrayList;
import java.util.Stack;

public class NextGreaterElementUsingNestedLoop {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] arr = { 5, 7, 3, 8 }; // 7 8 8 -1
		int n = 4;
		NextGreaterElementUsingNestedLoop objGreaterElement = new NextGreaterElementUsingNestedLoop();
		int[] ans = objGreaterElement.nextGreater(arr, n);
		for(int val:ans) {
			System.out.println(val);
		}
	}

	private int[] nextGreater(int[] arr, int n) {
		// TODO Auto-generated method stub
		int[] ans = new int[n];
		for (int i = 0; i < n; i++) {
			int next = -1;
			for (int j = i + 1; j < n; j++) {
				if (arr[j] > arr[i]) {
					next = arr[j];
					break;
				}
			}
			ans[i] = next;
		}
		return ans;
	}

}
