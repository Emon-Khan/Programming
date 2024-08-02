package firstTry;

import DriverCode.LinkedList;
import DriverCode.ListNode;

public class LinkedListCycleTwo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		LinkedList linkedList = new LinkedList();
		linkedList.insert(1);
		linkedList.insert(2);
		linkedList.insert(3);
		linkedList.insert(4);
		ListNode n = linkedList.head;
		ListNode firstNode = linkedList.head.next;
//		while (n.next != null) {
//			n = n.next;
//		}
//		n.next = firstNode;
		ListNode pos = detectCycle(linkedList.head);
//		int count = 6;
//		while(count>0) {
//			System.out.println(pos.data);
//			pos = pos.next;
//			count--;
//		}
		linkedList.display(pos);
	}

	private static ListNode detectCycle(ListNode head) {
		// TODO Auto-generated method stub
		ListNode slow = head;
		ListNode fast = head;
		ListNode temp = null;
		while (fast != null && fast.next != null) {
			slow = slow.next;
			fast = fast.next.next;
			if(slow==fast) {
				temp = slow;
				break;
			}
		}
		ListNode start = head;
		while(start!=temp && temp!=null) {
			start = start.next;
			temp = temp.next;
		}
		
		return start; // In leetcode problem I have to return temp as
//		the output because you have to show -1, but start is indicating the 
//		head node which is 0-th index
	}

}
