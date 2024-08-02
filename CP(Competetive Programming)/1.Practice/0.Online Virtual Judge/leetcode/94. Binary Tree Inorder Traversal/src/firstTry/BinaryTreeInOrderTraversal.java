package firstTry;

import java.util.ArrayList;
import java.util.List;
import java.util.Stack;

import driverCode.TreeNode;

public class BinaryTreeInOrderTraversal {
	TreeNode head;

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		BinaryTreeInOrderTraversal obj = new BinaryTreeInOrderTraversal();
		obj.head = new TreeNode(1);
		TreeNode left = new TreeNode(4);
		TreeNode right = new TreeNode(5);
		obj.head.left = new TreeNode(2, left, right);
		left = new TreeNode(6);
		obj.head.right = new TreeNode(3, left, null);
//		obj.head = new TreeNode(1);
//		TreeNode left = new TreeNode(4);
//		obj.head.left = new TreeNode(2, left, null);
//		left = new TreeNode(6);
//		TreeNode right = new TreeNode(7);
//		obj.head.left.right = new TreeNode(5, left, right);
//		obj.head.right = new TreeNode(3, null, null);
		List<Integer> ans = obj.inorderTraversal(obj.head);
		for (Integer val : ans) {
			System.out.println(val);
		}
		System.out.println("InOrder");
		obj.inOrder(obj.head);
	}

	private List<Integer> inorderTraversal(TreeNode root) {
		// TODO Auto-generated method stub
		Stack<TreeNode> stack = new Stack<TreeNode>();
		List<Integer> ans = new ArrayList<Integer>();
		if (root == null)
			return ans;
		stack.add(root);
		TreeNode node = stack.peek().left;
		while (!stack.isEmpty() || node != null) {
			while (node != null) {
				stack.add(node);
				node = node.left;
			}
			node = stack.peek();
			ans.add(stack.pop().val);
			node = node.right;
		}
		return ans;
	}
	private void inOrder(TreeNode head2) {
		if (head2 == null)
			return;
		inOrder(head2.left);
		System.out.println(head2.val);
		inOrder(head2.right);
	}
}
