package firstTryRecursiveSolution;

import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

public class FlattenBinaryTreeToLinkedList {
	TreeNode prev = null;

	public static void main(String[] args) {
		FlattenBinaryTreeToLinkedList obj = new FlattenBinaryTreeToLinkedList();
		TreeNode root = new TreeNode(1);
		List<Integer> list = Arrays.asList(2, 5, 3, 4, -1, 6, -1, -1, -1, -1, -1, -1);

		obj.constructTree(root, list);

		obj.flatten(root);
		TreeNode n = root;
		while (n != null) {
			System.out.println(n.val);
			n = n.right;
		}
	}

	private void flatten(TreeNode root) {
		TreeNode node = root;
		if (node == null)
			return;
		flatten(node.right);
		flatten(node.left);
		node.right = prev;
		node.left = null;
		prev = node;
	}

	/******************************************************
	 * Construct Tree
	 ******************************************************/
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

}

class TreeNode {
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
}
