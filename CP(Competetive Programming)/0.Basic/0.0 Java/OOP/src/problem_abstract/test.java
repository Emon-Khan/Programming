package problem_abstract;

public class test {
    public static void main(String[] args) {
        Shape ob;
        ob = new Rectangle(18, 19);
        ob.area();
        ob = new Triangle(5, 6);
        ob.area();
        ob = new Circle(5);
        
        ob.area();
    }
}
