/*
 * Take hints from striver
 * */

package firstTry;

import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

public class SerializeDeserializeBinaryTree {

	public static void main(String[] args) {
		Queue<TreeNode> queue = new LinkedList<TreeNode>();
		TreeNode root = new TreeNode(1);
		queue.add(root);
		List<Integer> list = Arrays.asList(2, 3, -1, -1, 4, 5, -1, -1, -1, -1);
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
		SerializeDeserializeBinaryTree ser = new SerializeDeserializeBinaryTree();
		SerializeDeserializeBinaryTree deser = new SerializeDeserializeBinaryTree();
		TreeNode ans = deser.deserialize(ser.serialize(root));
		System.out.println(ser.serialize(root));
		System.out.println(ans.val);

	}

	private String serialize(TreeNode root) {
		if (root == null)
			return " ";
		Queue<TreeNode> queue = new LinkedList<TreeNode>();
		StringBuilder stringBuilder = new StringBuilder();
		queue.add(root);
		while (!queue.isEmpty()) {
			TreeNode node = queue.poll();
			if (node == null) {
				stringBuilder.append("n ");
				continue;
			}
			stringBuilder.append(node.val + " ");
			queue.add(node.left);
			queue.add(node.right);
		}
		return stringBuilder.toString();
	}

	private TreeNode deserialize(String data) {
		TreeNode rootNode = null;
		String[] values = data.split(" ");
		if (values.length == 0) {
			return rootNode;
		}
		rootNode = new TreeNode(Integer.parseInt(values[0]));
		Queue<TreeNode> queue = new LinkedList<TreeNode>();
		queue.add(rootNode);
		int i = 1;
		while (!queue.isEmpty()) {
			TreeNode node = queue.poll();
			if (!values[i].equals("n")) {
				node.left = new TreeNode(Integer.parseInt(values[i]));
				queue.add(node.left);
			}
			i++;
			if (!values[i].equals("n")) {
				node.right = new TreeNode(Integer.parseInt(values[i]));
				queue.add(node.right);
			}
			i++;
		}
		return rootNode;
	}

}

class TreeNode {
	int val;
	TreeNode left;
	TreeNode right;

	TreeNode(int x) {
		val = x;
	}
}
