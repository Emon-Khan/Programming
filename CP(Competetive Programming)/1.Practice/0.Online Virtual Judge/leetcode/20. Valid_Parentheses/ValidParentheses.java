import java.util.*;

class ValidParentheses {
    public static void main(String[] args) {
        String s = new String();
        Scanner scan = new Scanner(System.in);
        s = scan.nextLine();
        /*
         * System.out.println("s " + s);
         * System.out.println(s.length());
         */
        ValidParentheses obj = new ValidParentheses();
        boolean result = obj.isValid(s);
        System.out.println(result);
        scan.close();
    }

    private boolean isValid(String s) {
        // System.out.println(s);
        Map<Character, Character> mp = new HashMap<>();
        Stack<Character> stack = new Stack<>();
        mp.put('(', ')');
        mp.put('{', '}');
        mp.put('[', ']');
        boolean result = true;
        int i;
        int len = s.length();
        for (i = 0; i < len; i++) {
            /*
             * System.out.println(mp.get(s.charAt(i)));
             * System.out.println(s.charAt(i + 1));
             */
            if (mp.get(s.charAt(i)) == null && !stack.empty() && mp.get(stack.peek()) == s.charAt(i)) {
                stack.pop();
            } else if (mp.get(s.charAt(i)) != null) {
                stack.push(s.charAt(i));
            } else {
                stack.push(s.charAt(i));
                break;
            }
            /*
             * for(Character it: stack){
             * System.out.println(it);
             * }
             */
        }
        /*
         * for (Character it : stack) {
         * System.out.println(it);
         * }
         */

        if (stack.empty()) {
            result = true;
        } else {
            result = false;
        }

        return result;
    }
}