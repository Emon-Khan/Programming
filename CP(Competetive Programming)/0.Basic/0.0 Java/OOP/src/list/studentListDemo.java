package list;

import java.util.LinkedList;

public class studentListDemo {
    public static void main(String[] args) {
        LinkedList<student> list = new LinkedList<>();
        
        student s1 = new student(101, "Rahim", "Eleven");
        student s2 = new student(102, "Kahim", "Eleven");
        student s3 = new student(101, "Iliash", "Twelve");
        
        list.add(s1);
        list.add(s2);
        list.add(s3);
        
        for(student s: list){
            System.out.println(s.id+" "+s.name+" "+s.className);
        }
    }
}
