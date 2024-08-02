package secondTry;

import java.util.LinkedList;
import java.util.Stack;

public class ReverseLinkedListUsingStack {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		LinkedList<Integer> linkedList = new LinkedList<Integer>();
		linkedList.add(1);
		linkedList.add(2);
		linkedList.add(3);
		ReverseLinkedListUsingStack obj = new ReverseLinkedListUsingStack();
		Stack<Integer> ans = obj.reverseLinkedList(linkedList);
		while(!ans.isEmpty()) {
			System.out.println(ans.pop());
		}
	}
	public Stack<Integer> reverseLinkedList(LinkedList<Integer> linkedList){
		Stack<Integer> stack =  new Stack<Integer>();
		for(int i = 0; i<linkedList.size(); i++) {
			stack.add(linkedList.get(i));
		}
		return stack;
	}

}
