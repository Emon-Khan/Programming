package secondTry;

import DriverCode.LinkedList;
import DriverCode.ListNode;

public class ReverseLinkedListUsingRecursion {

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
		return recursion(null, head, null);
	}
	public ListNode recursion(ListNode prev, ListNode cur, ListNode n) {
		if(cur==null) {
			return prev;
		}
		n = cur.next;
		cur.next = prev;
		return recursion(cur,n,n);
	}
	

}
