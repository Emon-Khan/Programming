package firstTry;

import java.util.ArrayList;
import java.util.List;

public class BuildArrayWithStack {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		BuildArrayWithStack buildArrayWithStack = new BuildArrayWithStack();
		int[] target = { 1, 3 };
		int n = 3;
		List<String> ans = buildArrayWithStack.buildArray(target, n);
		System.out.println(ans);
	}

	private List<String> buildArray(int[] target, int n) {
		// TODO Auto-generated method stub
		List<Integer> arr = new ArrayList<Integer>(); // target=[1,3] n=3
		List<String> operation = new ArrayList<String>();
		int i = 0;
		int j = 0;
		int count = 1;
		arr.add(count);
		operation.add("Push");
		while (count <= n) {
			if (i>=target.length && target[i] != arr.get(j)) { //ar=[1,3]
				arr.remove(j);
				operation.add("Pop");
				j--;
				
			} else {
				j++; // 2 1
				i++;
				count++;//3
				arr.add(count);
				operation.add("Push"); // pu pu po pu
			}
		}
		System.out.println(arr);
		return operation;
	}

}
