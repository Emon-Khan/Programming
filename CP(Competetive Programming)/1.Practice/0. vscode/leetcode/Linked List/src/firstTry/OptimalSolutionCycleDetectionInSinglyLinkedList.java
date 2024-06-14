package firstTry;

import DriverCode.LinkedList;
import DriverCode.ListNode;

public class OptimalSolutionCycleDetectionInSinglyLinkedList {
	public static void main(String[] args) {
		LinkedList linkedList = new LinkedList();
		linkedList.insert(1);
		linkedList.insert(2);
		linkedList.insert(3);
		linkedList.insert(4);
//		ListNode n = linkedList.head;
//		ListNode firstNode = linkedList.head;
//		while (n.next != null) {
//			n = n.next;
//		}
//		n.next = firstNode;
		boolean isLoop = detectCycle(linkedList.head);
		System.out.println(isLoop);
	}

	public static boolean detectCycle(ListNode head) {
		// Your code goes here
		ListNode slow = head;
		ListNode fast = head;
		while (fast != null && fast.next != null) {
			slow = slow.next;
			fast = fast.next.next;
			if (slow == fast) {
				return true;
			}
		}
		return false;
	}
}
