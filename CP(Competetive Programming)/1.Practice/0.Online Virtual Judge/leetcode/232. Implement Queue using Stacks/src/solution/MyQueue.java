package solution;

import java.util.Stack;

public class MyQueue {
	Stack<Integer> queue1;
	Stack<Integer> queue2;
	
    public MyQueue() {
    	queue1 =new Stack<Integer>() ;
    	queue2 =new Stack<Integer>() ;
    }
    
    public void push(int x) {
    	queue1.push(x);  
    }
    
    public int pop() {
    	while(!queue1.isEmpty()) {
    		queue2.push(queue1.pop());// 2  1
    	}
        int val = queue2.pop();
        while(!queue2.isEmpty()) {
        	queue1.push(queue2.pop());
        }
        return val;
    }
    
    public int peek() {
        // 1 2
    	while(!queue1.isEmpty()) {
    		queue2.push(queue1.pop());// 2  1
    	}
        int val = queue2.peek();
        while(!queue2.isEmpty()) {
        	queue1.push(queue2.pop());
        }
        return val;
    }
    
    public boolean empty() {
    	if(queue1.isEmpty()) {
    		return true;
    	}else {
    		return false;
    	}
    }
}
