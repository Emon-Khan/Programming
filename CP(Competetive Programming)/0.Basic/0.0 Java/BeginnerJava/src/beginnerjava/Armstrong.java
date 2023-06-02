package beginnerjava;

import java.util.Scanner;

public class Armstrong {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num, sum = 0, temp, r;
        num = input.nextInt();
        temp = num;
        while (temp != 0) {
            r = temp % 10;
            sum += Math.pow(r, 3.0);
            temp /= 10;
        }
        if (num == sum) {
            System.out.println(num + " is a armstrong number...");
        } else {
            System.out.println(num + " is not a armstrong number...");
        }
    }
}
