public class Hero extends Actor {
    public void fight() {
        System.out.println("Fighting");
    }

    public static void main(String[] args) {
        Hero obj = new Hero();
        obj.fight();
        obj.act();
    }
}
