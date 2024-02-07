import java.io.*;

class Box{
    private int len, bre, height;
    public void setDimension(int l, int b, int h){
        len = l;
        bre = b;
        height= h;
    }
    public void showDimension(){
        System.out.println("L="+len);
        System.out.println("B="+bre);
        System.out.println("H="+height);
    }
}
class Example{
    public static void main(String[] args){
        Box o1 = new Box();
        o1.setDimension(12,12,41);
        o1.showDimension();
        o1.showDimension();
    }
}