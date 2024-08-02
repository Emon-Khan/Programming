package firstTry;

public class StackImplementationUsingArray {
	static class Stack {
		int[] array;
		int top;
		int capacity;

		Stack(int capacity) {
			// Write your code here.
			array = new int[capacity];
			top = -1;
			this.capacity = capacity;
		}

		public void push(int num) {
			// Write your code here.
			if (isFull() != 1) {
				top++;
				array[top] = num;
			}
		}

		public int pop() {
			// Write your code here
			if (isEmpty() != 1) {
				int val = array[top];
				top--;
				return val;
			} else {
				return -1;
			}

		}

		public int top() {
			// Write your code here.
			return (isEmpty() != 1) ? array[top] : -1;
		}

		public int isEmpty() {
			// Write your code here.
			if (top < 0) {
				return 1;
			} else {
				return 0;
			}
		}

		public int isFull() {
			// Write your code here.
			if (capacity - 1 == top) {
				return 1;
			} else {
				return 0;
			}
		}
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		StackImplementationUsingArray stackImpl = new StackImplementationUsingArray();
		StackImplementationUsingArray.Stack stack = new StackImplementationUsingArray.Stack(5);
		stack.push(1);
		stack.push(2);
		stack.push(3);
		stack.push(4);
		stack.push(5);
		System.out.println(stack.pop());
		System.out.println(stack.pop());
		System.out.println(stack.pop());
		System.out.println(stack.pop());
		System.out.println(stack.pop());
		System.out.println(stack.top());
		System.out.println(stack.isEmpty());
		System.out.println(stack.isFull());
	}

}
