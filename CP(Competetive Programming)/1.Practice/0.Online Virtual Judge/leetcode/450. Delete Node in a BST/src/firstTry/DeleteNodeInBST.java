package firstTry;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

import driverCode.TreeNode;

public class DeleteNodeInBST {
	List<Integer> list = new ArrayList<Integer>();
	TreeNode rootParent = null;

	public static void main(String[] args) {
		DeleteNodeInBST obj = new DeleteNodeInBST();
		TreeNode root = null;
		int key = 2;
//		obj.list = Arrays.asList(18, 5, 28, 2, 8, 26, 29, 6, 9, 23, 27, 22);
//		obj.list = Arrays.asList(1, 0);
		obj.list = Arrays.asList(3, 2, 4, 1);
		for (Integer data : obj.list) {
			root = obj.constructBST(root, data);
		}
//		obj.list = new ArrayList<Integer>();
//		obj.inOrderTraversal(root);
//		for (Integer data : obj.list) {
//			System.out.println(data);
//		}
		TreeNode ans = obj.deleteNode(root, key);
		obj.list = new ArrayList<Integer>();
		obj.inOrderTraversal(ans);
		for (Integer data : obj.list) {
			System.out.println(data);
		}
	}

	private TreeNode deleteNode(TreeNode root, int key) {
		return deleteNode(root, key, rootParent);
	}

	private TreeNode deleteNode(TreeNode root, int key, TreeNode rootParent) {
		if (root == null)
			return root;
		if (rootParent == null)
			rootParent = root;
		if (root.left == null && root.right == null) {
			if (key == root.val) {
				return null;
			} else {
				return root;
			}
		}
		if (key == root.val) {
			TreeNode node = null;
			if (key == rootParent.val) {
				if (root.left == null) {
					return root.right;
				} else if (root.right == null) {
					return root.left;
				}
			}
			if (key < rootParent.val) {
				if (root.right == null) {
					return root.left;
				}
				if (root.right.left == null) {
					root.right.left = root.left;
					return root.right;
				}
				if (root.right != null) {
					node = goLeft(root.right);
				}

			} else {
				if (root.left == null) {
					return root.right;
				}
				if (root.left.right == null) {
					root.left.right = root.right;
					return root.left;
				}
				if (root.left != null) {
					node = goRight(root.left); // 9
				}
			}
			node.right = root.right;
			node.left = root.left;
			root.right = null;
			root.left = null;
			return node;
		}
		if (key < root.val) {
			root.left = deleteNode(root.left, key, rootParent);
		} else {
			root.right = deleteNode(root.right, key, rootParent);
		}
		return root;
	}

	private TreeNode goRight(TreeNode root) {
		if (root.right.right == null) {
			TreeNode node = root.right; // 9
			root.right = null;
			return node;
		}
		return goRight(root.right);
	}

	private TreeNode goLeft(TreeNode root) {
		if (root.left.left == null) {
			TreeNode node = root.left;
			root.left = null;
			return node;
		}
		return goLeft(root.left);
	}

	/******************************************************
	 * Optional Part
	 ******************************************************/
	private TreeNode constructBST(TreeNode root, Integer data) {
		if (root == null) {
			return new TreeNode(data);
		}
		if (data < root.val) {
			root.left = constructBST(root.left, data);
		} else {
			root.right = constructBST(root.right, data);
		}
		return root;
	}

	private void inOrderTraversal(TreeNode root) {
		if (root == null) {
			return;
		}
		inOrderTraversal(root.left);
		list.add(root.val);
		inOrderTraversal(root.right);
	}

}
