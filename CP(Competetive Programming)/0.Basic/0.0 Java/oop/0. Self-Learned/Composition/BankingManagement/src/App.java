import java.util.HashSet;
import java.util.Set;

public class App {
    public static void main(String[] args) throws Exception {
        Bank bank = new Bank("IFIC");
        Employee employee = new Employee("Emon");
        Employee employee1 = new Employee("Raju");
        Set<Employee> setofEmployee = new HashSet<>();
        setofEmployee.add(employee);
        setofEmployee.add(employee1);
        bank.setSetofEmployee(setofEmployee);
        for(Employee temp: setofEmployee){
            System.out.println(bank.getName()+" "+temp.getEmployerName());
        }
    }
}
