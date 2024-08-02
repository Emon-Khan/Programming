package firstTry;

import java.util.Arrays;
import java.util.Stack;

public class LargestRectangleInHistogram {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		LargestRectangleInHistogram obj = new LargestRectangleInHistogram();
		int[] heights = { 2, 1, 5, 6, 2, 3 };
		int ans = obj.largestRectangleArea(heights);
		System.out.println(ans);
	}

	private int largestRectangleArea(int[] heights) {
		// TODO Auto-generated method stub
		int ans = 0;
		int[] rightNextSmaller = rightNextSmaller(heights); // [1 5 4 4 5 5]
		int[] leftNextSmaller = leftNextSmaller(heights); // [-1 -1 1 2 1 4]
		for (int i = 0; i < heights.length; i++) {
			ans =  Math.max(ans, heights[i]*(rightNextSmaller[i]-leftNextSmaller[i]-1));
		}
		System.out.println(Arrays.toString(rightNextSmaller));
		System.out.println(Arrays.toString(leftNextSmaller));
		return ans;
	}

	private int[] rightNextSmaller(int[] heights) { // 2 1 5 6 2 3
		// TODO Auto-generated method stub
		Stack<Integer> stack = new Stack<Integer>();
		int[] rightNextSmaller = new int[heights.length];
		Arrays.fill(rightNextSmaller, heights.length);
		for (int i = 0; i < heights.length; i++) {
			while (!stack.isEmpty() && heights[i] < heights[stack.peek()]) {
				rightNextSmaller[stack.peek()] = i;// [1 6 4 4 6 6]
				stack.pop();
			}
			stack.push(i);// 1 4 5
		}
		return rightNextSmaller;
	}

	private int[] leftNextSmaller(int[] heights) {// 2 1 5 6 2 3
		// TODO Auto-generated method stub
		Stack<Integer> stack = new Stack<Integer>();
		int[] leftNextSmaller = new int[heights.length];
		Arrays.fill(leftNextSmaller, -1);
		for (int i = heights.length - 1; i >= 0; i--) {
			while (!stack.isEmpty() && heights[i] < heights[stack.peek()]) {
				leftNextSmaller[stack.peek()] = i; // [-1 -1 1 2 1 4]
				stack.pop();
			}
			stack.push(i);// 1 0
		}
		return leftNextSmaller;
	}

}
