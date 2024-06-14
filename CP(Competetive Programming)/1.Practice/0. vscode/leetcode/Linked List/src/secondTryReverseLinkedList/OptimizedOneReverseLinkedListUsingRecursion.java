package secondTryReverseLinkedList;

import DriverCode.LinkedList;
import DriverCode.ListNode;

public class OptimizedOneReverseLinkedListUsingRecursion {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		LinkedList linkedList = new LinkedList();
		linkedList.insert(1);
		linkedList.insert(2);
		linkedList.insert(3);
		ReverseLinkedListUsingRecursion obj = new ReverseLinkedListUsingRecursion();
		ListNode ans = obj.reverseList(linkedList.head);
		linkedList.display(ans);

	}
	public ListNode reverseList(ListNode head) {
		if(head==null||head.next==null) {
			return head;
		}
		ListNode newHead = reverseList(head.next);
		ListNode front = head.next;
		front.next = head;
		head.next = null;
		return newHead;
	}

}
