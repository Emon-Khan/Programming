class PalindromeNumber {
    public static void main(String[] args) {
        PalindromeNumber obj = new PalindromeNumber();
        boolean flag = obj.isPalindrome(-121);
        System.out.println(flag);
        flag = obj.isPalindrome(121);
        System.out.println(flag);
    }

    public boolean isPalindrome(int x) {
        String str = Integer.toString(x);
        //System.out.println(str.length());
        for (int i = 0, j = str.length() - 1; i <= j; i++, j--) {
            //System.out.println(i+" "+j);
            if (str.charAt(i) != str.charAt(j)) {
                return false;
            }
        }
        return true;
    }
}