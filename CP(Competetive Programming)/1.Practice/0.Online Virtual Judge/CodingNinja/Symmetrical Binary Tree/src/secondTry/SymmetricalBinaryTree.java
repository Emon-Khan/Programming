package secondTry;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

public class SymmetricalBinaryTree {

	public static void main(String[] args) {
//      1, 2, 3, 4, null, null, null, null, null
//		1, 2, 2, 3, 4, 3, 4, null, null, null, null, null, null, null, null
		List<Integer> list = Arrays.asList(1, 2, 2, 3, 4, 4, 3, null, null, null, null, null, null, null, null);
		Queue<TreeNode> q = new LinkedList<>();
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
		boolean ans = isSymmetric(root);
		System.out.println(ans);

	}

	private static boolean isSymmetric(TreeNode root) {
		return root == null || traverse(root.left, root.right);
	}

	private static boolean traverse(TreeNode left, TreeNode right) {
		if (left == null || right == null)
			return left == right;
		if (left.val != right.val)
			return false;
		return traverse(left.left, right.right) && traverse(left.right, right.left);
	}

}

class TreeNode {
	int val;
	TreeNode left;
	TreeNode right;

	TreeNode(int val) {
		this.val = val;
		this.left = null;
		this.right = null;
	}
}
