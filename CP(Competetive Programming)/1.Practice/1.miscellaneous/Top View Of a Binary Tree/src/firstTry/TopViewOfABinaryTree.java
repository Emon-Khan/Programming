package firstTry;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedHashMap;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import java.util.TreeMap;

public class TopViewOfABinaryTree {
//	static List<Integer> finalList = new ArrayList<Integer>();

	public static void main(String[] args) {
		TopViewOfABinaryTree obj = new TopViewOfABinaryTree();
		List<Integer> list = Arrays.asList(1, 2, 3, 4, 10, 9,10, null,5, null, null, null, null, null, null, 11, 6, 12,null, null, null, null, null);
		Queue<TreeNode> q = new LinkedList<TreeNode>();
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
		obj.topView(root);
		
	}

	private void topView(TreeNode root) {
		TreeMap<Integer, List<TreeNode>> map = new TreeMap<>();
		Queue<Tuple> q = new LinkedList<>();
		q.add(new Tuple(root, 0));
		while(!q.isEmpty()) {
			Tuple tuple = q.poll();
			int y = tuple._col;
			TreeNode node = tuple.node;
			if(!map.containsKey(y)) {
				map.put(y, new ArrayList<>());
				map.get(y).add(node);
			}
			if(node.left!=null) {
				q.add(new Tuple(node.left, y-1));
			}
			if(node.right != null) {
				q.add(new Tuple(node.right, y+1));
			}
		}
		map.forEach((key, value)->System.out.print(value.get(0).val+" "));
	}
}
class Tuple{
	TreeNode node;
	int _col;
	Tuple(TreeNode node,int _col){
		this.node = node;
		this._col = _col;
	}
}

class TreeNode{
	int val;
	TreeNode left;
	TreeNode right;

	TreeNode() {
	}

	TreeNode(int val) {
		this.val = val;
	}

	TreeNode(int val, TreeNode left, TreeNode right) {
		this.val = val;
		this.left = left;
		this.right = right;
	}
}

