package firstTry;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

public class BinaryTreePaths {
	static List<String> listString = new ArrayList<String>();

	public static void main(String[] args) {
		BinaryTreePaths obj = new BinaryTreePaths();
		List<Integer> list = Arrays.asList(1, 2, 3, null, 5, null, null, null, null);
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
		List<String> ans = obj.binaryTreePaths(root);
		for(String s: ans) {
			System.out.println(s);
		}

	}

	private List<String> binaryTreePaths(TreeNode root) {
		if(root==null) {
			return listString;
		}
		String s = new String();
		calculation(root, s);
		return listString;
	}

	private void calculation(TreeNode root, String s) {
		if(root==null) {
			return;
		}else if(s.isEmpty()){
			s+=Integer.toString(root.val);
		}else {
			s+=" "+Integer.toString(root.val);
		}
//		System.out.println("s Inside calculation method "+ s);
		calculation(root.left, s);
		if(root.left==null && root.right==null) {
			listString.add(s);
		}
		calculation(root.right, s);
		
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