package firstTry;

import driverCode.TreeNode;

public class BSTFromPreOrder {

	public static void main(String[] args) {
		BSTFromPreOrder obj = new BSTFromPreOrder();
		int[] preorder = { 8, 5, 1, 7, 10, 12 };
		TreeNode ansNode = obj.bstFromPreorder(preorder);
		System.out.println(ansNode.val);
	}

	private TreeNode bstFromPreorder(int[] preorder) {
		TreeNode root = null;
		for (int data : preorder) {
			root = createTree(root, data);
		}
		return root;
	}

	private TreeNode createTree(TreeNode root, int data) {
		if (root == null) {
			return new TreeNode(data);
		}
		if (data < root.val) {
			root.left = createTree(root.left, data);
		} else {
			root.right = createTree(root.right, data);
		}
		return root;
	}

}
