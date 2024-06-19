package implementQueueUsingLinkedList;

public class Queue {
	ListNode node;
	ListNode head = null;
	int val;
	Queue() {
        // Implement the Constructor
		node = new ListNode();
    }

    /*----------------- Public Functions of Queue -----------------*/

    boolean isEmpty() {
        // Implement the isEmpty() function
    	if(head==null) {
    		return true;
    	}else {
    		return false;
    	}
    }

    void enqueue(int data) {
        // Implement the enqueue() function
    	node = new ListNode(data);
    	if(head == null) {
    		head = node;
    	}else {
    		ListNode n = head;
    		while(n.next!=null) {
    			n=n.next;
    		}
    		n.next = node;
    	}
    }

    int dequeue() {
        // Implement the dequeue() function
    	if(head!=null) {
    		val = head.data;
    		head = head.next;
    	}else {
    		val = -1;
    	}
    	return val;
    }

    int front() {
        // Implement the front() function
    	if(head!=null) {
    		val = head.data;
    	}else {
    		val = -1;
    	}
    	return val;
    }

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Queue queue = new Queue();
		System.out.println(queue.isEmpty());
		queue.enqueue(1);
		queue.enqueue(2);
		System.out.println(queue.front());
		System.out.println(queue.dequeue());
		System.out.println(queue.front());
		System.out.println(queue.dequeue());
		System.out.println(queue.front());
		System.out.println(queue.dequeue());
	}

}
