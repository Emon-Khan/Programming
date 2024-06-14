import DriverCode.LinkedList;
import DriverCode.ListNode;

public class MiddleOfTheLinkedList {
//    public static ListNode head;

    public static void main(String[] args) {
        MiddleOfTheLinkedList objMiddleLinkedList = new MiddleOfTheLinkedList();
        LinkedList objLinkedList = new LinkedList();
        objLinkedList.insert(1);
        objLinkedList.insert(2);
        objLinkedList.insert(3);
        objLinkedList.insert(4);
        objLinkedList.insert(5);
        ListNode ans = middleNode(objLinkedList.head);
        objLinkedList.display(ans);
    }

    public static ListNode middleNode(ListNode head) {
        int count = 0;
        ListNode n = head;
        while (n != null) {
            n = n.next;
            count++;
        }
        n = head;
        count /=2;
        for(int i = 0; i<count; i++){
            n=n.next;
        }
        return n;
    }
}
