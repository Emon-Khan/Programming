package morrisTraversal;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

import driverCode.TreeNode;


public class PreOrder {

	public static void main(String[] args) {
		PreOrder obj = new PreOrder();
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
		List<Integer> ans = obj.preorderTraversal(root);
		System.out.println(ans);
	}

	private List<Integer> preorderTraversal(TreeNode root) {
		TreeNode curNode = root;
		List<Integer> preOrder = new ArrayList<Integer>();
		while(curNode!=null) {
			if(curNode.left == null) {
				preOrder.add(curNode.val);
				curNode = curNode.right;
			}else {
				TreeNode prevNode = curNode.left;
				while(prevNode.right != null && prevNode.right != curNode) {
					prevNode = prevNode.right;
				}
				if(prevNode.right==null) {
					prevNode.right = curNode;
					preOrder.add(curNode.val);
					curNode = curNode.left;
				}else {
					prevNode.right = null;
//					preOrder.add(curNode.val);
					curNode = curNode.right;
				}
			}
		}
		return preOrder;
	}

}

