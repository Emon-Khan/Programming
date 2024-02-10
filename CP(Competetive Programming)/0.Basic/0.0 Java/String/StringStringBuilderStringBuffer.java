public class StringStringBuilderStringBuffer {
    public static void main(String[] args) {
        String str1 = "value1";
        str1.concat("value2");
        System.out.println(str1); //value1

        String str2 = str1.concat("value2");
        System.out.println(str2); //value1value2

        String temp = "tempValue";
        for(int i = 0; i<100000; i++){
            temp = str1+temp;
        } // This will take 50 times more than the stringBuffer's one

        StringBuffer strBuffer = new StringBuffer("valueBuffer");
        String str3 = "value3";
        for(int i = 0; i<100000; i++){
            strBuffer.append(str3);
        } //efficient one

    }
}
