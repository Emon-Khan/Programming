package superKeyword;

public class car extends vehicle {
    int gear;
    car(String c, double w, int g){
        /*color = c;
        weight = w;*/
        super(c, w);
        gear = g;
    }
    @Override
    void attribute(){
        /*System.out.println("Color : "+color);
        System.out.println("Weight : "+weight);*/
        super.attribute();
        System.out.println("Gear : "+gear);
    }
}
