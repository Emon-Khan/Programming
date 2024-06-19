package firstTry;

import java.util.Arrays;
import java.util.Stack;

public class NextGreaterElementUsingStack {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] arr = { 5, 7, 9, 8 }; // 7 8 8 -1
		int n = 4;
		NextGreaterElementUsingStack objGreaterElement = new NextGreaterElementUsingStack();
		int[] ans = objGreaterElement.nextGreater(arr, n);
		for (int val : ans) {
			System.out.println(val);
		}
	}

	private int[] nextGreater(int[] arr, int n) {
		// TODO Auto-generated method stub
		int[] ans = new int[n];
		Arrays.fill(ans, -1);
		Stack<Integer> stack = new Stack<Integer>();
		for (int i = n - 1; i >= 0; i--) {
			while (!stack.isEmpty()) {
				if (arr[i] < stack.peek()) {
					ans[i] = stack.peek();
					break;
				}
				stack.pop();
			}
			stack.push(arr[i]);
		}
		return ans;
	}
}
