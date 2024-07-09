package firstTry;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

public class ZigZagLevelOrder {
	Queue<TreeNode> q = new LinkedList<TreeNode>();

	public static void main(String[] args) {
		ZigZagLevelOrder obj = new ZigZagLevelOrder();
		Queue<TreeNode> queue = new LinkedList<TreeNode>();
		List<Integer> list = Arrays.asList(3, 9, 20, null, null, 15, 7);
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
		List<List<Integer>> ans = obj.zigzagLevelOrder(node);
		for (List<Integer> temp : ans) {
			for (int val : temp) {
				System.out.print(val + " ");
			}
			System.out.println();
		}
		System.out.println(ans);
	}

	private List<List<Integer>> zigzagLevelOrder(TreeNode root) {
		List<List<Integer>> list = new ArrayList<List<Integer>>();
		q.add(root);
		int counter = 1;
		while (!q.isEmpty()) {
			int size = q.size();
			List<Integer> innerList = new ArrayList<Integer>();
			for (int i = 0; i < size; i++) {
				TreeNode temp = q.poll();
				innerList.add(temp.val);
				if (temp.left != null)
					q.add(temp.left);
				if (temp.right != null)
					q.add(temp.right);
			}
			if((counter&1)==0) {
				Collections.reverse(innerList);
			}
			list.add(innerList);
			counter++;
//			innerList.clear();
		}
		
		return list;
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
