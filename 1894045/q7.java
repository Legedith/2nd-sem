import java.util.Scanner;
class cline{
    public static void main(String[] number)
    {
        if( number.length!=1 )
            return;
        Scanner o = new Scanner(System.in);
        int n = Integer.parseInt(number[0]);
        int[] array = new int[n];
        int ans = 0;
        System.out.print("Enter Elements: ");
        for (int i=0; i<n; i++)
            {
                array[i] = o.nextInt();
                ans +=array[i];
             }
        System.out.println("The sum is: "+ans);                   
    }
}
