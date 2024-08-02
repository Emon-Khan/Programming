package secondTry;

import DriverCode.LinkedList;
import DriverCode.ListNode;

public class AddTwoNumber {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		LinkedList linkedList1 = new LinkedList();
		LinkedList linkedList2 = new LinkedList();
		linkedList1.insert(1);
		linkedList1.insert(2);
		linkedList1.insert(3);
		linkedList1.insert(5);
		linkedList1.insert(5);
		linkedList2.insert(6);
		linkedList2.insert(4);
		linkedList2.insert(3);
		AddTwoNumber obj = new AddTwoNumber();
		ListNode ans = obj.addTwoNumbers(linkedList1.head, linkedList2.head);
		linkedList2.display(ans);
	}

	public ListNode addTwoNumbers(ListNode head1, ListNode head2) {
		// TODO Auto-generated method stub
		ListNode n1 = head1;
		ListNode n2 = head2;
		int carry = 0;
		int sum = 0;
		while (n1 != null && n2 != null) {
			sum = (n2.data + n1.data + carry);
			n2.data = sum % 10;
			carry = sum / 10;
			n1 = n1.next;
			n2 = n2.next;
		}
		while (n2 != null || n1 != null) {
			if(n1 == null) {
				sum = (n2.data + carry);
				n2.data = sum % 10;
				n2 = n2.next;
			}else {
				sum = (n1.data + carry);
				calculation(sum%10, head2);
				n1 = n1.next;
			}
			carry = sum / 10;
		}
		if(carry > 0 && n1==null && n2 == null) {
			calculation(carry, head2);
//			ListNode newNode = new ListNode(carry);
//			ListNode temp = head2;
//			while (temp.next != null) {
//				temp = temp.next;
//			}
//			temp.next = newNode;
		}
		return head2;

	}
	public void calculation(int value, ListNode head2){
		ListNode newNode = new ListNode(value);
		ListNode temp = head2;
		while (temp.next != null) {
			temp = temp.next;
		}
		temp.next = newNode;
	}

}
