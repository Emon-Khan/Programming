package driverCode;

public class LinkedList {
	public ListNode head;


    public int size() {
    	ListNode n = head;
    	int count = 1;
    	while(n.next!=null) {
    		count++;
    		n=n.next;
    	}
    	return count;
    }
    public void insert(int data) {
        ListNode listNode = new ListNode(data);
        if (head == null) {
            head = listNode;
        } else {
            ListNode n = head;
            while (n.next != null) {
                n = n.next;
            }
            n.next = listNode;
        }
    }

    public void insertAtStart(int data) {
        ListNode nias = new ListNode(data);
        nias.next = head;
        head = nias;
    }

    public void insert(int index, int data) {
        if (index == 1) {
            insertAtStart(data);
        } else {
            ListNode ni = new ListNode(data);
            ListNode node = head;
            for (int i = 1; i < index - 1; i++) {
                node = node.next;
            }
            ni.next = node.next;
            node.next = ni;
        }
    }

    public void delete(int index) {
        ListNode node = head;
        if (index == 1) {
            head = node.next;
        } else {
            for (int i = 1; i < index - 1; i++) {
                node = node.next;
            }
            node.next = node.next.next;
        }
    }

    public void display() {
        ListNode node = head;
        while (node != null) {
            System.out.println(node.data);
            node = node.next;
        }
        //System.out.println(node.data);
    }

    public void display(ListNode head) {
        ListNode node = head;
        while (node != null) {
            System.out.println(node.data);
            node = node.next;
        }
    }
}
