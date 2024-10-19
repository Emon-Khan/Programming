package firstTry;

import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import java.util.Stack;

import driverCode.TreeNode;

public class TwoSumInBST {
	Stack<TreeNode> next;
	Stack<TreeNode> previous;

	public static void main(String[] args) {
		TwoSumInBST obj = new TwoSumInBST();
		int k = 5;
		TreeNode root = new TreeNode(5);
		List<Integer> list = Arrays.asList(3, 6, 2, 4, -1, 7, -1, -1, -1, -1, -1, -1);
//		List<Integer> list = Arrays.asList(3, 6, 2, -1, -1, -1, -1, -1);
//		List<Integer> list = Arrays.asList(3, 6, 2, -1, -1, 7, -1, -1, -1, -1);
//		List<Integer> list = Arrays.asList(3, 8, 2, -1, -1, -1, -1, -1);
		obj.constructTree(root, list);
		obj.inOrderTraversal(root);
		boolean ans = obj.findTarget(root, k);
		System.out.println(ans);
	}

	private boolean findTarget(TreeNode root, int k) {
		next = new Stack<TreeNode>();
		previous = new Stack<TreeNode>();
		pushInNext(root);
		pushInPrevious(root);
		int nextVal = next(); // 2
		int prevVal = previous(); // 8
		boolean isFound = false;

		while (nextVal != prevVal && nextVal + prevVal != k) {
			if (nextVal + prevVal < k) {
				if (!next.isEmpty()) {
					nextVal = next();
				} else {
					break;
				}

			} else {
				if (!previous.isEmpty()) {
					prevVal = previous();
				} else {
					break;
				}

			}
		}
		if (nextVal != prevVal && nextVal + prevVal == k) {
			isFound = true;
		}
		return isFound;

	}

	private int next() {
		TreeNode tmpNode = next.pop();
		pushInNext(tmpNode.right);
		return tmpNode.val;
	}

	private int previous() {
		TreeNode tmpNode = previous.pop();
		pushInPrevious(tmpNode.left);
		return tmpNode.val;
	}

	private void pushInNext(TreeNode root) {
		while (root != null) {
			next.add(root);
			root = root.left;
		}
	}

	private void pushInPrevious(TreeNode root) {
		while (root != null) {
			previous.add(root);
			root = root.right;
		}
	}

	private void constructTree(TreeNode root, List<Integer> list) {
		Queue<TreeNode> queue = new LinkedList<TreeNode>();
		queue.add(root);
		int i = 0;
		TreeNode node = null;
		int data;
		while (!queue.isEmpty()) {
			TreeNode tempNode = queue.poll();
			data = list.get(i);
			i++;
			if (data != -1) {
				node = new TreeNode(data);
				queue.add(node);
				tempNode.left = node;
			}
			data = list.get(i);
			i++;
			if (data != -1) {
				node = new TreeNode(data);
				queue.add(node);
				tempNode.right = node;
			}
		}

	}

	private void inOrderTraversal(TreeNode root) {
		if (root == null) {
			return;
		}
		inOrderTraversal(root.left);
		System.out.println(root.val);
		inOrderTraversal(root.right);
	}

}
