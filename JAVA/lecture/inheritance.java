class A{
    int age;
    private void funPrivate{
        System.out.println("Hello This is private");
    }
    public void fun{
        System.out.println("This is class A");
        funPrivate();
    }
}

class B extends A{
    public void fun2(){
        System.out.println("THis is fun2");
        fun();
    }
}
class C extends B{
    public void fun3(){
        System.out.println("This is fun");
    }
}
Class GFG{
    A obj1 = new A();
    B obj2 = new B();
    C obj3 = new C();
    obj3.fun3();
    obj3.fun2();
    obj3.age = 43;
    System.out.println(obj3.age);
}