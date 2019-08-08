import java.util.Scanner;
class Input{
    static String input()
    {
        Scanner o = new Scanner(System.in);
        System.out.print("Enter a string: ");
        return o.nextLine();
    }
    public static void main(String[] args)
    {
        String a = input();
        Print s = new Print(a);
        s.display();
    }
}
