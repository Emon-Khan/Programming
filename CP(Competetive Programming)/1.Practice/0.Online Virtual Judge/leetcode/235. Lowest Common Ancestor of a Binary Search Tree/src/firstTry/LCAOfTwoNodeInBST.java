package firstTry;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

import driverCode.TreeNode;

public class LCAOfTwoNodeInBST {
	List<TreeNode> pathwayOfpNode = new ArrayList<TreeNode>();
	List<TreeNode> pathwayOfqNode = new ArrayList<TreeNode>();
	List<Integer> traversal = new ArrayList<Integer>();

	public static void main(String[] args) {
		LCAOfTwoNodeInBST obj = new LCAOfTwoNodeInBST();
		List<Integer> list = new ArrayList<Integer>();
		Queue<TreeNode> queue = new LinkedList<TreeNode>();
		TreeNode root = new TreeNode(18);
		TreeNode p = null;
		TreeNode q = null;
		int pValue = 3;
		int qValue = 14;
		queue.add(root);
		list = Arrays.asList(13, 21, 9, 16, 20, 25, -1, -1, -1, -1, -1, -1, -1, -1);
//		list = Arrays.asList(2, 8, 0, 4, 7, 9, -1, -1, 3, 5, -1, -1, -1, -1, -1, -1, -1, -1);
//		list = Arrays.asList(13, 21, 9, 16, 20, 25, 5, -1, 14, -1, -1, -1, -1, -1, 4, 6, -1, -1, 3, -1, -1, -1, -1, -1);
		
		int i = 0;
		TreeNode node = null;
		int data;
		while (!queue.isEmpty()) {
			TreeNode tempNode = queue.poll();
			data = list.get(i);
			i++;
			if (data != -1) {
				node = new TreeNode(data);
				if (data == pValue) {
					p = node;
				} else if (data == qValue) {
					q = node;
				}
				queue.add(node);
				tempNode.left = node;
			}
			data = list.get(i);
			i++;
			if (data != -1) {
				node = new TreeNode(data);
				if (data == pValue) {
					p = node;
				} else if (data == qValue) {
					q = node;
				}
				queue.add(node);
				tempNode.right = node;
			}
		}

		System.out.println("Inorder Traversal");
		obj.inOrderTraversal(root);
		for (Integer value : obj.traversal) {
			System.out.println(value);
		}
		obj.traversal = new ArrayList<Integer>();
		System.out.println("Post Order Traversal");
		obj.postOrderTraversal(root);
		for (Integer value : obj.traversal) {
			System.out.println(value);
		}
		obj.traversal = new ArrayList<Integer>();
		System.out.println("Pre Order Traversal");
		obj.preOrderTraversal(root);
		for (Integer value : obj.traversal) {
			System.out.println(value);
		}

		TreeNode LCA = obj.lowestCommonAncestor(root, p, q);
//		System.out.println(LCA.val);
	}

	private TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
		traverseOfpNode(root, p);
//		for (TreeNode pNode : pathwayOfpNode) {
//			System.out.println(pNode.val);
//		}
		System.out.println("-----------------------");
		traverseOfqNode(root, q);
//		for (TreeNode qNode : pathwayOfqNode) {
//			System.out.println(qNode.val);
//		}
		int pNodeSize = pathwayOfpNode.size();
		int qNodeSize = pathwayOfqNode.size();
		TreeNode ansNode = null;
		if (pNodeSize > qNodeSize) {
			for (int i = qNodeSize - 1; i >= 0; i--) {
				if (pathwayOfqNode.get(i) == pathwayOfpNode.get(i)) {
					ansNode = pathwayOfqNode.get(i);
					break;
				}
			}
		} else {
			for (int i = pNodeSize - 1; i >= 0; i--) {
				if (pathwayOfqNode.get(i) == pathwayOfpNode.get(i)) {
					ansNode = pathwayOfqNode.get(i);
					break;
				}
			}
		}
		return ansNode;
	}

	private void traverseOfpNode(TreeNode root, TreeNode node) {
		if (root == node) {
			pathwayOfpNode.add(root);
			return;
		}
		pathwayOfpNode.add(root);
		if (node.val < root.val) {
			traverseOfpNode(root.left, node);
		} else {
			traverseOfpNode(root.right, node);
		}

	}

	private void traverseOfqNode(TreeNode root, TreeNode node) {
		if (root == node) {
			pathwayOfqNode.add(root);
			return;
		}
		pathwayOfqNode.add(root);
		if (node.val < root.val) {
			traverseOfqNode(root.left, node);
		} else {
			traverseOfqNode(root.right, node);
		}

	}

	private void inOrderTraversal(TreeNode root) {
		if (root == null) {
			return;
		}
		inOrderTraversal(root.left);
		traversal.add(root.val);
		inOrderTraversal(root.right);

	}

	private void postOrderTraversal(TreeNode root) {
		if (root == null) {
			return;
		}
		postOrderTraversal(root.left);
		postOrderTraversal(root.right);
		traversal.add(root.val);

	}

	private void preOrderTraversal(TreeNode root) {
		if (root == null) {
			return;
		}
		traversal.add(root.val);
		preOrderTraversal(root.left);
		preOrderTraversal(root.right);

	}

}
