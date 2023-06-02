public class factoryPatternDemo {

    public static void main(String[] args) {
        shapeFactory shapeFact = new shapeFactory();

        shape shape1 = shapeFact.getshape("CIRCLE");
        shape1.draw();

        shape shape2 = shapeFact.getshape("RECTANGLE");
        shape2.draw();

        shape shape3 = shapeFact.getshape("SQUARE");
        shape3.draw();
    }
}
