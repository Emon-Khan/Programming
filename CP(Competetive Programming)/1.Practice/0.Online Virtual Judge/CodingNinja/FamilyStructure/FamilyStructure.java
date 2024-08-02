public class FamilyStructure{
    public static void main(String[] args) {
        System.out.println(kthChildNthGeneration(3, 4));
        // System.out.println(possiblePath(3, 3));
        // System.out.println(countPartition(6,4));

    }
    public static String kthChildNthGeneration(int n, long k){
            if(n==1 || k==1){
                return "Male";
            }
            long par= (k+1)/2;
            String parGender = kthChildNthGeneration(n-1, par);
            if(k==2*par-1){
                return parGender;
            }else{
                return (parGender == "Male") ? "Female": "Male";
            }
        }
    }

    //     if(number==0){
    //         return 0;
    //     }
    //     sum = number + kthChildNthGeneration(number-1, sum);
    //     return sum;
    // }
    // public static int possiblePath(int n, int m){
    //     if (n==1 || m == 1)
    //         return 1;
    //     else
    //         return possiblePath(n-1, m) + possiblePath(n, m-1);
    // }

    // public static int countPartition(int n, int m){
    //     if(n==0){
    //         return 1;
    //     }else if(m==0 || n<0){
    //         return 0;
    //     }else{
    //         return countPartition(n-m, m)+countPartition(n, m-1);   
    //     }
    // }
 