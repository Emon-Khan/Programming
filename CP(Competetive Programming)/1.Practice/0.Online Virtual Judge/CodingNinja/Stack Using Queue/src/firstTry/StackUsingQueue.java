package firstTry;

import java.util.LinkedList;
import java.util.Queue;

public class StackUsingQueue {
//	1 5
//	1 10
//	2
//	3
//	4
	Queue<Integer> queue1, queue2;
	int size = 0;
	int val;

	public StackUsingQueue() {
		// Implement the Constructor.
		queue1 = new LinkedList<Integer>();
		queue2 = new LinkedList<Integer>();
	}

	/*----------------- Public Functions of Stack -----------------*/

	public int getSize() {
		// Implement the getSize() function.
		return size;
	}

	public boolean isEmpty() {
		// Implement the isEmpty() function.
		return queue1.isEmpty();
	}

	public void push(int element) {
		// Implement the push(element) function.
		queue1.add(element);
		size++;
	}

	public int pop() {
		// Implement the pop() function.
		if (size != 0) {
			for (int i = 0; i < size - 1; i++) {
				queue2.add(queue1.poll());
			}
			size--;
			val = queue1.remove();
			for (int i = 0; i < size; i++) {
				queue1.add(queue2.poll());
			}
		} else {
			val = -1;
		}

		return val;
	}

	public int top() {
		// Implement the top() function.
		if (size != 0) {
			for (int i = 0; i < size - 1; i++) {
				queue2.add(queue1.poll());
			}
			val = queue1.peek();
			queue2.add(queue1.poll());
			for (int i = 0; i < size; i++) {
				queue1.add(queue2.poll());
			}
		} else {
			val = -1;
		}

		return val;
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		StackUsingQueue stackUsingQueue = new StackUsingQueue();
		stackUsingQueue.push(5);
		stackUsingQueue.push(10);
		stackUsingQueue.push(15);
		System.out.println(stackUsingQueue.pop());
		System.out.println(stackUsingQueue.top());
		System.out.println(stackUsingQueue.getSize());
		System.out.println(stackUsingQueue.pop());
		System.out.println(stackUsingQueue.isEmpty());
		System.out.println(stackUsingQueue.pop());
		System.out.println(stackUsingQueue.pop());
		System.out.println(stackUsingQueue.pop());
		System.out.println(stackUsingQueue.isEmpty());
	}

}
