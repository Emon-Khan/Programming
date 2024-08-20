package firstTry;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

public class LCABinaryTree { 

	public static void main(String[] args) {
		LCABinaryTree obj = new LCABinaryTree();
		// 3,5,1,6,2,0,8,null,null,7,4
		List<Integer> list = Arrays.asList(3,5,1,6,2,0,8,null,null,7,4, null, null, null, null, null, null, null, null);
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
		TreeNode p = root.left; // 5
		TreeNode q = root.left.right.right; // 4
		TreeNode LCA = obj.lowestCommonAncestor(root, p, q);
		System.out.println(LCA.val);
	}

	private TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
		TreeNode commonNode = null;
		List<TreeNode> path_p = new ArrayList<TreeNode>(); // 3, 5
		findPath(root, p, path_p);
//		for(TreeNode node: path_p) {
//			System.out.println(node.val);
//		}
		List<TreeNode> path_q = new ArrayList<TreeNode>(); // 3, 5, 2, 4
		findPath(root, q, path_q);
//		for(TreeNode node: path_q) {
//			System.out.println(node.val);
//		}
		for(TreeNode p_node: path_p) {
			for(TreeNode q_node: path_q) {
				if(p_node.val==q_node.val) {
					commonNode = p_node;
					break;
				}
			}
		}
		
		return commonNode;
	}

	private boolean findPath(TreeNode root, TreeNode p, List<TreeNode> path_p) {
		if(root==null) {
			return false;
		}
		path_p.add(root);
		if(root.val == p.val) {
			return true;
		}
		if(findPath(root.left, p, path_p)||findPath(root.right, p, path_p)) {
			return true;
		}
		path_p.remove(path_p.size()-1);
		return false;
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
