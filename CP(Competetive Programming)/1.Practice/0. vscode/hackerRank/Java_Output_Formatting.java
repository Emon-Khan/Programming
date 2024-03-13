import java.util.*;

public class Java_Output_Formatting {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
            System.out.println("================================");
            for(int i=0;i<3;i++){
                String s1=sc.next();
                int x=sc.nextInt();
                //Formatter f = new Formatter();
                //System.out.print(s1);
                //System.out.format("%15s", "");
                String str = String.format("%1$-"+14+"s", s1);
                String digit = String.format("%03d", x);
                System.out.printf("%s %s %n", str, digit);
                //Complete this line
            }
            System.out.println("================================");
    }

}
