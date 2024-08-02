package firstTry;

import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

//Naive Solution
public class BalancedBinaryTree {
	static Queue<TreeNode> queue = new LinkedList<TreeNode>();
	public boolean check = true;

	public static void main(String[] args) {
		BalancedBinaryTree obj = new BalancedBinaryTree();
		List<Integer> list = Arrays.asList(1);
		int i = 0;
		TreeNode node = null;
		if (list.get(i) != null) {
			node = new TreeNode(3);
		}
		queue.add(node);
		while (!queue.isEmpty() && i < list.size() - 1) {
			TreeNode temp = queue.poll();
			i++;
			if (list.get(i) != null) {
				temp.left = new TreeNode(list.get(i));
				queue.add(temp.left);
			}
			i++;
			if (list.get(i) != null) {
				temp.right = new TreeNode(list.get(i));
				queue.add(temp.right);
			}
		}
//		inOrder(node);
		boolean ans = obj.isBalanced(node);
		System.out.println(ans);
	}

//	private static void inOrder(TreeNode node) {
//		if(node==null)return;
//		inOrder(node.left);
//		System.out.println(node.val);
//		inOrder(node.right);
//	}
	public boolean isBalanced(TreeNode root) {
		if(root==null)return true;
		checked(root);
		return check;
	}

	private int checked(TreeNode root) {
		if (root == null) {
			return 0;
		}
		int lHeight = checked(root.left);
		int rHeight = checked(root.right);
		if (Math.abs(lHeight - rHeight) > 1) {
			check = false;
		}
		return 1 + Math.max(lHeight, rHeight);
	}

}

class TreeNode {
	int val;
	TreeNode left;
	TreeNode right;

	TreeNode() {
	}

	TreeNode(int val) {
		this.val = val;
	}

	TreeNode(int val, TreeNode left, TreeNode right) {
		this.val = val;
		this.left = left;
		this.right = right;
	}
}
