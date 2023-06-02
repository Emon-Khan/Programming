package beginnerjava;

import java.util.Scanner;

public class sumofDigit {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num, temp, sum = 0;
        num = input.nextInt();
        temp = num;
        while (temp != 0) {
            sum += temp%10;
            temp /= 10;
        }
        System.out.println(sum);
    }
}
