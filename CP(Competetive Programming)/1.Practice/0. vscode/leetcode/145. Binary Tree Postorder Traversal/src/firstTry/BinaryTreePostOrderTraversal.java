package firstTry;

import java.util.ArrayList;
import java.util.List;
import java.util.Stack;

import driverCode.TreeNode;

public class BinaryTreePostOrderTraversal {
	TreeNode head;

	public static void main(String[] args) {
		BinaryTreePostOrderTraversal obj = new BinaryTreePostOrderTraversal();
//		obj.head = new TreeNode(1);
//		TreeNode left = new TreeNode(4);
//		TreeNode right = new TreeNode(5);
//		obj.head.left = new TreeNode(2, left, right);
//		left = new TreeNode(6);
//		obj.head.right = new TreeNode(3, left, null);
		obj.head = new TreeNode(1);
		TreeNode left = new TreeNode(4);
		obj.head.left = new TreeNode(2, left, null);
		left = new TreeNode(6);
		TreeNode right = new TreeNode(7);
		obj.head.left.right = new TreeNode(5, left, right);
		obj.head.right = new TreeNode(3, null, null);
//		Stack<TreeNode> ans = postorderTraversal(obj.head);
		List<Integer> ans = postorderTraversal(obj.head);
//		while (!ans.isEmpty()) {
//			System.out.print(ans.pop().val + " ");
//		}
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
        TreeNode node = null;
        if (root.left != null) {
            node = root.left;
        }
        while (!stack1.isEmpty()) {
            while (node != null) {
                stack1.add(node);
                node = node.left;
            }
            if (stack1.peek().right == null) {
                stack2.add(stack1.pop());
                list.add(stack2.peek().val);
            }
            if(!stack1.isEmpty()){
                node = stack1.peek().right;
            }
            while (!stack2.isEmpty() && node == stack2.peek()) {
                stack2.add(stack1.pop());
                list.add(stack2.peek().val);
                if (!stack1.isEmpty())
                    node = stack1.peek().right;
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
