package firstTry;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import java.util.TreeMap;

public class BottomViewOfBinaryTree {

	public static void main(String[] args) {
		BottomViewOfBinaryTree obj = new BottomViewOfBinaryTree();
		List<Integer> list = Arrays.asList(1, 2, 3, 4, 10, 9, 10, null, 5, null, null, null, null, null, null, 11, null,
				12, null, null, null);
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
		List<Integer> ans = obj.bottomView(root);
		for (Integer n : ans) {
			System.out.println(n);
		}
	}

	private List<Integer> bottomView(TreeNode root) {
		List<Integer> ans = new ArrayList<>();
		TreeMap<Integer, TreeNode> map = new TreeMap<>();
		Queue<Pair<TreeNode, Integer>> queue = new LinkedList<>();
		if(root==null) {
			return ans;
		}
		queue.add(new Pair<>(root, 0));
		while (!queue.isEmpty()) {
			Pair<TreeNode, Integer> pair = queue.poll();
			int y = pair.getValue();
			TreeNode node = pair.getKey();
			map.put(y, node);
			if (node.left != null) {
				queue.add(new Pair<>(node.left, y - 1));
			}
			if (node.right != null) {
				queue.add(new Pair<>(node.right, y + 1));
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

//class Tuple {
//	TreeNode node;
//	int _col;
//
//	Tuple(TreeNode node, int _col) {
//		this.node = node;
//		this._col = _col;
//	}
//
//}

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
