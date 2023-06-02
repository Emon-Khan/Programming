package com.mycompany.decoratordesignpattern;

public class consoleLogger extends abstractLogger {

    public consoleLogger(int level) {
        this.level = level;
    }

    @Override
    protected void write(String message) {
        System.out.println("Standard Console::Logger: " + message);
    }
    
}
