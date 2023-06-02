package com.mycompany.decoratordesignpattern;

public class mainChainOfResponsibilities {

    private static abstractLogger getChainOfLoggers() {
        abstractLogger ErrorLogger = new errorLogger(abstractLogger.ERROR);
        abstractLogger FileLogger = new fileLogger(abstractLogger.DEBUG);
        abstractLogger ConsoleLogger = new consoleLogger(abstractLogger.INFO);
        ErrorLogger.setNextLogger(FileLogger);
        FileLogger.setNextLogger(ConsoleLogger);
        return ErrorLogger;
    }

    public static void main(String[] args) {
        abstractLogger loggerChain = getChainOfLoggers();
        loggerChain.logMessage(abstractLogger.INFO, "This is an information");
        loggerChain.logMessage(abstractLogger.DEBUG, "This is an debug level information");
        loggerChain.logMessage(abstractLogger.ERROR, "This is an error information");
    }
}
