package secondTry;

import DriverCode.LinkedList;
import DriverCode.ListNode;

public class MiddleOfTheLinkedList {
	LinkedList linkedList = new LinkedList();
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		MiddleOfTheLinkedList obj = new MiddleOfTheLinkedList();
		obj.linkedList.insert(1);
		obj.linkedList.insert(2);
		obj.linkedList.insert(3);
		obj.linkedList.insert(2);
		obj.linkedList.insert(3);
		obj.linkedList.insert(3);
		ListNode ans = obj.middleOfTheList(obj.linkedList.head);
		obj.linkedList.display(ans);

	}
	public ListNode middleOfTheList(ListNode head) {
		ListNode n = head;
		int size = 0;
		while(n!=null) {
			n = n.next;
			size++;
		}
		int middlePoint = size/2;
		n = head;
		while(middlePoint>0) {
			n=n.next;
			middlePoint--;
		}
		return n;
	}

}
