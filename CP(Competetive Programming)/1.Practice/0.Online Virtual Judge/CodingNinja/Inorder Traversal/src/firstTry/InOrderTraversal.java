package firstTry;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

public class InOrderTraversal {
	public static void main(String[] args) {
		Queue<TreeNode> queue = new LinkedList<TreeNode>();
		TreeNode root = new TreeNode(1);
		queue.add(root);
		List<Integer> list = Arrays.asList(2, 3, 4, 5, -1, -1, -1, -1, 7, 6, -1,-1,-1,-1);
		int i = 0;
		TreeNode node = null;
		int data;
		while (!queue.isEmpty()) {
			TreeNode tempNode = queue.poll();
			data = list.get(i);
			i++;
			if (data != -1) {
				node = new TreeNode(data);
				queue.add(node);
				tempNode.left = node;
			}
			data = list.get(i);
			i++;
			if (data != -1) {
				node = new TreeNode(data);
				queue.add(node);
				tempNode.right = node;
			}
		}
		List<Integer> ans = getInOrderTraversal(root);
		System.out.println(ans);
	}

	private static List<Integer> getInOrderTraversal(TreeNode root) {
		TreeNode curNode = root;
		List<Integer> inOrder = new ArrayList<Integer>();
		while (curNode != null) {
			if (curNode.left == null) {
				inOrder.add(curNode.data);
				curNode = curNode.right;
			} else {
				TreeNode prevNode = curNode.left;
				while (prevNode.right != null && prevNode.right!=curNode) {
					prevNode = prevNode.right;
				}
				if(prevNode.right == null) {
					prevNode.right = curNode;
					curNode = curNode.left;
				}
				else {
					inOrder.add(curNode.data);
					prevNode.right = null;
					curNode = curNode.right;
				}
			}
		}
		return inOrder;
	}

}

class TreeNode {
	int data;
	TreeNode left;
	TreeNode right;

	TreeNode() {
		this.data = 0;
		this.left = null;
		this.right = null;
	}

	TreeNode(int val) {
		this.data = val;
		this.left = null;
		this.right = null;
	}

	TreeNode(int val, TreeNode left, TreeNode right) {
		this.data = val;
		this.left = left;
		this.right = right;
	}
};
