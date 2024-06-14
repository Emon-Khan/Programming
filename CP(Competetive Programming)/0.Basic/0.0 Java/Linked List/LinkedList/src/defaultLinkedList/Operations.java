package defaultLinkedList;

import java.util.LinkedList;

public class Operations {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		LinkedList<Integer> ll = new LinkedList<Integer>();
		ll.add(5);
		ll.add(13);
		ll.add(17);
		ll.add(31);
		for(int value: ll) {
			System.out.println(value);
		}
	}

}
