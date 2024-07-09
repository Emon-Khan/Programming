package firstTry;

import java.util.ArrayList;
import java.util.List;
import java.util.Stack;

import driverCode.TreeNode;

public class BinaryTreePreOrderTraversal {
	TreeNode head;

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		BinaryTreePreOrderTraversal obj = new BinaryTreePreOrderTraversal();
		obj.head = new TreeNode(1);
		TreeNode left = new TreeNode(4);
		TreeNode right = new TreeNode(5);
		obj.head.left = new TreeNode(2, left, right);
		left = new TreeNode(6);
		obj.head.right = new TreeNode(3, left, null);
		List<Integer> ans = obj.preorderTraversal(obj.head);
		for(Integer val: ans) {
			System.out.println(val);
		}
	}

	private List<Integer> preorderTraversal(TreeNode root) {
		// TODO Auto-generated method stub  1 2 4 5 3 6
		Stack<TreeNode> stack = new Stack<TreeNode>(); 
		List<Integer> ans = new ArrayList<Integer>();
		stack.add(root);
		while(!stack.isEmpty() && stack.peek()!=null) {
			TreeNode peek = stack.peek();
			ans.add(stack.pop().val);
			if(peek.right!=null) {
				stack.add(peek.right);
			}
			if(peek.left!=null) {
				stack.add(peek.left);
			}
		}
		return ans;
	}

}
