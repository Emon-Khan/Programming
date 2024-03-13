import java.util.Scanner;

public class PlusOne {
    public static void main(String[] args) {
        int size;
        Scanner scan = new Scanner(System.in);
        size = scan.nextInt();
        int[] array = new int[size];
        for (int i = 0; i < size; i++) {
            int digit = scan.nextInt();
            array[i] = digit;
        }
        for (int i = 0; i < size; i++) {
            System.out.print(array[i] + " ");
        }
        // System.out.println(array);
        PlusOne obj = new PlusOne();
        int[] ans = obj.plusOne(array);

        for (int i = 0; i < size; i++) {
            System.out.print(ans[i] + " ");
        }
        // System.out.println(ans);
        scan.close();
    }

    public int[] plusOne(int[] digits) {
        int sz = digits.length;
        //System.out.println(" size " + sz);
        for (int i = sz - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        digits = new int[sz + 1];
        digits[0] = 1;
        return digits;
    }
}
