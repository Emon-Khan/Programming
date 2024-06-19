package firstTry;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Stack;

public class OnlineStockSpan {
	public static void main(String[] args) {
		OnlineStockSpan obj = new OnlineStockSpan();
		ArrayList<Integer> price = new ArrayList<Integer>();
		price.add(4);
		price.add(2);
		price.add(3);
		price.add(3);
		price.add(7);
		ArrayList<Integer> ans = obj.findSpans(price);
		for(int val: ans) {
			System.out.println(val);
		}
	}

	private ArrayList<Integer> findSpans(ArrayList<Integer> price) {
		// TODO Auto-generated method stub
		ArrayList<Integer> ans = new ArrayList<Integer>();
		Stack<Integer> stack = new Stack<Integer>();
		Map<Integer, Integer> hm = new HashMap<Integer, Integer>();
		for (int i = 0; i < price.size(); i++) {
			int val = 1;
			while (!stack.isEmpty()) {
				if (stack.peek() <= price.get(i)) {
					val += hm.get(stack.peek());
					stack.pop();
				} else {
					break;
				}
			}
			ans.add(i, val);
			stack.add(price.get(i));
			hm.put(price.get(i), val);
		}
		return ans;
	}
}
