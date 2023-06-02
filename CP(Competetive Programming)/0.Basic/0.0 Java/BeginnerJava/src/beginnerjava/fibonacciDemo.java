package beginnerjava;

public class fibonacciDemo {
    public static void main(String[] args) {
        int first = 0, second = 1, temp;
        System.out.println(first);
        for(int i = 0; i<10; i++){
            System.out.println(second);
            temp = second;
            second = first + second;
            first = temp;
        }
        
    }
}
