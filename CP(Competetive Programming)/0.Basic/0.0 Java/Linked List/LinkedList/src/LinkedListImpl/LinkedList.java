package LinkedListImpl;

public class LinkedList {
    public Node head;

    public void insert(int value) {
        Node node = new Node();
        node.value = value;
        node.next = null;
        if (head == null) {
            head = node;
        } else {
            Node n = head;
            while (n.next != null) {
                n = n.next;
            }
            n.next = node;
        }
    }

    public void insertAtStart(int value) {
        Node nias = new Node();
        nias.value = value;
        nias.next = head;
        head = nias;
    }

    public void insert(int index, int value) {
        if (index == 1) {
            insertAtStart(value);
        } else {
            Node ni = new Node();
            ni.value = value;
            ni.next = null;
            Node node = head;
            for (int i = 1; i < index - 1; i++) {
                node = node.next;
            }
            ni.next = node.next;
            node.next = ni;
        }
    }

    public void delete(int index) {
        Node n = head;
        if (index == 1) {
            head = n.next;
        } else {
            for (int i = 1; i < index - 1; i++) {
                n = n.next;
            }
            n.next = n.next.next;
        }
    }

    public void show() {
        Node node = head;
        while (node.next != null) {
            System.out.println(node.value);
            node = node.next;
        }
        System.out.println(node.value);
    }
}
