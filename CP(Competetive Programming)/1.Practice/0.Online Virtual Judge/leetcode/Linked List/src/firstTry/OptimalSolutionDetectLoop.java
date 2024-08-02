package firstTry;

import DriverCode.LinkedList;
import DriverCode.ListNode;

public class OptimalSolutionDetectLoop {

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
		ListNode ans = detectLoop(linkedList.head);
//		linkedList.display(ans);
	}

	private static ListNode detectLoop(ListNode head) {
		// TODO Auto-generated method stub
		boolean loopOrNot = isLoop(head);
		System.out.println(loopOrNot);
		return head;
	}

	private static boolean isLoop(ListNode head) {
		// TODO Auto-generated method stub
		ListNode slow = head;
		ListNode fast = head;
		while(fast!=null && fast.next!=null) {
			slow = slow.next;
			fast = fast.next.next;
			if(slow==fast) {
				return true;
			}
		}
		return false;
	}

}
