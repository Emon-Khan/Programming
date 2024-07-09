package firstTry;

import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

public class OptimalSolutionMaximumPathSum {
//	public int max = -1000;
	public static void main(String[] args) {
		OptimalSolutionMaximumPathSum obj = new OptimalSolutionMaximumPathSum();
		Queue<TreeNode> queue = new LinkedList<TreeNode>();
		List<Integer> list = Arrays.asList(-10, 9, 20, null, null, 15, 7);
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
		int[] maxValue = new int[1];
		maxValue[0]=-1000;
		maxPath(node, maxValue);
		return maxValue[0];
	}

	private int maxPath(TreeNode node, int maxValue[]) {
		if (node == null)
			return 0;
		int lNodeSum = Math.max(0, maxPath(node.left, maxValue));
		int rNodeSum = Math.max(0, maxPath(node.right, maxValue));
		maxValue[0] = Math.max(maxValue[0], lNodeSum + rNodeSum + node.val);
		return Math.max(lNodeSum + node.val, rNodeSum + node.val);
	}

	private void inOrder(TreeNode root) {
		if (root == null)
			return;
		inOrder(root.left);
		System.out.println(root.val);
		inOrder(root.right);
	}

}
