package driverCodeForCodingNinja;

public class LinkedList {
    public Node head;


    public int size() {
    	Node n = head;
    	int count = 1;
    	while(n.next!=null) {
    		count++;
    		n=(Node) n.next;
    	}
    	return count;
    }
    public void insert(int data) {
        Node listNode = new Node(data);
        if (head == null) {
            head = listNode;
        } else {
            Node n = head;
            while (n.next != null) {
                n = (Node) n.next;
            }
            n.next = listNode;
        }
    }

    public void insertAtStart(int data) {
        Node nias = new Node(data);
        nias.next = head;
        head = nias;
    }

    public void insert(int index, int data) {
        if (index == 1) {
            insertAtStart(data);
        } else {
            Node ni = new Node(data);
            Node node = head;
            for (int i = 1; i < index - 1; i++) {
                node = (Node) node.next;
            }
            ni.next = node.next;
            node.next = ni;
        }
    }

    public void delete(int index) {
        Node node = head;
        if (index == 1) {
            head = (Node) node.next;
        } else {
            for (int i = 1; i < index - 1; i++) {
                node = (Node) node.next;
            }
            node.next = node.next.next;
        }
    }

    public void display() {
        Node node = head;
        while (node != null) {
            System.out.println(node.data);
            node = (Node) node.next;
        }
        //System.out.println(node.data);
    }

    public void display(Node head) {
        Node node = head;
        while (node != null) {
            System.out.println(node.data);
            node = (Node) node.next;
        }
    }
}
