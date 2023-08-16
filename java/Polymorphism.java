class Manipulation{
    public void print(){
        System.out.println("Manipulation");
    }
}
class Addition extends Manipulation{
    public void print(){
        System.out.println("Addition");
    }
}
public class Polymorphism{
    public static void main(String[] args){
        Manipulation m = new Addition();
        m.print();
    }
}