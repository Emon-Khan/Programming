package firstTry;

import java.util.HashMap;
import java.util.Map;

import DriverCode.LinkedList;
import DriverCode.ListNode;

public class DetectAndRemoveLoop {

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
		Map<ListNode, Integer> hm = new HashMap<ListNode, Integer>();
		ListNode n = head;
		isLoop(n,hm);
		return head;
	}

	public static void isLoop(ListNode n, Map<ListNode, Integer> hm) {
		while (n.next != null) {
			if (hm.containsKey(n.next)) {
				n.next = null;
				return;
			} else {
				hm.put(n, 1);
			}
			n = n.next;
		}
		return;
	}

}
