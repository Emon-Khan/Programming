package problem_abstract;

public class Rectangle extends Shape {
    Rectangle(double dim1, double dim2){
        /*this.dim1 = dim1;
        this.dim2 = dim2;*/
        super(dim1, dim2);
    }
    @Override
    void area(){
        double result = dim1 * dim2;
        System.out.println("Area of Rectangle : "+result);
    }
    
}
