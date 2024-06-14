package firstTry;
import DriverCode.LinkedList;
import DriverCode.ListNode;

public class AddTwoNumbers {
    public static int carry = 0;
    static LinkedList objLinkedList = new LinkedList();
    static LinkedList objLinkedList2 = new LinkedList();

    public static void main(String[] args) {
        objLinkedList.insert(9);
        objLinkedList.insert(9);
        objLinkedList.insert(9);
        objLinkedList.insert(9);
        objLinkedList.display();
        //LinkedList objLinkedList2 = new LinkedList();
        objLinkedList2.insert(9);
        objLinkedList2.insert(9);
        objLinkedList2.insert(9);
        objLinkedList2.display();
        ListNode ans = addTwoNumbers(objLinkedList.head, objLinkedList2.head);
        LinkedList objLinkedList3 = new LinkedList();
        objLinkedList3.display(ans);
    }

    public static ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode calc;
        int size1 = size(l1);
        int size2 = size(l2);
        if (size1 > size2) {
            calc = calc(l1, l2);
        } else {
            calc = calc(l2, l1);
        }
        return calc;
    }

    public static int size(ListNode head) {
        ListNode n = head;
        int count = 0;
        while (n != null) {
            count++;
            n = n.next;
        }
        return count;
    }

    public static ListNode calc(ListNode list1, ListNode list2) {
        ListNode prev = list1;
        ListNode n1 = list1;
        ListNode n2 = list2;
        carry = 0;
        while (n1 != null && n2 != null) {
            n1.data = n1.data + n2.data + carry;
            if (n1.data >= 10) {
                n1.data = n1.data % 10;
                carry = 1;
            } else {
                carry = 0;
            }
            prev = n1;
            n1 = n1.next;
            n2 = n2.next;
        }
        while (n1 != null) {
            n1.data += carry;
            if (n1.data >= 10) {
                n1.data = n1.data % 10;
                carry = 1;
            } else {
                carry = 0;
            }
            prev = n1;
            n1 = n1.next;
        }
        if (carry != 0) {
            /*LinkedList objLinkedList3 = new LinkedList();
            objLinkedList3.insert(carry);*/
            ListNode temp = new ListNode(carry);
            prev.next = temp;
        }
        n1 = list1;
        return n1;
    }
}
