package firstTry;

import java.util.Stack;

public class QueueUsingOneStacks {
	Stack<Integer> stk1, stk2;
	int val;
	public QueueUsingOneStacks() {
		// Intialise here.
		stk1 = new Stack<Integer>();
	}

	// Enqueues 'X' into the queue. Returns true after enqueuing.
	public boolean enqueue(int x) {
		// Write your code here.
		stk1.push(x);
		return true;
		
	}
	/*
	   Dequeues top element from queue. Returns -1 if the queue is empty, 
	   otherwise returns the popped element.
	*/
	public int dequeue() {
		// Write your code here.
		if(!stk1.isEmpty()) {
			val = stk1.get(0);
			stk1.remove(0);
		}else {
			val = -1;
		}
		return val;
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		QueueUsingOneStacks queueStack = new QueueUsingOneStacks();
		System.out.println(queueStack.enqueue(5));
		System.out.println(queueStack.enqueue(1));
		System.out.println(queueStack.dequeue());
	}

}
