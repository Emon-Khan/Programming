package LinkedListImpl;

public class Main {
    public static void main(String[] args) {
        LinkedList list = new LinkedList();
        list.insert(5);
        list.insert(9);
        list.insert(18);
        list.show();
//       list.insertAtStart(27);
//       list.show();
        list.insert(2,36);
        list.delete(1);
        list.show();
    }
}
