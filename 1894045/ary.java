import java.util.Scanner;
class ary
{
	public static void main(String[] args)
	{	
		Scanner o = new Scanner(System.in);
		int l = o.nextInt();	
		int[] ar = new int[l];		
		for(int i =0; i<l; i++)
			ar[i]= o.nextInt();			
		for(int i =0; i<l; i++)
			System.out.println(ar[i]);
	}
}
