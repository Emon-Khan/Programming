
public class shapeFactory {

    public shape getshape(String shapeType) {
        if (shapeType == null) {
            return null;
        }
        if (shapeType.equalsIgnoreCase("CIRCLE")) {
            return new circle();
        } else if (shapeType.equalsIgnoreCase("RECTANGLE")) {
            return new rectangle();
        } else if (shapeType.equalsIgnoreCase("SQUARE")) {
            return new square();
        }
        return null;
    }
}
