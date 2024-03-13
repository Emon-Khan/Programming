import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class SecondLargestDigit {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String str = scan.nextLine();
        //System.out.println(str);
        int ans = secondHighest(str);
        System.out.println(ans);
    }

    public static int secondHighest(String s) {
        int length = s.length();
        List<Integer> list = new ArrayList<>();
        for (int i = 0; i < length; i++) {
            if (47 < s.charAt(i) && 58 > s.charAt(i)) {
                list.add((int) s.charAt(i) - 48);
            }
        }
        // System.out.println(list);
        int val = secondHigestVal(list);
        return val;
    }

    public static int secondHigestVal(List<Integer> list) {
        int highestVal = Integer.MIN_VALUE, secondHighVal = highestVal;
        int size = list.size();
        if (size < 2) {
            return -1;
        }
        for (int i = 0; i < size; i++) {
            if (list.get(i) > highestVal) {
                secondHighVal = highestVal;
                highestVal = list.get(i);
            } else if (list.get(i) > secondHighVal && list.get(i) < highestVal) {
                secondHighVal = list.get(i);
            }
        }
        if (secondHighVal == Integer.MIN_VALUE) {
            return -1;
        }
        return secondHighVal;
    }

}