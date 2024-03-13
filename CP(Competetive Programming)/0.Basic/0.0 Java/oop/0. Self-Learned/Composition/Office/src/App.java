public class App {
    public static void main(String[] args) throws Exception {
        Person person = new Person("Mr.", "Emon", 23);
        Person person2 = new Person("Mr.", "Zoha", 33);
        Employee employee = new Employee(15000, person);
        System.out.println(employee.salary);
        System.out.println(employee.person.title);
        Manager manager = new Manager(person2);
        System.out.println(manager.getPerson().name);
    }
}
