package firstTry;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

import driverCode.TreeNode;

public class ValidateBinarySearchTree {
	List<Integer> list = new ArrayList<Integer>();

	public static void main(String[] args) {
		ValidateBinarySearchTree obj = new ValidateBinarySearchTree();
		Queue<TreeNode> queue = new LinkedList<TreeNode>();
		TreeNode root = new TreeNode(-2147483648);
		queue.add(root);
//		obj.list = Arrays.asList(1, 6, -1, 4, -1, 8, -1, -1, -1, -1);
//		obj.list = Arrays.asList(4, 31, 2, 6, 28, 45, 1, 3, 5, 7, 25, 29, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
//				-1, -1, -1);
//		obj.list = Arrays.asList(4, 31, 2, -1, 28, 45, 1, -1, 25, 29, 10, -1, -1, -1, -1, -1, -1, -1, -1, -1);
		obj.list = Arrays.asList(-2147483648, -1, -1, -1);
		int i = 0;
		TreeNode node = null;
		int data;
		while (!queue.isEmpty()) {
			TreeNode tempNode = queue.poll();
			data = obj.list.get(i);
			i++;
			if (data != -1) {
				node = new TreeNode(data);
				queue.add(node);
				tempNode.left = node;
			}
			data = obj.list.get(i);
			i++;
			if (data != -1) {
				node = new TreeNode(data);
				queue.add(node);
				tempNode.right = node;
			}
		}
		obj.list = new ArrayList<Integer>();
		obj.inOrderTraversal(root);
		for (Integer value : obj.list) {
			System.out.println(value);
		}
		boolean isValid = obj.isValidBST(root);
		System.out.print(isValid);

	}

	public boolean isValidBST(TreeNode root) {

		return isValidBST(root, Integer.MIN_VALUE, Integer.MAX_VALUE); // -2147483648 2147483648
	}

	private boolean isValidBST(TreeNode root, long min, long max) { // 1 5
		if (root == null) {
			return true;
		}
		if (min <= root.val && root.val <= max) {
			return isValidBST(root.left, min, (long) root.val - 1) && isValidBST(root.right, (long) root.val + 1, max);
		} else {
			return false;
		}
	}

	/******************************************************
	 * Optional Part
	 ******************************************************/
	private void inOrderTraversal(TreeNode root) {
		if (root == null) {
			return;
		}
		inOrderTraversal(root.left);
		list.add(root.val);
		inOrderTraversal(root.right);
	}

}
