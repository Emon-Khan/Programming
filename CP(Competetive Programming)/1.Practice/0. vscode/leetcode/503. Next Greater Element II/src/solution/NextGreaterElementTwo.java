package solution;

import java.util.Arrays;
import java.util.Stack;

public class NextGreaterElementTwo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] nums = new int[] { 10, 2, 3, 6, 13 };
		int[] ans = nextGreaterElements(nums, nums.length);
		for(int value: ans) {
			System.out.println(value);
		}
	}

	private static int[] nextGreaterElements(int[] arr, int n) {
		// TODO Auto-generated method stub
		int[] greaterElement = new int[n];
		Arrays.fill(greaterElement, -1);
		Stack<Integer> st = new Stack<Integer>();
		st.push(0);
		int i = 1;
		while (i < n) {
			while (!st.isEmpty() && arr[i] > arr[st.peek()]) {
				greaterElement[st.peek()] = arr[i];
				st.pop();
			}
			st.push(i);
			i++;
		}
		return greaterElement;
	}

}
