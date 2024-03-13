class Account {
    private int id;
    private String name;

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

}

public class Encapsulation {
    public static void main(String[] args) {
        Account account = new Account();
        account.setId(1);
        System.out.println(account.getId());
        account.setName("Emon");
        System.out.println(account.getName());
    }

}
