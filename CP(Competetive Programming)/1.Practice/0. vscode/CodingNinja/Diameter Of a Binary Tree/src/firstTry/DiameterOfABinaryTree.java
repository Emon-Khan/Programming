package firstTry;
// Naive Solution
import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import driverCode.TreeNode;

public class DiameterOfABinaryTree {
	TreeNode<Integer> root;
	public static int ans = 0;
	public static void main(String[] args) {
		DiameterOfABinaryTree obj = new DiameterOfABinaryTree();
		Queue<TreeNode> queue = new LinkedList<TreeNode>();
		TreeNode<Integer> node = new TreeNode<Integer>(33);
		obj.root = node;
		queue.add(node);
		List<Integer> list = Arrays.asList(27,12,2,3,29,25,-1,16,50,-1,-1,47,-1,-1,-1,-1,-1,-1,31,6,-1,42,1,36,-1,-1,7,-1,22,41,-1,4,48,32,-1,-1,14,21,-1,39,8,-1,-1,-1,-1,-1,-1,-1,-1,-1);
		int i = 0;
		int data;
		while(!queue.isEmpty()) {
			TreeNode temp = queue.poll();
			data = list.get(i);
			i++;
			if(data!=-1) {
				node = new TreeNode<Integer>(data);
				queue.add(node);
				temp.left = node;
			}
			data = list.get(i);
			i++;
			if(data!=-1) {
				node = new TreeNode<Integer>(data);
				queue.add(node);
				temp.right = node;
			}
		}
//		obj.inOrder(obj.root);
		System.out.println(obj.diaMeter(obj.root));
	}

	private int diaMeter(TreeNode<Integer> head) {
		if(head==null) {
			return 0;
		}
		int lHeight = height(head.left);
		int rHeight = height(head.right);
		ans = Math.max(ans, lHeight+rHeight);
		diaMeter(head.left);
		diaMeter(head.right);
		return ans;
		
	}

	private int height(TreeNode<Integer> node) {
		if(node==null) {
			return 0;
		}
		return (1+Math.max(height(node.left), height(node.right)));
	}

	private void inOrder(TreeNode<Integer> root) {
		if(root==null)
			return;
		inOrder(root.left);
		System.out.println(root.data);
		inOrder(root.right);
	}

}
