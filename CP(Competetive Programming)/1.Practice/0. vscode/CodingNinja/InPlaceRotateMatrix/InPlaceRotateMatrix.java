import java.util.Scanner;

public class InPlaceRotateMatrix {
    public static void main(String[] args) {
        int n = 4;
        int[][] matrix = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 }, { 13, 14, 15, 16 } };
        inPlaceRotate(matrix, n);
        displayMatrix(matrix);
    }

    // with extra space
    // public static int[][] inPlaceRotate(int[][] arr, int n) {
    // int[][] newOne = new int[n][n];
    // for (int i = 0; i < n; i++) {
    // for (int j = n - 1; j >= 0; j--) {
    // newOne[(n - 1) - j][i] = arr[i][j];
    // }
    // }
    // return newOne;
    // }

    // without extra space by forming cycle
    // public static void inPlaceRotate(int[][] arr, int n) {
    // for (int i = 0; i < n / 2; i++) {
    // for (int j = i; j < n - i - 1; j++) {
    // int temp = arr[i][j];
    // arr[i][j] = arr[j][n - 1 - i];
    // arr[j][n - 1 - i] = arr[n - 1 - i][n - 1 - j];
    // arr[n - 1 - i][n - 1 - j] = arr[n - 1 - j][i];
    // arr[n - 1 - j][i] = temp;
    // }
    // }
    // }

    // without extra space by using reverse + transpose
    public static void inPlaceRotate(int[][] arr, int n) {
        reverse(arr, n);
        // displayMatrix(arr);
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (i != j) {
                    arr[i][j] += arr[j][i];
                    arr[j][i] = arr[i][j] - arr[j][i];
                    arr[i][j] = arr[i][j] - arr[j][i];
                }
            }
        }
    }

    // reverse function for java
    public static int[][] reverse(int[][] arr, int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n / 2; j++) {
                int temp = arr[i][j];
                arr[i][j] = arr[i][n - 1 - j];
                arr[i][n - 1 - j] = temp;
            }
        }
        return arr;
    }

    public static void displayMatrix(int[][] matrix) {
        for (int[] row : matrix) {
            for (int val : row) {
                System.out.print(val + " ");
            }
            System.out.print("\n");
        }
    }

}
