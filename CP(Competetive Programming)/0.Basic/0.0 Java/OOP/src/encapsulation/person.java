package encapsulation;

public class person {
    
    private String name;
    private int age;
    
    /*void display(){
        System.out.println("Name : "+name);
        System.out.println("Age : "+age);
    }*/
    
    /*public void setName(String name){
        this.name = name;
    }
    public String getName(){
        return name;
    }
    public void setAge(int age){
        this.age = age;
    }
    public int getAge(){
        return age;
    }*/

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }
    
}
