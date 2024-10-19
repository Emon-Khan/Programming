package firstTry;

import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

import driverCode.TreeNode;

public class BinaryTreeLevelOrderTraversal {
	TreeNode head;

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		BinaryTreeLevelOrderTraversal obj = new BinaryTreeLevelOrderTraversal();
//		obj.head = new TreeNode(1);
//		TreeNode left = new TreeNode(4);
//		TreeNode right = new TreeNode(5);
//		obj.head.left = new TreeNode(2, left, right);
//		left = new TreeNode(6);
//		obj.head.right = new TreeNode(3, left, null);
		List<List<Integer>> ans = obj.levelOrder(obj.head);
		System.out.println("ndfkfndjkds");
		for (List<Integer> row : ans) {
			for (Integer element : row) {
				System.out.print(element + " ");
			}
			System.out.println();
		}
//		System.out.println("PreOrder");
//		obj.preOrder(obj.head);
	}

	private List<List<Integer>> levelOrder(TreeNode head2) {
		// TODO Auto-generated method stub
		List<List<Integer>> twoDArray = new LinkedList<List<Integer>>();
		Queue<TreeNode> queue = new LinkedList<TreeNode>();
//		if(head2==null)return twoDArray;
		queue.offer(head2);
		while (!queue.isEmpty() && queue.peek() != null) {
			int size = queue.size();
			List<Integer> subArray = new LinkedList<Integer>();
			for (int i = 0; i < size; i++) {
				if (queue.peek().left != null) {
					queue.offer(queue.peek().left);
				}
				if (queue.peek().right != null) {
					queue.offer(queue.peek().right);

				}
				subArray.add(queue.poll().val);
			}
			twoDArray.add(subArray);
		}

		return twoDArray;
	}

//	private void preOrder(TreeNode head2) {
//		// TODO Auto-generated method stub
//		if (head2 == null) {
//			return;
//		}
//		System.out.println(head2.val);
//		preOrder(head2.left);
//		preOrder(head2.right);
//	}

}
