package Problem;

public class box {
    double height;
    double width;
    double depth;
    box(double height, double width, double depth){
        this.height = height;
        this.width = width;
        this.depth = depth;
    }
    void displayVol(){
        double vol = height * width * depth;
        System.out.println("Volume: "+vol);
    }
}
