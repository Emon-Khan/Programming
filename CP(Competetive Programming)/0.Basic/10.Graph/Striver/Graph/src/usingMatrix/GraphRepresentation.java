package usingMatrix;

import java.util.Scanner;

public class GraphRepresentation {
	public static void main(String[] args) {
		int n, m;
		Scanner scanner = new Scanner(System.in);
		n = scanner.nextInt();
		m = scanner.nextInt();
		int[][] adj = new int[n + 1][m + 1];
		for (int i = 0; i < m; i++) {
			int u, v;
			u = scanner.nextInt();
			v = scanner.nextInt();
			adj[u][v] = 1;
			adj[v][u] = 1;
		}
		scanner.close();
	}
}
