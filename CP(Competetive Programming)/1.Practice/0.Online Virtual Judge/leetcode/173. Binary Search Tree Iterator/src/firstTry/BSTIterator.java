package firstTry;

import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import java.util.Stack;

import driverCode.TreeNode;

public class BSTIterator {
	private Stack<TreeNode> stack;

	public static void main(String[] args) {
		List<Integer> list = Arrays.asList(3, 15, -1, -1, 9, 20, -1, -1, -1, -1);
		TreeNode root = new TreeNode(7);
		BSTIterator generateObjFromNoArgsConstructor = new BSTIterator();
		generateObjFromNoArgsConstructor.constructTree(root, list);
		generateObjFromNoArgsConstructor.inOrderTraversal(root);
		BSTIterator obj = new BSTIterator(root);
		System.out.println("Functions Called:");
		System.out.println("BSTIterator()");
		System.out.println("next(): " + obj.next());
		System.out.println("next(): " + obj.next());
		System.out.println("hasNext(): " + (obj.hasNext() ? "true" : "false"));
		System.out.println("next(): " + obj.next());
		System.out.println("hasNext(): " + (obj.hasNext() ? "true" : "false"));
		System.out.println("next(): " + obj.next());
		System.out.println("hasNext(): " + (obj.hasNext() ? "true" : "false"));
		System.out.println("next(): " + obj.next());
		System.out.println("hasNext(): " + (obj.hasNext() ? "true" : "false"));
	}

	public BSTIterator() {

	}

	public BSTIterator(TreeNode root) {
		stack = new Stack<TreeNode>();
		pushAll(root);

	}

	public int next() {
		TreeNode tmpNode = stack.pop();
		pushAll(tmpNode.right);
		return tmpNode.val;

	}

	public boolean hasNext() {

		return !stack.isEmpty();

	}

	private void pushAll(TreeNode root) {
		while (root != null) {
			stack.add(root);
			root = root.left;
		}

	}

	private void constructTree(TreeNode root, List<Integer> list) {
		Queue<TreeNode> queue = new LinkedList<TreeNode>();
		queue.add(root);
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

	}

	private void inOrderTraversal(TreeNode root) {
		if (root == null) {
			return;
		}
		inOrderTraversal(root.left);
		System.out.println(root.val);
		inOrderTraversal(root.right);
	}

}
