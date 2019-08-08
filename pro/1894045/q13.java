import java.util.Scanner;
class ary{
    public static void main(String[] args)
    {
        Scanner o  = new Scanner(System.in);
        System.out.print("Enter number of elements: ");
        int n = o.nextInt();
        int[] a = new int[n];
        System.out.print("Enter numbers: ");
        for(int i =0; i<n;i++)
        {
            a[i] = o.nextInt();
        }    
        System.out.println("Sum is "+sum(a));
    }
    static int sum(int ... a)
    {
        int b = 0;
        for(int i:a)
        {
            b+=i;
        }
        return b;
    }
}
