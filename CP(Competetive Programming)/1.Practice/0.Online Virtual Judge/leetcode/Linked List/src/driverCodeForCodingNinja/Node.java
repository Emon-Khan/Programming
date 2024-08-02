package driverCodeForCodingNinja;

public class Node extends ListNode{
	public Node prev;

	Node(int data) {
		super(data);
        this.next = null;
        this.prev = null;
	}
    Node()
    {
        this.data=0;
        this.next = null;
        this.prev = null;
    }
    Node(int data, Node next)
    {
        this.data = data;
        this.next = next;
        this.prev = next;
    }

}
