package beginnerjava;
import java.util.Scanner;
public class TemperatureDemo {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        double c, f;
        c = input.nextDouble();
        f = 1.8*c+32;
        System.out.println("Farenheit: "+f);
        
    }
}
