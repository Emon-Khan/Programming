package firstTry;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Stack;

public class ReverseQueue {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ReverseQueue obj = new ReverseQueue();
		Queue<Integer> q = new LinkedList<Integer>(); //10 6 8 12 3
		q.add(10);
		q.add(6);
		q.add(8);
		q.add(12);
		q.add(3);
		Queue<Integer> ans = obj.reverseQueue(q);
		while(!ans.isEmpty()) {
			System.out.println(ans.poll());
		}
	}

	private Queue<Integer> reverseQueue(Queue<Integer> q) {
		// TODO Auto-generated method stub
		Stack<Integer> stack = new Stack<Integer>();
		while (!q.isEmpty()) {
			stack.add(q.poll());
		}
		while(!stack.isEmpty()) {
			q.add(stack.pop());
		}
		return q;
	}

}
