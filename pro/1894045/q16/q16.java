import java.util.Scanner;
import q16a.*;
class Input{
    public static void main(String[] args)
    {
        Scanner o = new Scanner(System.in);
        System.out.print("Enter the elment no.: ");
        int a = o.nextInt();
        System.out.println("Fibonacci: "+genFib.gen(a));
    }
}
