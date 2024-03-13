import java.util.Set;

public class Bank {

    private String name;
    private Set<Employee> employees;

    Bank(String name) {
        this.name = name;
    }

    public String getName() {
        return this.name;
    }

    public void setSetofEmployee(Set<Employee> employees) {
        this.employees = employees;
    }

    public Set<Employee> getSetofEmployee() {
        return this.employees;
    }

}