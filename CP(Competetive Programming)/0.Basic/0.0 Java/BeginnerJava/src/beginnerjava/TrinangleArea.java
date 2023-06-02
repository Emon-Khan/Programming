package beginnerjava;

import java.util.Scanner;

public class TrinangleArea {

    public static void main(String[] args) {
        double base, height, area;
        Scanner input = new Scanner(System.in);
        System.out.print("Enter base: ");
        base = input.nextDouble();
        System.out.print("Enter height: ");
        height = input.nextDouble();
        area = 0.5 * base * height;
        System.out.println("Area of a triangle: " + area);
    }
}
