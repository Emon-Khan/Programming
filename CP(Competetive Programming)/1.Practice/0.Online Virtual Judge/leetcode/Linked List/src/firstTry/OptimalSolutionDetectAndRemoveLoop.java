package firstTry;

import DriverCode.LinkedList;
import DriverCode.ListNode;

public class OptimalSolutionDetectAndRemoveLoop {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		LinkedList linkedList = new LinkedList();
		linkedList.insert(1);
		linkedList.insert(2);
		linkedList.insert(3);
		linkedList.insert(4);
		ListNode n = linkedList.head;
		ListNode firstNode = linkedList.head;
		while (n.next != null) {
			n = n.next;
		}
		n.next = firstNode;
		ListNode ans = removeLoop(linkedList.head);
		linkedList.display(ans);
	}

	private static ListNode removeLoop(ListNode head) {
		// TODO Auto-generated method stub
		ListNode slow = head;
		ListNode fast = head;
		ListNode meetingPoint = null;
		while (fast != null && fast.next != null) {
			slow = slow.next;
			fast = fast.next.next;
			if (slow == fast) {
				meetingPoint = slow;
				break;
			}
		}
		ListNode startingPoint = head;
		while (startingPoint != meetingPoint && meetingPoint != null) {
			if (startingPoint.next == meetingPoint.next) {
				meetingPoint.next = null;
				break;
			} else {
				startingPoint = startingPoint.next;
				meetingPoint = meetingPoint.next;
			}
		}
		if(slow == head) {
			while(startingPoint.next!=slow) {
				startingPoint = startingPoint.next;
			}
			startingPoint.next = null;
		}
		return head;
	}

}
