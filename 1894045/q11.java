import java.util.Scanner;
class area
{
    static float area(float x,float y)
    {
        System.out.println("In float");
        return x*y;
    }
    static double area(double x,double y)
    {
        System.out.println("In double");
        return x*y;
    }
    public static void main(String args[])
    {
        Scanner O=new Scanner (System.in);
        System.out.print("Enter Length and breadth: ");
        System.out.println(area(O.nextInt(),O.nextInt())+" sq. units");
    }
}

