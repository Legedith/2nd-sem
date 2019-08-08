import java.util.Scanner;
class ary{
    public static void main(String[] args)
    {
        int i = 5;
        System.out.println("Boxing");
        Integer j = new Integer(i);
        System.out.println("Auto - Boxing\nJ = "+j);    
        Integer k  =7;
        System.out.println("UnBoxing\nK = "+k);
        i = k;
        System.out.println("I = "+i);
    }
 }
