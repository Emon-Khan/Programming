package problem_abstract;

public class Triangle extends Shape {
    Triangle(double dim1, double dim2){
        /*this.dim1 = dim1;
        this.dim2 = dim2;*/
        super(dim1, dim2);
    }
    @Override
    void area(){
        double result = 0.5*dim1 * dim2;
        System.out.println("Area of Triangle : "+result);
    }
}
