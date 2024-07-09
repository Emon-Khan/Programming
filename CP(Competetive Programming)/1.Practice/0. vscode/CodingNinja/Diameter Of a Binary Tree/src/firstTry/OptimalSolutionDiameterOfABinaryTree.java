package firstTry;
// Naive Solution
import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import driverCode.TreeNode;

public class OptimalSolutionDiameterOfABinaryTree {
	public static int max = 0;
	public static void main(String[] args) {
		OptimalSolutionDiameterOfABinaryTree obj = new OptimalSolutionDiameterOfABinaryTree();
		Queue<TreeNode> queue = new LinkedList<TreeNode>();
		List<Integer> list = Arrays.asList(1,2,3,4,7,-1,-1,-1,-1,-1,-1);
		int i = 0;
		TreeNode node = null;
		if (list.get(i) != -1) {
			node = new TreeNode(list.get(i));
		}
		queue.add(node);
		while (!queue.isEmpty() && i < list.size() - 1) {
			TreeNode temp = queue.poll();
			i++;
			if (list.get(i) != -1) {
				temp.left = new TreeNode(list.get(i));
				queue.add(temp.left);
			}
			i++;
			if (list.get(i) != -1) {
				temp.right = new TreeNode(list.get(i));
				queue.add(temp.right);
			}
		}
//		obj.inOrder(node);
		obj.diaMeter(node);
		System.out.println(max);
	}

 	private int diaMeter(TreeNode<Integer> head) {
 		if(head==null) {
 			return 0;
 		}
 		int lHeight = diaMeter(head.left);
 		int rHeight = diaMeter(head.right);
 		max = Math.max(max, lHeight+rHeight);
//  		diaMeter(head.left);
//  		diaMeter(head.right);
 		return 1+Math.max(lHeight, rHeight);
		
 	}

//	private int height(TreeNode<Integer> node) {
//		if(node==null) {
//			return 0;
//		}
//		return (1+Math.max(height(node.left), height(node.right)));
//	}

	private void inOrder(TreeNode<Integer> root) {
		if(root==null)
			return;
		inOrder(root.left);
		System.out.println(root.data);
		inOrder(root.right);
	}

}
