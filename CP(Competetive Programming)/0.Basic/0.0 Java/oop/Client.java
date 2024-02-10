public class Client {
    private int id;

    public Client(int id) {
        this.id = id;
    }

    
    /*@Override
    public boolean equals(Object obj) {
        Client c = (Client)obj;
        if (id != c.id) {
            return false;
        }
        return true;
    }*/

    @Override
    public int hashCode() {
        final int prime = 31;
        int result = 1;
        result = prime * result + id;
        return result;
    }


    @Override
    public boolean equals(Object obj) {
        if (this == obj)
            return true;
        if (obj == null)
            return false;
        if (getClass() != obj.getClass())
            return false;
        Client other = (Client) obj;
        if (id != other.id)
            return false;
        return true;
    }


    public static void main(String[] args) {
        Client client1 = new Client(25);
        Client client2 = new Client(25);
        Client client3 = client2;

        System.out.println(client1 == client2); // false
        System.out.println(client3 == client2); // true

        System.out.println(client1.equals(client2)); // false without @override
        System.out.println(client3.equals(client2)); // true
    }
}