package methodOverriding;

public class test {
    public static void main(String[] args) {
        teacher t1 = new teacher();
        t1.name = "Emn";
        t1.age = 23;
        t1.qualification = "BSc in CSE";
        
        t1.displayInfomation(); 
        
        person p1 = new person();
        p1.name = "Eskatun";
        p1.age = 32;
        
        p1.displayInfomation();
    }
}
