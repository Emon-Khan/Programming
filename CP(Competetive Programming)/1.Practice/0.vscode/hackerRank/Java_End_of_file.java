import java.util.*;

public class Java_End_of_file {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int count = 1;
        while (scan.hasNext()) {
            System.out.println(count++ + " " + scan.nextLine());
        }
        scan.close();
    }
}
