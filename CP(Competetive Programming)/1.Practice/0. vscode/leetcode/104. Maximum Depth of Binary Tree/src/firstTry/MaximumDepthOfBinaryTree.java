// Naive Solution
package firstTry;

import java.util.LinkedList;
import java.util.Queue;

public class MaximumDepthOfBinaryTree {
//	Map<TreeNode, Integer> map = new HashMap<TreeNode, Integer>();
	Queue<TreeNode> queue = new LinkedList<>();
	public static void main(String[] args) {
		MaximumDepthOfBinaryTree obj = new MaximumDepthOfBinaryTree();
		TreeNode node = new TreeNode(1);
		node.left = new TreeNode(2);
		node.right = new TreeNode(3);
		node.right.left = new TreeNode(4);
		node.right.left.left = new TreeNode(5);
		node.right.right = new TreeNode(6);
//		obj.inOrder(node);
		int ans = obj.maxDepth(node);
		System.out.println(ans);
	}

	private int maxDepth(TreeNode node) {
		int counter = 0;
		queue.add(node);
		while(!queue.isEmpty()) {
			int size = queue.size();
			counter++;
			for(int i = 0; i<size; i++) {
				TreeNode temp = queue.poll();
				if(temp.left!=null) {
					queue.add(temp.left);
				}
				if(temp.right!=null) {
					queue.add(temp.right);
				}
			}
			
		}
		return counter;
	}

	private void inOrder(TreeNode node) {
		if(node == null) {
			return;
		}
		inOrder(node.left);
		System.out.println(node.val);
		inOrder(node.right);
		
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
