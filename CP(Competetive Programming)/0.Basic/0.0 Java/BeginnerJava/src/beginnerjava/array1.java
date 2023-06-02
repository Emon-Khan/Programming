package beginnerjava;

public class array1 {
    public static void main(String[] args) {
        int[] number = new int[5];
        int[] number2 = new int[10];
        number[0] = 19;
        number[1] = 19;
        number[2] = 19;
        number[3] = 19;
        number[4] = 24;
        int len = number.length;
        int sum = 0;
        for(int i = 0; i<len; i++){
            sum += number[i];
        }
        //System.out.println(len);
        System.out.println("Sum of array = "+sum);
    }
}
