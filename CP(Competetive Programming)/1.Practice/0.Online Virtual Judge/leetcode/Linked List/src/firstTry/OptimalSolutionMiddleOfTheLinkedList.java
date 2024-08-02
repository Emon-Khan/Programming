package firstTry;

import DriverCode.LinkedList;
import DriverCode.ListNode;

public class OptimalSolutionMiddleOfTheLinkedList {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		LinkedList objLinkedList = new LinkedList();
        objLinkedList.insert(1);
        objLinkedList.insert(2);
        objLinkedList.insert(3);
        objLinkedList.insert(4);
        objLinkedList.insert(5);
        objLinkedList.insert(6);
        ListNode ans = middleNode(objLinkedList.head);
        objLinkedList.display(ans);
	}

	private static ListNode middleNode(ListNode head) {
		// TODO Auto-generated method stub
		ListNode slow = head;
		ListNode fast = head;
		while(fast!=null && fast.next!=null) {
			slow = slow.next;
			fast = fast.next.next;
		}
		
		return slow;
	}

}
