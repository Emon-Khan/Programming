package firstTry;

import java.util.Stack;

public class QueueUsingTwoStacks {
	Stack<Integer> stk1, stk2;
	int val;

	public QueueUsingTwoStacks() {
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
	 * Dequeues top element from queue. Returns -1 if the queue is empty, otherwise
	 * returns the popped element.
	 */
	public int dequeue() {
		// Write your code here.
		stk2 = new Stack<Integer>();
		while (!stk1.isEmpty()) {
			stk2.push(stk1.pop());
		}
		if (stk2.isEmpty()) {
			val = -1;
		} else {
			val = stk2.pop();
			while (!stk2.isEmpty()) {
				stk1.push(stk2.pop());
			}
		}
		return val;
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub 
//		7
//		1 11 true
//		1 51 true
//		1 26 true
//		2 	 11
//		1 6 true
//		2   51
//		2   26
		QueueUsingTwoStacks queueUsingTwoStacks = new QueueUsingTwoStacks();
		System.out.println(queueUsingTwoStacks.enqueue(11));
		System.out.println(queueUsingTwoStacks.enqueue(51));
		System.out.println(queueUsingTwoStacks.enqueue(26));
		System.out.println(queueUsingTwoStacks.dequeue());
		System.out.println(queueUsingTwoStacks.enqueue(6));
		System.out.println(queueUsingTwoStacks.dequeue());
		System.out.println(queueUsingTwoStacks.dequeue());
	}

}
