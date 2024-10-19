package practice;

import java.util.Arrays;
import java.util.List;

public class FloorInBinarySearchTree {

	public static void main(String[] args) {
		TreeNode root = new TreeNode(6);
		List<Integer> list = Arrays.asList(11, 18, 3, 7, 10);
		for (Integer value : list) {
			root = constructBST(root, value);
		}
		int ans = findFloorOfValue(root, 7);
		System.out.println(ans);
	}

	private static int findFloorOfValue(TreeNode root, int i) {
		int floor = -1;
		while (root != null) {
			if (i == root.val) {
				floor = root.val;
				return floor;
			}
			if (root.val < i) {
				floor = root.val;
				root = root.right;
			} else {
				root = root.left;
			}

		}
		return floor;
	}

	private static TreeNode constructBST(TreeNode root, Integer value) {
		if (root == null) {
			return new TreeNode(value);
		}
		if (value < root.val) {
			root.left = constructBST(root.left, value);
		} else {
			root.right = constructBST(root.right, value);
		}
		return root;
	}

}
