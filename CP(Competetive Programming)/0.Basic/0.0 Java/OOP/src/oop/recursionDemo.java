package oop;

public class recursionDemo {

    int fact(int i) {
        if (i == 1) {
            return 1;
        } else {
            return i * fact(i - 1);
        }
    }
}
