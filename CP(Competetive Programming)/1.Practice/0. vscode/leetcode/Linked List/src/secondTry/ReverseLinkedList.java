package secondTry;

import DriverCode.LinkedList;
import DriverCode.ListNode;

public class ReverseLinkedList {
//	public ListNode head;

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		LinkedList linkedList = new LinkedList();
//		linkedList.insert(1);
//		linkedList.insert(2);
//		linkedList.insert(3);
//		linkedList.display(linkedList.head);
//		linkedList.insert(4);
//		linkedList.insert(5);
		ReverseLinkedList obj = new ReverseLinkedList();
		ListNode ans = obj.reverseList(linkedList.head);
		linkedList.display(ans);
	}
	public ListNode reverseList(ListNode head) {
		ListNode n = head;
		if(head==null) {
			return null;
		}
		while(n.next!=null) {
			n=n.next;
		}
		ListNode headAddress = n;
		while(n!=head) {
			ListNode prev = head;
			while(prev.next != n) {
				prev = prev.next;
			}
			n.next = prev;
			n = prev;
		}
		n.next = null;
		return headAddress;
	}

}