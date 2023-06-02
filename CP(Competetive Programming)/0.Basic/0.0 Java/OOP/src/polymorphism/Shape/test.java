package polymorphism.Shape;

public class test {
    public static void main(String[] args) {
        /*shape s1 = new shape();
        shape s2 = new rectangle(5, 20);
        shape s3 = new triangle(10, 15);
        
        System.out.println(s1.area());
        System.out.println(s2.area());
        System.out.println(s3.area());*/
        
        
        shape[] s = new shape[3];
        
        s[0] = new shape();
        s[1] = new rectangle(5, 20);
        s[2] = new triangle(19, 37);
        
        for(int i = 0; i<3; i++){
            System.out.println(s[i].area()); 
       }
    }
}
