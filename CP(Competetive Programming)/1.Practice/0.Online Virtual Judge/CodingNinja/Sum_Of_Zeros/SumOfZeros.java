import java.util.ArrayList;
import java.util.Scanner;

public class SumOfZeros {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        for (int i = 0; i < t; i++) {
            int n, m;
            n = scan.nextInt();
            m = scan.nextInt();
            ArrayList<ArrayList<Integer>> arr = new ArrayList<>();
            for (int j = 0; j < n; j++) {
                arr.add(new ArrayList<Integer>());
                for (int k = 0; k < m; k++) {
                    int val = scan.nextInt();
                    arr.get(j).add(val);
                }
            }
            for (ArrayList<Integer> temp : arr) {
                for (int num : temp) {
                    System.out.print(num + " ");
                }
                System.out.println();
            }
            int ans = coverageOfMatrix(arr);
            System.out.println(ans);
        }
    }

    public static Integer coverageOfMatrix(ArrayList<ArrayList<Integer>> mat) {
        int numRows = mat.size();
        int numCols = 0, count = 0;
        if (numRows > 0) {
            numCols = mat.get(0).size();
        }
        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j < numCols; j++) {
                if (mat.get(i).get(j) == 0) {
                    if ((i - 1) >= 0) {
                        if (mat.get(i - 1).get(j) == 1) {
                            count++;
                        }
                    }
                    if ((j - 1) >= 0) {
                        if (mat.get(i).get(j - 1) == 1) {
                            count++;
                        }
                    }
                    if ((i + 1) < numRows) {
                        if (mat.get(i + 1).get(j) == 1) {
                            count++;
                        }
                    }
                    if ((j + 1) < numCols) {
                        if (mat.get(i).get(j + 1) == 1) {
                            count++;
                        }
                    }
                }
            }
        }
        return count;
    }
}
