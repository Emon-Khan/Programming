package usingAdjacencyList;

import java.util.Scanner;
import java.util.Vector;

public class GraphRepresentation {

	public static void main(String[] args) {
		int n, m;
		Scanner scanner = new Scanner(System.in);
		n = scanner.nextInt();
		m = scanner.nextInt();
		Vector<Integer> adj = new Vector<Integer>();
		for (int i = 0; i < m; i++) {
			int u, v;
			u = scanner.nextInt();
			v = scanner.nextInt();
			adj.add(u, v);
			adj.add(v, u);
		}
		scanner.close();
	}

}
