class shape {
    public void area() {
        System.out.println("Displays Area");
    }
}

class triangle extends shape {
    public void area(float l, float h) {
        System.out.println(1.0 / 2.0 * l * h);
    }
}

class circle extends shape {
    public void area(float r) {
        System.out.println(3.1416 * r * r);
    }
}

class equilaterialTriangle extends triangle {
    public void area(float l, float h) {
        System.out.println(1.0 / 2.0 * l * h);
    }
}

public class Java_OOP {
    public static void main(String args[]) {
        triangle t1 = new triangle();
        t1.area(4, 3);
        equilaterialTriangle eqt1 = new equilaterialTriangle();
        eqt1.area(9, 6);
        circle c = new circle();
        c.area(5);
    }
}