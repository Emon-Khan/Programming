package date_demo;

import java.text.DateFormat;
import java.text.SimpleDateFormat;
import java.util.Date;

public class current_date {
    public static void main(String[] args) {
        Date date = new Date();
        System.out.println(date);
        DateFormat dateFormat = new SimpleDateFormat("dd/MM/yyyy");
        String currentDate = dateFormat.format(date);
        System.out.println(currentDate);
    }
}
