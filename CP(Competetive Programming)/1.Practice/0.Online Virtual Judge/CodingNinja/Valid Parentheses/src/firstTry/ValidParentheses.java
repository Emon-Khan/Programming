package firstTry;

import java.util.HashMap;
import java.util.Map;
import java.util.Stack;

public class ValidParentheses {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String s = "[()]{"; // [()]{}{[()()]()}
		ValidParentheses obj = new ValidParentheses();
		boolean ans = obj.isValidParenthesis(s);
		System.out.println(ans);
	}

	private boolean isValidParenthesis(String s) {
		// TODO Auto-generated method stub
		Stack<Character> stack1 = new Stack<Character>();
		Stack<Character> stack2 = new Stack<Character>();
		for (int i = 0; i < s.length(); i++) {
			stack1.add(s.charAt(i));
		}
		Map<Character, Character> hm = new HashMap<Character, Character>();
		hm.put(')', '(');
		hm.put('}', '{');
		hm.put(']', '[');
		stack2.add(stack1.pop());
		while (!stack1.isEmpty()) {
			if (!stack2.isEmpty() && hm.get(stack2.peek()) == stack1.peek()) {
				stack1.pop();
				stack2.pop();
			} else {
				stack2.add(stack1.pop());
			}
		}
		return stack1.isEmpty() && stack2.isEmpty();
	}

}
