package firstTry;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

import driverCode.TreeNode;

public class PredessorOrSuccessorInBST {
	List<Integer> inOrderTraversaList = new ArrayList<Integer>();

	public static void main(String[] args) {
		PredessorOrSuccessorInBST obj = new PredessorOrSuccessorInBST();
		TreeNode root = new TreeNode(10);
//		List<Integer> list = Arrays.asList(10, 20, 8, 12, 16, 25, -1, -1, -1, -1, -1, -1, -1, -1);
		List<Integer> list = Arrays.asList(5, -1, -1, -1);
		// 10,5,-1,-1,-1
		obj.constructTree(root, list);
//		obj.inOrderTraversal(root);
//		for (Integer data : obj.inOrderTraversaList) {
//			System.out.println(data);
//		}
		int key = 5;
		List<Integer> ansList = predecessorSuccessor(root, key);
		for (Integer data : ansList) {
			System.out.println(data);
		}
	}

	private static List<Integer> predecessorSuccessor(TreeNode root, int key) {
		List<Integer> ans = new ArrayList<Integer>();
		TreeNode predecessorNode = findPredecessor(root, key, null);
		TreeNode successorNode = findSuccessor(root, key, null);

		int valueOfPredecessorNode = setValue(predecessorNode);
		int valueOfSuccessorNode = setValue(successorNode);

		ans.add(valueOfPredecessorNode);
		ans.add(valueOfSuccessorNode);
		return ans;
	}

	private static int setValue(TreeNode node) {
		if (node == null) {
			return -1;
		} else {
			return node.val;
		}
	}

	private static TreeNode findPredecessor(TreeNode root, int key, TreeNode predecessorNode) {
		if (root == null) {
			return predecessorNode;
		}
		if (root.val < key) {
			predecessorNode = root;
		}
		if (key <= root.val) {
			predecessorNode = findPredecessor(root.left, key, predecessorNode);
		} else {
			predecessorNode = findPredecessor(root.right, key, predecessorNode);

		}
		return predecessorNode;
	}

	private static TreeNode findSuccessor(TreeNode root, int key, TreeNode successorNode) {
		if (root == null) {
			return successorNode;
		}
		if (key < root.val) {
			successorNode = root;
		}
		if (key < root.val) {
			successorNode = findSuccessor(root.left, key, successorNode);
		} else {
			successorNode = findSuccessor(root.right, key, successorNode);

		}
		return successorNode;
	}

	/******************************************************
	 * Optional Part
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

	private void inOrderTraversal(TreeNode root) {
		if (root == null)
			return;
		inOrderTraversal(root.left);
		inOrderTraversaList.add(root.val);
		inOrderTraversal(root.right);

	}

}
