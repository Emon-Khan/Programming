package firstTry;

import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

public class MaximumPathSum {
//	public int max = -1000;
	public int sum = -1000;

	public static void main(String[] args) {
		MaximumPathSum obj = new MaximumPathSum();
		Queue<TreeNode> queue = new LinkedList<TreeNode>();
		List<Integer> list = Arrays.asList(1,-2,3);
		int i = 0;
		TreeNode node = null;
		if (list.get(i) != null) {
			node = new TreeNode(list.get(i));
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
//		obj.inOrder(node);
		int ans = obj.maxPathSum(node);
		System.out.println(ans);

	}

	private int maxPathSum(TreeNode node) {
		if(node==null)return 0;
		int lNodeSum = summation(node.left, 0);
		int rNodeSum = summation(node.right, 0);
		sum = Math.max(sum, lNodeSum+rNodeSum+node.val);
		maxPathSum(node.left);
		maxPathSum(node.right);
		return sum;
	}

	private int summation(TreeNode node, int s) {
		if(node==null)return 0;
		s+=node.val;
		int max = Math.max(s, Math.max(summation(node.left, s), summation(node.right, s)));
		return max;
	}

	private void inOrder(TreeNode root) {
		if (root == null)
			return;
		inOrder(root.left);
		System.out.println(root.val);
		inOrder(root.right);
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
