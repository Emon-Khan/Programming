package superKeyword;

public class vehicle {
    String color;
    double weight;
    
    vehicle(String c, double w){
        color = c;
        weight = w;
    }
    
    void attribute(){
        System.out.println("Color : "+color);
        System.out.println("Weight : "+weight);
    }
}
