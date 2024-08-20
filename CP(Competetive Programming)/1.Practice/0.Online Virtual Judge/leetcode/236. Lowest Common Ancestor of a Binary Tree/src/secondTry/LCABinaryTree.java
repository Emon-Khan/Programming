// Take hints from striver
package secondTry;

import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

public class LCABinaryTree {

	public static void main(String[] args) {
		LCABinaryTree obj = new LCABinaryTree();
		// 3,5,1,6,2,0,8,null,null,7,4
		List<Integer> list = Arrays.asList(3, 5, 1, 6, 2, 0, 8, null, null, 7, 4, null, null, null, null, null, null,
				null, null);
		Queue<TreeNode> queue = new LinkedList<>();
		int count = 0;
		TreeNode node = new TreeNode(list.get(count));
		TreeNode root = node;
		queue.add(node);
		while (!queue.isEmpty()) {
			node = queue.poll();
			count++;
			if (list.get(count) != null) {
				node.left = new TreeNode(list.get(count));
				queue.add(node.left);
			}
			count++;
			if (list.get(count) != null) {
				node.right = new TreeNode(list.get(count));
				queue.add(node.right);
			}
		}
		TreeNode p = root.left.right.left; // 7
		TreeNode q = root.right.right; // 8
		TreeNode LCA = obj.lowestCommonAncestor(root, p, q);
		System.out.println(LCA.val);

	}

	private TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
		if (root == null||root==p||root==q) {
			return root;
		}
		TreeNode left = lowestCommonAncestor(root.left, p, q);
		TreeNode right = lowestCommonAncestor(root.right, p, q);

		if (left == null) {
			return right;
		} else if (right == null) {
			return left;
		} else {
			return root;
		}
	}

}

class TreeNode {
	int val;
	TreeNode left;
	TreeNode right;

	TreeNode(int x) {
		val = x;
	}
}