package com.mycompany.decoratordesignpattern;

public class fileLogger extends abstractLogger {

    public fileLogger(int level) {
        this.level = level;
    }

    @Override
    protected void write(String message) {
        System.out.println("File::Logger: " + message);
    }
}
