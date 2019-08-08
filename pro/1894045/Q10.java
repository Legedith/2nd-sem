import java.util.Scanner;
class distance 
{
    double cm;
    int ft,in;
    distance()
    {
        cm=in=ft=0;
    }
 
    distance(int a, int b)
    {
        ft = a;
        in = b;
        cm = ft*30.48 + in*2.54;
    }
     distance(distance O)
    {
        System.out.println("Starting the cloning process...");
        cm = O.cm;
        in=O.in;
        ft=O.ft;
    }
    void setDistance(int a, int b)
    {
        ft = a;
        in = b;
        cm = ft*30.48 + in*2.54;
    }
    void getDistance()
    {
        System.out.println("The distance is "+ft+" feet and "+ in+" inches");
        System.out.println("The distance in cm: "+cm+"cm");
    }
}

class main
{
    public static void main(String[] args)
    {
        Scanner o = new Scanner(System.in);
        System.out.print("Enter distance in feet and inches: ");
        distance a  = new distance(o.nextInt(),o.nextInt());
        a.getDistance();
        distance b  = a;
        b.setDistance(5,8);
        a.getDistance();
        distance c = new distance(a);
        c.getDistance();
    }
}
