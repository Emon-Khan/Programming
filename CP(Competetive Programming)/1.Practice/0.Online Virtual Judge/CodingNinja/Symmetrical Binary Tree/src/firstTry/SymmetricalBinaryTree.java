package firstTry;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

public class SymmetricalBinaryTree {

	public static void main(String[] args) {
//		SymmetricalBinaryTree obj = new SymmetricalBinaryTree();
//      1, 2, 3, 4, null, null, null, null, null
//		1, 2, 2, 3, 4, 3, 4, null, null, null, null, null, null, null, null
		List<Integer> list = Arrays.asList(1, 2, 2, 3, 4, 4, 3, null, null, null, null, null, null, null, null);
		Queue<TreeNode> q = new LinkedList<>();
		int count = 0;
		TreeNode node = new TreeNode(list.get(count));
		TreeNode root = node;
		q.add(node);
		while (!q.isEmpty()) {
			node = q.poll();
			count++;
			if (list.get(count) != null) {
				node.left = new TreeNode(list.get(count));
				q.add(node.left);
			}
			count++;
			if (list.get(count) != null) {
				node.right = new TreeNode(list.get(count));
				q.add(node.right);
			}
		}
		boolean ans = isSymmetric(root);
		System.out.println(ans);
	}

	private static boolean isSymmetric(TreeNode root) {
		if(root==null) {
			return false;
		}
		 List<Integer> leftList = new ArrayList<Integer>();
		 List<Integer> rightList = new ArrayList<Integer>();
		traversalOfLeftSide(root.left, leftList);
		traversalOfRightSide(root.right, rightList);
			
		return leftList.equals(rightList);
	}

	private static void traversalOfLeftSide(TreeNode left, List<Integer> leftList) {
		if(left==null) {
			return;
		}
		leftList.add(left.val);
		traversalOfLeftSide(left.left, leftList);		
		traversalOfLeftSide(left.right, leftList);		
	}

	private static void traversalOfRightSide(TreeNode right, List<Integer> rightList) {
		if(right==null) {
			return;
		}
		rightList.add(right.val);
		traversalOfRightSide(right.right, rightList);
		traversalOfRightSide(right.left, rightList);
	}
}

class TreeNode {
	int val;
	TreeNode left;
	TreeNode right;

	TreeNode(int val) {
		this.val = val;
		this.left = null;
		this.right = null;
	}
}
