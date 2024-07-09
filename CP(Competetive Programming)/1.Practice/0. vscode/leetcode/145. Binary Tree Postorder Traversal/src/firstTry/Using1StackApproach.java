package firstTry;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Stack;

import driverCode.TreeNode;

public class Using1StackApproach {
	TreeNode head;

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Using1StackApproach obj = new Using1StackApproach();
		obj.head = new TreeNode(1);
		TreeNode left = new TreeNode(4);
		obj.head.left = new TreeNode(2, left, null);
		left = new TreeNode(6);
		TreeNode right = new TreeNode(7);
		obj.head.left.right = new TreeNode(5, left, right);
		obj.head.right = new TreeNode(3, null, null);
		List<Integer> ans = postorderTraversal(obj.head);
		System.out.println(ans);
		System.out.println("PostOrder");
		obj.postOrder(obj.head);
	}

	private static List<Integer> postorderTraversal(TreeNode root) {
		Stack<TreeNode> stack1 = new Stack<TreeNode>();
		Stack<TreeNode> stack2 = new Stack<TreeNode>();
		List<Integer> list = new ArrayList<Integer>();
		if (root == null)
			return list;
		stack1.add(root);
		while (!stack1.isEmpty()) {
			root = stack1.pop();
			list.add(root.val);
			if (root.left != null)
				stack1.add(root.left);
			if (root.right != null)
				stack1.add(root.right);
		}
		Collections.reverse(list); //O(n)
		return list;
	}

	private void postOrder(TreeNode head2) {
		if (head2 == null)
			return;
		postOrder(head2.left);
		postOrder(head2.right);
		System.out.print(head2.val + " ");

	}

}
