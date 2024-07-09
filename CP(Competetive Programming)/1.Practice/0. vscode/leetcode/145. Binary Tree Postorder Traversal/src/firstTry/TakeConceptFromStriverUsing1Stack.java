package firstTry;

import java.util.ArrayList;
import java.util.List;
import java.util.Stack;

import driverCode.TreeNode;

public class TakeConceptFromStriverUsing1Stack {
	TreeNode head;

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		TakeConceptFromStriverUsing1Stack obj = new TakeConceptFromStriverUsing1Stack();
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
		Stack<TreeNode> stack = new Stack<TreeNode>();
		List<Integer> list = new ArrayList<Integer>();
		TreeNode cur = root;
		while (cur != null || !stack.isEmpty()) {
			if (cur != null) {
				stack.add(cur);
				cur = cur.left;
			} else {
				TreeNode temp = stack.peek().right;
				if (temp == null) {
					temp = stack.pop();
					list.add(temp.val);

					while (!stack.isEmpty() && temp == stack.peek().right) {
						temp = stack.peek();
						list.add(stack.pop().val);
					}
				} else {
					cur = temp;
				}
			}
		}
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
