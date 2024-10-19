package secondTry;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

import driverCode.TreeNode;

public class DeleteANodeInBST {
	List<Integer> list = new ArrayList<Integer>();
	TreeNode rootParent = null;

	public static void main(String[] args) {
		DeleteANodeInBST obj = new DeleteANodeInBST();
		obj.list = Arrays.asList(8, 3, 6, 2, 4, 5, 7);
		Integer key = 3;
		TreeNode root = null;
		for (Integer data : obj.list) {
			root = obj.constructBST(root, data);
		}
		obj.rootParent = root;
		TreeNode ans = obj.deleteNode(root, key);
		obj.list = new ArrayList<Integer>();
		obj.inOrder(ans);
		for (Integer data : obj.list) {
			System.out.println(data);
		}

	}

	private TreeNode deleteNode(TreeNode root, Integer key) {
		return deleteNode(root, key, rootParent);
	}

	private TreeNode deleteNode(TreeNode root, Integer key, TreeNode rootParent) {
		if (root == null) {
			return root;
		}
		if (root.left == null && root.right == null) {
			if (key == root.val) {
				return null;
			}
		}
		if (key == root.val) {
			if (root.left == null) {
				return root.right;
			}
			if (root.right == null) {
				return root.left;
			}

			TreeNode node = null; // 4
			TreeNode keyNode = root; // 3
			if (root.right != null)
				node = root.right;
			if (root.left != null)
				root = root.left;// 2
			while (root.right != null) {
				root = root.right;
			}
			root.right = node;
			return keyNode.left;


		}
		if (key < root.val) {
			root.left = deleteNode(root.left, key);
		} else {
			root.right = deleteNode(root.right, key);
		}
		return root;
	}

	/******************************************************
	 * Optional Part
	 ******************************************************/
	private void inOrder(TreeNode root) {
		if (root == null) {
			return;
		}
		inOrder(root.left);
		list.add(root.val);
		inOrder(root.right);

	}

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

}
