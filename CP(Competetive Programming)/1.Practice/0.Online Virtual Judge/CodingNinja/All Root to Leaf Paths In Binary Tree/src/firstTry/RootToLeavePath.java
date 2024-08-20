package firstTry;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;


public class RootToLeavePath {
	static List<String> listString = new ArrayList<String>();

	public static void main(String[] args) {
		RootToLeavePath obj = new RootToLeavePath();
		List<Integer> list = Arrays.asList(1, 2, 3, null, 5, null, null, null, null);
		Queue<BinaryTreeNode> q = new LinkedList<>();
		int count = 0;
		BinaryTreeNode node = new BinaryTreeNode(list.get(count));
		BinaryTreeNode root = node;
		q.add(node);
		while (!q.isEmpty()) {
			node = q.poll();
			count++;
			if (list.get(count) != null) {
				node.left = new BinaryTreeNode(list.get(count));
				q.add(node.left);
			}
			count++;
			if (list.get(count) != null) {
				node.right = new BinaryTreeNode(list.get(count));
				q.add(node.right);
			}
		}
		List<String> ans = obj.allRootToLeaf(root);
		for(String s: ans) {
			System.out.println(s);
		}
		
	}

	private List<String> allRootToLeaf(BinaryTreeNode root) {
		if(root==null) {
			return listString;
		}
		String s = new String();
		calculation(root, s);
		return listString;
	}

	private void calculation(BinaryTreeNode root, String s2) {
//		System.out.println("s2 Inside calculation method before concat "+ s2);
		if(root==null) {
			return;
		}else if(s2.isEmpty()){
			s2+=Integer.toString(root.data);
		}else {
			s2+=" "+Integer.toString(root.data);
		}
//		System.out.println("s2 Inside calculation method "+ s2);
		calculation(root.left, s2);
		if(root.left==null && root.right==null) {
			listString.add(s2);
		}
		calculation(root.right, s2);
	}


}
class BinaryTreeNode {
    int data;
    BinaryTreeNode left;
    BinaryTreeNode right;

    BinaryTreeNode(int data) {
        this.data = data;
        this.left = null;
        this.right = null;
    }
};
