import java.util.Scanner;
class main{
    public static void main(String[] args)
    {
        Scanner o = new Scanner(System.in);
        System.out.print("Enter the value of a: ");
        float a = o.nextFloat();
        System.out.print("Enter the value of b: ");
        float b = o.nextFloat();
        try{
            if(b==0)throw new ArithmeticException();
            float c = a/b;
            System.out.println("The value of a/b: "+c);
        }
        catch(ArithmeticException e)
        {
            System.out.println("  Denominator can't be zero");
        }
        finally{
            System.out.println("This is the final block");
        }
    }
};
