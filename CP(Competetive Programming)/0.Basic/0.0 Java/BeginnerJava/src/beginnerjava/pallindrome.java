package beginnerjava;

import java.util.Scanner;

public class pallindrome {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num, sum = 0, temp;
        num = input.nextInt();
        temp = num;
        while (temp != 0) {
            sum = sum * 10 + temp % 10;
            temp /= 10;
        }
        if(sum == num){
            System.out.println(num+" is Palindrome....");
        }else{
            System.out.println(num+" is not Palindrome....");
        }
    }
}
