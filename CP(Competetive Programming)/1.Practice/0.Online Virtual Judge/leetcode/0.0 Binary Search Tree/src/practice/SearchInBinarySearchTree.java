package practice;

import java.util.Arrays;
import java.util.List;

public class SearchInBinarySearchTree {

	public static void main(String[] args) {
		SearchInBinarySearchTree obj = new SearchInBinarySearchTree();
		TreeNode root = new TreeNode(5);
		List<Integer> list = Arrays.asList(2, 7, 3, 4, 6);
		for (Integer var : list) {
			root = obj.recursion(root, var);
		}
		TreeNode node = obj.searchBST(root, 8);
		if(node!=null) {
			System.out.print("Found");
		}else {
			System.out.print("Not Found");
		}
		
	}

	private TreeNode searchBST(TreeNode root, int i) {
		while (root != null && root.val != i) {
			if (i < root.val) {
				root = root.left;
			} else {
				root = root.right;
			}
		}
		return root;
	}

	private TreeNode recursion(TreeNode node, Integer var) {
		if (node == null) {
			return new TreeNode(var);
		}
		if (var > node.val) {
			node.right = recursion(node.right, var);
		} else if (var < node.val) {
			node.left = recursion(node.left, var);
		}
		return node;
	}
}

