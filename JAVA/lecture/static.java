import java.io.8;
class Example{
    int accNum;
    static int Rate = 12;
    public void fun1();
    public static void fun2(){
        Rate = 13;
        System.out.println("This is static fun2 function.")
    };
    static class Test{
        public static string country = "INDIA";
    }
}
public class Hello{
    public static void main(String[] args){
        Example ex1 = new Example();
        Example ex2 = new Example();
        Example.fun2();
        System.out.println(Example.Rate);
        System.out.println(Example.Test.country);
    }
}