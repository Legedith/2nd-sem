import java.util.Scanner;
class distance 
{
    double cm,in,ft;
    distance()
    {
        cm=in=ft=0;
    }
    distance(double cm)
    {
        this.cm = cm;
        in = cm/2.54;
        ft = in/12;
    }
    void setDistance(double a)
    {
        cm = a;
        in = cm/2.54;
        ft = in/12;
    }
    void getDistance()
    {
        System.out.printf("The distance in feet: %.2f\nThe distance in inches: %.2f\n",ft,in);
    }
}

class main
{
    public static void main(String[] args)
    {
        distance a  = new distance();
        Scanner o = new Scanner(System.in);
        System.out.print("Enter Distance in Cm: ");
        double cm = o.nextDouble();
        a.setDistance(cm);
        a.getDistance();
    }
}
