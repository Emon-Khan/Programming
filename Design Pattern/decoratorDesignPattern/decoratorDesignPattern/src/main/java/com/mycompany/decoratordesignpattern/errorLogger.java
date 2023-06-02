package com.mycompany.decoratordesignpattern;

public class errorLogger extends abstractLogger {
    public errorLogger(int level){
        this.level = level;
    }
    @Override
    protected void write(String message){
        System.out.println("Error Console::Logger: "+message);
    }
}
