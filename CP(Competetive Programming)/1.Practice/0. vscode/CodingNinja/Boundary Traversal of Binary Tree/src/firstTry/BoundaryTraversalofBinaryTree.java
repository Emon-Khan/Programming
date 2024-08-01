package firstTry;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import java.util.Stack;

public class BoundaryTraversalofBinaryTree {
//	static List<Integer> lValues = new ArrayList<Integer>();
//	static List<Integer> leaf = new ArrayList<Integer>();
	static Stack<Integer> rValues = new Stack<Integer>();
	static List<Integer> finalList = new ArrayList<Integer>();
	static TreeNode head;

	public static void main(String[] args) {
		BoundaryTraversalofBinaryTree obj = new BoundaryTraversalofBinaryTree();
		Queue<TreeNode> queue = new LinkedList<TreeNode>();
		// Used null in the place of -1
//		Test Case 1: 10,5,20,3,8,18,25,null,null,7,null,null,null,null,null,null,null
		/*
		 * Test Case 2: 100, 50, 150, 25, 75, 140, 200, null, 30, 70, 80, null, null,
		 * null, null, null, 35, null, null, null, null, null, null
		 */
		/*
		 * Test Case 3: 32, 20, 31, 38, 22, 19, 18, 33, 12, 44, 41, 10, 27, null, 37,
		 * null, 7, null, null, null, null, 43, null, 1, null, null, 23, null, null,
		 * null, null, null, null, 21, 29, 30, null, 5, null, null, null, null, null,
		 * null, null
		 */
		/*
		 * Custom Test Case From TC3: 32, 20, 31, 38, 22, 19, null, 33, 12, 44, 41, 10,
		 * 27, null, 7, null, null, null, null, 43, null, 1, null, null, 23, null, null,
		 * null, null, 21, 29, 30, null, 5, null, null, null, null, null, null, null
		 */
		/*
		 * Test Case 21: 15, 11, null, null, 51, 20, null, 18, null, 38, null, null, 22,
		 * null, 62, 8, null, null, 33, null, 41, null, 64, null, 47, 21, null, null,
		 * 34, 13, null, 57, null, 26, null, 14, null, null, 19, null, 25, 50, null,
		 * null, 5, 63, null, null, 43, null, 31, 52, null, 12, null, null, 35, null,
		 * 54, 17, null, 10, null, 2, null, 59, null, 3, null, null, 1, null, 61, 16,
		 * null, null, 58, 9, null, null, null
		 */

		List<Integer> list = Arrays.asList(10, 5, 20, 3, 8, 18, 25, null, null, 7, null, null, null, null, null, null,
				null);
		int i = 0;
		if (list.get(i) != null) {
			obj.head = new TreeNode(list.get(i));
		}
		queue.add(obj.head);
		while (!queue.isEmpty() && i < list.size() - 1) {
			TreeNode temp = queue.poll();
			i++;
			if (list.get(i) != null) {
				temp.left = new TreeNode(list.get(i));
				queue.add(temp.left);
			}
			i++;
			if (list.get(i) != null) {
				temp.right = new TreeNode(list.get(i));
				queue.add(temp.right);
			}
		}
		List<Integer> ans = obj.traverseBoundary(obj.head);
		System.out.println(ans);

	}

	private static void leftValues(TreeNode node, TreeNode parent) {
		if (node == null) {
			leftValues(parent.right, parent);
			return;
		}
		if (node.left == null && node.right == null) {
			return;
		}
		if (head.right == node) {
			return;
		}
		finalList.add(node.data);

		leftValues(node.left, node);
	}

	private static void leafValues(TreeNode node, TreeNode parent) {
		if (node == null) {
			return;
		}
		if (node.left == null && node.right == null) {
			finalList.add(node.data);
			return;
		}

		leafValues(node.left, node);
		leafValues(node.right, node);
	}

	private static void rightValues(TreeNode node, TreeNode parent) {
		if (node == null) {
			rightValues(parent.left, parent);
			return;
		}
		if (node.left == null && node.right == null) {

			return;
		}
		if (head.left == node) {
			return;
		}
		rValues.add(node.data);

		rightValues(node.right, node);
	}

	public static List<Integer> traverseBoundary(TreeNode root) {
		leftValues(root, null);
		leafValues(root, null);
		rightValues(root.right, root);
		System.out.println(finalList);
		System.out.println(rValues);
		while (!rValues.isEmpty()) {
			finalList.add(rValues.pop());
		}
		return finalList;
	}

}

class TreeNode {
	int data;
	TreeNode left;
	TreeNode right;

	TreeNode(int data) {
		this.data = data;
		this.left = null;
		this.right = null;
	}
}
