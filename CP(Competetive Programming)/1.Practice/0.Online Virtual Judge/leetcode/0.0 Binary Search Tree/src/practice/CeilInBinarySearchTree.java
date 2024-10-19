package practice;

import java.util.Arrays;
import java.util.List;

public class CeilInBinarySearchTree {

	public static void main(String[] args) {
		CeilInBinarySearchTree obj = new CeilInBinarySearchTree();
		TreeNode root = new TreeNode(6);
		List<Integer> list = Arrays.asList(3, 11, 7, 18);
		for (Integer i : list) {
			root = obj.recursion(root, i);
		}
		int ans = obj.ceilInBST(root, 2);
		System.out.print(ans);
	}

	private int ceilInBST(TreeNode root, int i) {
		int ceil = -1;
		while (root != null) {
			if (i == root.val) {
				ceil = root.val;
				return ceil;
			}
			if (root.val < i) {
				root = root.right;
			} else {
				ceil = root.val;
				root = root.left;
			}
		}
		return ceil;
	}

	private TreeNode recursion(TreeNode root, Integer i) {
		if (root == null) {
			return new TreeNode(i);
		}
		if (i < root.val) {
			root.left = recursion(root.left, i);
		} else {
			root.right = recursion(root.right, i);
		}
		return root;
	}
}
