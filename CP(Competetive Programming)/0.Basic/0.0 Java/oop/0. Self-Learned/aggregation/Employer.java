package aggregation;
class Address {
    String city;
    String state;

    public Address(String city, String state) {
        this.city = city;
        this.state = state;
    }
}

class Employer {
    String name;
    String role;
    Address address;

    public Employer(String name, String role, Address address) {
        this.name = name;
        this.role = role;
        this.address = address;
    }

    void display() {
        System.out.println(name + " " + role);
        System.out.println(address.city + " " + address.state);
    }

    public static void main(String[] args) {
        Address address1 = new Address("Dhaka", "Dhaka");
        Address address2 = new Address("Chattogram", "Chattogram");
        Employer employer = new Employer("Emon", "Backend Developer", address1);
        Employer employer2 = new Employer("Raju", "Frontend Developer", address2);
        // System.out.println(employer.name + " " + employer.role + " " +
        // employer.address.city);
        employer.display();
        System.out.println(employer2);
        employer2.display();
    }
}
