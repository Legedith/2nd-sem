import java.util.Scanner;
class distance 
{
int feet ;
int inches;
distance()
  {
    System.out.println("default constructor ");
    feet =0;
    inches=0;
  }
    distance (int feet , int inches)
  {
   this.feet =feet ;
   this.inches =inches;
  }
    void display()
  {
    System.out.println("distance is: "+feet+"feet and"+inches+"inches");

  }
}
class Dmain
{
   public static void main (String args[])
    {
       System.out.println("enter the feet and no. ");
       Scanner ob =new Scanner (System.in );
       int feet=ob.nextInt();
       int inches=ob.nextInt();
       distance ob1 =new distance ();
       distance ob2=new distance (feet,inches );
       ob1.display();
       ob2.display();
       
    }

}

