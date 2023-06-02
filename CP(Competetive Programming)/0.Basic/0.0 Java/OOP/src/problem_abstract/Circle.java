package problem_abstract;

public class Circle extends Shape {
    Circle(double r){
        /*this.dim1 = dim1;
        this.dim2 = dim2;*/
        super(r, r);
        
    }
    @Override
    void area(){
        double result = 3.14*dim1 * dim2;
        System.out.println("Area of Circle : "+result);
    }
}
