package firstTry;

import driverCodeForCodingNinja.LinkedList;
import driverCodeForCodingNinja.Node;

public class DeleteKthNodeFromEnd {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		LinkedList linkedList = new LinkedList();
		linkedList.insert(1);
		linkedList.insert(2);
		linkedList.insert(3);
		linkedList.insert(4);
		linkedList.display();
		Node ans = removeKthNode(linkedList.head, 1);
		linkedList.display(ans);
	}

	private static Node removeKthNode(Node head, int k) {
		// TODO Auto-generated method stub
		Node n = head;
		int count = 0;
		while (n != null) {
			n = (Node) n.next;
			count++;
		}
		k = count - k;
		n = head;
//		System.out.println(count);
		while (k > 1) {
			n = (Node) n.next;
			k--;
		}
		if (k == 0) {
			n = (Node) n.next;
			head = n;
		}else {
			n.next = n.next.next;
		}
		return head;
	}

}
