package secondTry;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

import driverCode.TreeNode;

public class LCAOfTwoNodeInBST {

	public static void main(String[] args) {
		LCAOfTwoNodeInBST obj = new LCAOfTwoNodeInBST();
		List<Integer> list = new ArrayList<Integer>();
		Queue<TreeNode> queue = new LinkedList<TreeNode>();
		TreeNode root = new TreeNode(2);
		TreeNode p = root;
		TreeNode q = null;
		int pValue = 2;
		int qValue = 1;
		queue.add(root);
		list = Arrays.asList(1, -1, -1, -1);
//		list = Arrays.asList(2, 8, 0, 4, 7, 9, -1, -1, 3, 5, -1, -1, -1, -1, -1, -1, -1, -1);
		int i = 0;
		TreeNode node = null;
		int data;
		while (!queue.isEmpty()) {
			TreeNode tempNode = queue.poll();
			data = list.get(i);
			i++;
			if (data != -1) {
				node = new TreeNode(data);
				if (data == pValue) {
					p = node;
				} else if (data == qValue) {
					q = node;
				}
				queue.add(node);
				tempNode.left = node;
			}
			data = list.get(i);
			i++;
			if (data != -1) {
				node = new TreeNode(data);
				if (data == pValue) {
					p = node;
				} else if (data == qValue) {
					q = node;
				}
				queue.add(node);
				tempNode.right = node;
			}
		}
		TreeNode LCA = obj.lowestCommonAncestor(root, p, q);
		System.out.println(LCA.val);
	}

	private TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {

		if (p.val < root.val && q.val < root.val) {
			return lowestCommonAncestor(root.left, p, q);
		}
		if (root.val < p.val && root.val < q.val) {
			return lowestCommonAncestor(root.right, p, q);
		}
		return root;
	}

}
