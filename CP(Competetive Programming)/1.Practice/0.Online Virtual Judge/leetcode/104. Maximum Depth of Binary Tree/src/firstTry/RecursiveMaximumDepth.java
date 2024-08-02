package firstTry;

public class RecursiveMaximumDepth {
	public int counter = 0;
	public static void main(String[] args) {
		RecursiveMaximumDepth obj = new RecursiveMaximumDepth();
		TreeNode node = new TreeNode(1);
		node.left = new TreeNode(2);
		node.right = new TreeNode(3);
		node.right.left = new TreeNode(4);
		node.right.left.left = new TreeNode(5);
		node.right.right = new TreeNode(6);
		int ans = obj.maxDepth(node);
		System.out.println(ans);
	}

	private int maxDepth(TreeNode root) {
		if(root == null)
			return 0;
//		int lH = height(root.left);
//		int rH = height(root.right);
//		counter = Math.max(lH, rH);
//		return counter+1;
		return (1+Math.max(maxDepth(root.left), maxDepth(root.right)));
	}

//	private int height(TreeNode node) {
//		if(node==null)
//			return 0;
//		return (1+Math.max(height(node.left), height(node.right)));
//	}

}

