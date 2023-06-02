package beginnerjava;

import java.util.Scanner;

public class patternAdvance {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num;
        num = input.nextInt();
        for (int i = 1; i <= num; i++) {
            for (int j = num; j>=i; j--) {
                System.out.print(j+" ");
            }
            System.out.println();
        }
    }
}
