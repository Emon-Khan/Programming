package firstTry;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

import driverCode.TreeNode;

public class KthSmallestElementInBST {
	List<Integer> list = new ArrayList<Integer>();
	int counter = 0;

	public static void main(String[] args) {
		KthSmallestElementInBST obj = new KthSmallestElementInBST();
		int k = 3;
//		obj.list = Arrays.asList(3, 1, 4, 2);
		obj.list = Arrays.asList(5, 3, 6, 2, 4, 1);
		TreeNode root = null;
		for (Integer data : obj.list) {
			root = obj.constructBST(root, data);
		}
		int ans = obj.kthSmallest(root, k);
		System.out.print(ans);

	}

	public int kthSmallest(TreeNode root, int k) {
		if (root == null) {
			return 0;
		}
		int left = kthSmallest(root.left, k);
		if (left != 0) {
			return left;
		}
		counter += 1;
		if (counter == k) {
			return root.val;
		}
		int right = kthSmallest(root.right, k);
		return right;
	}

	/******************************************************
	 * Optional Part
	 ******************************************************/
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

}
