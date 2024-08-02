import java.util.Scanner;

/**
 * MatrixIsSymmetric
 */
public class MatrixIsSymmetric {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        while (t-- > 0) {
            int n = scan.nextInt();
            int[][] matrix = new int[n][n];
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    int val = scan.nextInt();
                    matrix[i][j] = val;
                }
            }
            boolean ans = isMatrixSymmetric(matrix);
            System.out.println(ans);
        }
        scan.close();
    }

    public static boolean isMatrixSymmetric(int[][] matrix) {
        int flag = 0;
        int len = matrix.length;
        for (int i = 0; i < len; i++) {
            for (int j = i + 1; j < len; j++) {
                if (matrix[i][j] != matrix[j][i]) {
                    flag++;
                    i = len;
                    break;
                }
            }
        }
        if (flag > 0) {
            return false;
        }
        return true;
    }
}