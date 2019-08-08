import java.util.Scanner;
class ary
{
	public static void main(String[] args)
	{	
		Scanner o = new Scanner(System.in);
        System.out.print("      Enter length of array: ");
		int l = o.nextInt();	
		int[] ar = new int[l];		
        System.out.print("      Enter elements: ");
		for(int i =0; i<l; i++)
			ar[i]= o.nextInt();			
        System.out.println("Elements are: ");
		for(int i =0; i<l; i++)
			System.out.println(ar[i]);
	}
}
