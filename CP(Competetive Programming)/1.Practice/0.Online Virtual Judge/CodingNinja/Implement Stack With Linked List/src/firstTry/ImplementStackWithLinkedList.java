package firstTry;

import driverCode.LinkedList;
import driverCode.ListNode;

public class ImplementStackWithLinkedList {
	static class Stack {
		// Write your code here
		public ListNode head = null;
		int top, count;
		ListNode n;

		Stack() {
			// Write your code here
			top = -1;

		}

		int getSize() {
			// Write your code here
			n = head;
			count = 0;
			while (n != null) {
				n = n.next;
				count++;
			}
			return count;
		}

		boolean isEmpty() {
			// Write your code here
			n = head;
			if (n == null) {
				return true;
			} else {
				return false;
			}
		}

		void push(int data) {
			// Write your code here
			ListNode listNode = new ListNode(data);
			if (head == null) {
				head = listNode;
			} else {
				count = top;
				n = head;
				while (count > 0) {
					n = n.next;
					count--;
				}
				n.next = listNode;
			}
			top++;
		}

		void pop() { // <<<<
			// Write your code here
			if (top >= 0) {
				n = head;
				if (top == 0) {
					head = null;
				} else {
					for (int i = 0; i < top - 1; i++) {
						n = n.next;
					}
					n.next = null;
				}
				top--;
			}
		}

		int getTop() {// <<<<<
			// Write your code here
			count = top;
			n = head;
			while (count > 0) {
				n = n.next;
				count--;
			}
			if (top >= 0) {
				return n.data;
			} else {
				return -1;
			}
		}
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ImplementStackWithLinkedList.Stack stack = new ImplementStackWithLinkedList.Stack();
		stack.push(1);
		stack.push(2);
		stack.push(3);
		ListNode n = stack.head;
		while (n != null) {
			System.out.println(n.data);
			n = n.next;
		}
		System.out.println(stack.getSize());
		System.out.println(stack.isEmpty());
		System.out.println(stack.getTop());
		stack.pop();
		System.out.println(stack.getTop());
		stack.pop();
		System.out.println(stack.getTop());
		stack.pop();
		System.out.println(stack.getTop());
		stack.pop();
	}

}
