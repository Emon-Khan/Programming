package secondTry;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

import DriverCode.TreeNode;

public class InsertInBST {

	List<Integer> preOrder = new ArrayList<Integer>();

	public static void main(String[] args) {
		
		InsertInBST obj = new InsertInBST();
		TreeNode root = null;
		Integer val = 9;
		List<Integer> list = Arrays.asList(4, 2, 7);
		for (Integer data : list) {
			root = obj.constructBST(root, data);
		}
		TreeNode ans = obj.insertIntoBST(root, val);
		System.out.println(ans.val);
	}

	public TreeNode insertIntoBST(TreeNode root, int val) {
		preOrderTraversal(root, preOrder);
		preOrder.add(0, val);
		TreeNode newRoot = null;
		for (Integer data : preOrder) {
			newRoot = constructBST(newRoot, data);
		}
		return newRoot;
	}

	private TreeNode constructBST(TreeNode root, Integer data) {
		if (root == null) {
			return new TreeNode(data);
		}
		if (data < root.val) {
			root.left = constructBST(root.left, data);
		} else {
			root.right = constructBST(root.right, data);
		}
		return root;
	}

	private void preOrderTraversal(TreeNode root, List<Integer> preOrder) {
		if (root == null) {
			return;
		}
		preOrderTraversal(root.left, preOrder);
		preOrder.add(root.val);
		preOrderTraversal(root.right, preOrder);
	}
}
