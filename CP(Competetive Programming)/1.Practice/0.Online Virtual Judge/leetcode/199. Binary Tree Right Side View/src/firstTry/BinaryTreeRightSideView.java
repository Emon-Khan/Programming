package firstTry;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import java.util.TreeMap;

public class BinaryTreeRightSideView {

	public static void main(String[] args) {
		BinaryTreeRightSideView obj = new BinaryTreeRightSideView();
		// 1,2,3,null,5,null,4
		// 1, 2, 3, 4, 10, 9, 10, null, 5, null, null, null, null, null, null, 11, null, 12, null, null, null
		List<Integer> list = Arrays.asList(1,2,3,null,5,null,4,null, null, null, null);
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
		List<Integer> ans = obj.rightSideView(root);
		for (Integer n : ans) {
			System.out.println(n);
		}
	}

	private List<Integer> rightSideView(TreeNode root) {
		List<Integer> ans = new ArrayList<>();
		TreeMap<Integer, TreeNode> map = new TreeMap<>();
		Queue<Pair<TreeNode, Integer>> queue = new LinkedList<>();
		queue.add(new Pair<>(root, 0));
		while (!queue.isEmpty()) {
			Pair<TreeNode, Integer> pair = queue.poll();
			int x = pair.getValue();
			TreeNode node = pair.getKey();
			if(!map.containsKey(x)) {
				map.put(x, node);
			}
			if (node.right != null) {
				queue.add(new Pair<>(node.right, x + 1));
			}
			if (node.left != null) {
				queue.add(new Pair<>(node.left, x + 1));
			}
		}
		for (TreeNode n : map.values()) {
			ans.add(n.val);
		}
		return ans;
	}

}
class Pair<K, V>{
	private K key;
	private V value;
	public Pair(K key, V value) {
		this.key = key;
		this.value = value;
	}
	public K getKey() {
		return key;
	}
	public V getValue() {
		return value;
	}
	@Override
	public String toString() {
		return "Pair [key=" + key + ", value=" + value + "]";
	}
	
}
class TreeNode {
	int val;
	TreeNode left;
	TreeNode right;

	TreeNode(int val) {
		this.val = val;
	}

	TreeNode(int val, TreeNode left, TreeNode right) {
		this.val = val;
		this.left = left;
		this.right = right;
	}
}
