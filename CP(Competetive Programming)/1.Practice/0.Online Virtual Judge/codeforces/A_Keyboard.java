package codeforces;
/*import java.util.*;

public class A_Keyboard {
    public static void main(String[] Args) {
        Scanner input = new Scanner(System.in);
        String a = "qwertyuiop";
        String b = "asdfghjkl;";
        String c = "zxcvbnm,./";
        char direction = input.next().charAt(0);
        String s = input.next();
        String ans = "";
        for (int i = 0; i < s.length(); i++) {
            if (a.indexOf(s.charAt(i)) != -1) {
                if (direction == 'R') {
                    ans += a.charAt(a.indexOf(s.charAt(i)) - 1);
                } else {
                    ans += a.charAt(a.indexOf(s.charAt(i)) + 1);
                }
            } else if (b.indexOf(s.charAt(i)) != -1) {
                if (direction == 'R') {
                    ans += b.charAt(b.indexOf(s.charAt(i)) - 1);
                } else {
                    ans += b.charAt(b.indexOf(s.charAt(i)) + 1);
                }
            } else if (c.indexOf(s.charAt(i)) != -1) {
                if (direction == 'R') {
                    ans += c.charAt(c.indexOf(s.charAt(i)) - 1);
                } else {
                    ans += c.charAt(c.indexOf(s.charAt(i)) + 1);
                }
            }
        }
        System.out.println(ans);
        input.close();
    }
}*/
/*
 * import java.util.*;
 * 
 * public class A_Keyboard { static void printArray(int[] arr) { for (int i = 0;
 * i < arr.length; i++) { System.out.print(arr[i] + " "); } }
 * 
 * static int digitsCount(long n) { return (int) Math.floor((long)
 * Math.log10((long) n)) + 1; }
 * 
 * static int gcd(int a, int b) { if (b == 0) return a; else return gcd(b, a %
 * b); }
 * 
 * static boolean isperfSquare(int n) { if (n < 1) return false; if (n == 1)
 * return true; for (int i = 1; i <= n / 2; i++) { if (i * i == n) return true;
 * } return false; }
 * 
 * static boolean isPowerOfTwo(int n) { return (n > 0) && ((n & (n - 1))) == 0;
 * }
 * 
 * static boolean isPrime(long n) { if (n <= 1) return false; for (int i = 2; i
 * <= Math.sqrt(n); i++) { if (n % i == 0) return false; } return true; }
 * 
 * static boolean isSorted(int[] arr) { for (int i = 0; i < arr.length - 1; i++)
 * { if (arr[i + 1] < arr[i]) return false; } return true; }
 * 
 * static ArrayList<Integer> SieveOfEratosthenes(int a) { boolean[] prime = new
 * boolean[a + 1]; ArrayList<Integer> v = new ArrayList<>(); for (int i = 2; i
 * <= a; i++) prime[i] = true; for (int i = 2; i * i <= a; i++) { if (prime[i])
 * { for (int j = i * i; j <= a; j += i) prime[j] = false; } } for (int i = 2; i
 * <= a; i++) { if (prime[i]) v.add(i); } return v; }
 * 
 * static boolean checkIfAP(int[] arr) { if (arr.length <= 2) return true; int
 * diff = arr[1] - arr[0]; for (int i = 1; i < arr.length - 1; i++) { if (arr[i
 * + 1] - arr[i] != diff) return false; } return true; }
 * 
 * static void inputArray(int[] arr, Scanner scan, int n) { for (int i = 0; i <
 * n; i++) { arr[i] = scan.nextInt(); } }
 * 
 * static boolean linearIn(int[] outer, int[] inner) { return
 * Arrays.asList(outer).containsAll(Arrays.asList(inner)); }
 * 
 * static String dectobin(int n) { if (n == 0) return "0"; StringBuilder s = new
 * StringBuilder(); while (n != 0) { int x = n % 2; s.append(x); n /= 2; }
 * s.reverse(); return s.toString(); }
 * 
 * static Map<Integer, Integer> elemCount(int[] arr) { Map<Integer, Integer> mp
 * = new HashMap<Integer, Integer>(); for (int i = 0; i < arr.length; i++) { if
 * (mp.containsKey(arr[i])) mp.put(arr[i], mp.get(arr[i]) + 1); else
 * mp.put(arr[i], 1); } return mp; }
 * 
 * public static void main(String[] args) { Scanner scan = new
 * Scanner(System.in); String a = "qwertyuiop"; String b = "asdfghjkl;"; String
 * c = "zxcvbnm,./"; char ch = scan.next().charAt(0); String s = scan.next();
 * String ans = ""; for (int i = 0; i < s.length(); i++) { if
 * (a.indexOf(s.charAt(i)) != -1) { if (ch == 'R') ans +=
 * a.charAt(a.indexOf(s.charAt(i)) - 1); else ans +=
 * a.charAt(a.indexOf(s.charAt(i)) + 1); } else if (b.indexOf(s.charAt(i)) !=
 * -1) { if (ch == 'R') ans += b.charAt(b.indexOf(s.charAt(i)) - 1); else ans +=
 * b.charAt(b.indexOf(s.charAt(i)) + 1); } else if (c.indexOf(s.charAt(i)) !=
 * -1) { if (ch == 'R') ans += c.charAt(c.indexOf(s.charAt(i)) - 1); else ans +=
 * c.charAt(c.indexOf(s.charAt(i)) + 1); } } System.out.println(ans);
 * scan.close(); } }
 */

import java.util.*;

public class A_Keyboard {
    public static void main(String[] Args) {
        Scanner input = new Scanner(System.in);
        String direction = input.nextLine();
        String s = input.nextLine();
        String temp = "qwertyuiopasdfghjkl;zxcvbnm,./";
        String ans = "";
        for (int i = 0; i < s.length(); i++) {
            if (direction.equals("R")) {
                ans += temp.charAt(temp.indexOf(s.charAt(i)) - 1);
            } else {
                ans += temp.charAt(temp.indexOf(s.charAt(i)) + 1);
            }
        }
        System.out.println(ans);
        input.close();
    }
}