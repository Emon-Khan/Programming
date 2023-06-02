package file;

import java.util.Formatter;
import java.util.Scanner;

public class fileDemo2 {
    public static void main(String[] args) {
        String id, name;
        try {
            Formatter formatter = new Formatter("C:/Users/Rkemo/Documents/Person/Student.txt");
            Scanner input = new Scanner(System.in);
            System.out.println("How many students: ");
            int num =  input.nextInt();
            for(int i = 1; i<=num; i++){
                System.out.print("Enter student id: ");
                id = input.next();
                System.out.print("Enter student Name: ");
                name = input.next();
                formatter.format("%s %s\r\n", id, name);
            }
            
            /*formatter.format("%s %s\r\n", "102", "Emon");
            formatter.format("%s %s\r\n", "103", "Hasan");
            formatter.format("%s %s\r\n", "104", "Sadat");*/
            
            formatter.close();
            
        } catch (Exception ex) {
            System.out.println(ex);
        }
    }
}
