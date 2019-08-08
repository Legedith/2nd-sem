import java.util.Scanner;
import q15.*;
class Input{
    public static int fibonacci (int n)
        {
            if(n==1)
            {
                return 0;
            }
            else if(n==2)
            {
                return 1;
            }
            else
            {
                return (fibonacci(n-1)+fibonacci(n-2));
            }
        }
    public static void main(String[] args)
    {
        String a = input();
        Print s = new Print(a);
        s.display();
    }
}
