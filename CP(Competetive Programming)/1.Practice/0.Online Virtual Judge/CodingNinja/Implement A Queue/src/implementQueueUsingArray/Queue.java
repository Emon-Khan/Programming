package implementQueueUsingArray;

import java.util.ArrayList;
import java.util.List;

public class Queue {
	List<Integer> arr;
	int val;

	Queue() {
		// Implement the Constructor
		arr = new ArrayList<Integer>();
	}

	/*----------------- Public Functions of Queue -----------------*/

	boolean isEmpty() {
		// Implement the isEmpty() function
		if (arr.size() == 0) {
			return true;
		} else {
			return false;
		}
	}

	void enqueue(int data) {
		// Implement the enqueue() function
		arr.add(data);
	}

	int dequeue() {
		// Implement the dequeue() function
		if (!isEmpty()) {
			val = arr.get(0);
			arr.remove(0);
		} else {
			val = -1;
		}
		return val;
	}

	int front() {
		// Implement the front() function
		if (!isEmpty()) {
			val = arr.get(0);
		} else {
			val = -1;
		}
		return val;
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Queue queue = new Queue();
		System.out.println(queue.isEmpty());
		queue.enqueue(5);
		queue.enqueue(8);
		System.out.println(queue.front());
		System.out.println(queue.dequeue());
		System.out.println(queue.dequeue());
		System.out.println(queue.front());
		System.out.println(queue.isEmpty());
	}

}
