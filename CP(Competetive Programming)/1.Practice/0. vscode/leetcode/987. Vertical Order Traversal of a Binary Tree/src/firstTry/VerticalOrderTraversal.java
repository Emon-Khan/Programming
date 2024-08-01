package firstTry;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;
import java.util.PriorityQueue;
import java.util.Queue;
import java.util.TreeMap;

// Take hint from striver

public class VerticalOrderTraversal {

	public static void main(String[] args) {
		VerticalOrderTraversal obj = new VerticalOrderTraversal();
		List<Integer> list = Arrays.asList(1, 2, 3, 4, 10, 9, 10, null, 5, null, null, null, null, null, null, null, 6,
				null, null);
		Queue<TreeNode> q = new LinkedList<TreeNode>();
		int count = 0;
		TreeNode node = new TreeNode(list.get(count));
		TreeNode root = node;
		q.add(node);
		while (!q.isEmpty()) {
			node = q.poll();
			count++;
			if (list.get(count) != null) {
				node.left = new TreeNode(list.get(count));
				q.add(node.left);
			}
			count++;
			if (list.get(count) != null) {
				node.right = new TreeNode(list.get(count));
				q.add(node.right);
			}
		}
		List<List<Integer>> ans = obj.verticalTraversal(root);
		for (List<Integer> li : ans) {
			for (Integer val : li) {
				System.out.println(val);
			}
		}
//		inOrder(root);
	}

	private List<List<Integer>> verticalTraversal(TreeNode root) {
		TreeMap<Integer, TreeMap<Integer, PriorityQueue<TreeNode>>> map = new TreeMap<>();
		Queue<Tuple> queue = new LinkedList<Tuple>();
		queue.add(new Tuple(root, 0, 0));
		while (!queue.isEmpty()) {
			Tuple tuple = queue.poll();
			TreeNode node = tuple.node;
			int x = tuple._row; // level
			int y = tuple._col; // vertical
			if (!map.containsKey(y)) {
				map.put(y, new TreeMap<>());
			}
			if (!map.get(y).containsKey(x)) {
				map.get(y).put(x, new PriorityQueue<>());
			}
			map.get(y).get(x).add(node);
			if (node.left != null) {
				queue.add(new Tuple(node.left, x + 1, y - 1));
			}
			if (node.right != null) {
				queue.add(new Tuple(node.right, x + 1, y + 1));
			}
		}
		List<List<Integer>> l = new ArrayList<>();
		for (TreeMap<Integer, PriorityQueue<TreeNode>> vertical : map.values()) {
			l.add(new ArrayList<>());
			for (PriorityQueue<TreeNode> levelNode : vertical.values()) {
				while(!levelNode.isEmpty()) {
					l.get(l.size()-1).add(levelNode.poll().val);
				}
			}
		}
		return l;
	}

	/*
	 * private static void inOrder(TreeNode root) { if(root==null)return;
	 * inOrder(root.left); System.out.println(root.val);// 4 5 6 2 10 1 9 3 10
	 * inOrder(root.right); }
	 */

}

class Tuple {
	TreeNode node;
	int _row;
	int _col;

	Tuple(TreeNode node, int _row, int _col) {
		this.node = node;
		this._row = _row;
		this._col = _col;
	}
}

class TreeNode implements Comparable<TreeNode>{
	int val;
	TreeNode left;
	TreeNode right;

	TreeNode() {
	}

	TreeNode(int val) {
		this.val = val;
	}

	TreeNode(int val, TreeNode left, TreeNode right) {
		this.val = val;
		this.left = left;
		this.right = right;
	}

	@Override
	public int compareTo(TreeNode o) {
		return Integer.compare(this.val, o.val);
	}
}
