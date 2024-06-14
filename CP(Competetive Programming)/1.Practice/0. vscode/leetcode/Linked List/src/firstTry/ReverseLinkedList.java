package firstTry;
import DriverCode.LinkedList;
import DriverCode.ListNode;

public class ReverseLinkedList {
    public ListNode head;

    public static void main(String[] args) {
        ReverseLinkedList objReverseLinkedList = new ReverseLinkedList();
        LinkedList objLinkedList = new LinkedList();
        objLinkedList.insert(1);
        objLinkedList.insert(2);
        objLinkedList.insert(3);
        objLinkedList.insert(4);
        objLinkedList.insert(5);
        ListNode ans = objReverseLinkedList.reverseList(objReverseLinkedList.head);
        objLinkedList.display(ans);
        //obj.display();
    }


    public ListNode reverseList(ListNode head) {
        ListNode prev = null;
        while (head != null) {
            ListNode next = head.next;
            head.next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
}
