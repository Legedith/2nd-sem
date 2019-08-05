import java.util.Scanner;
class binary{
	public static void main(String[] args)
	{
		Scanner o = new Scanner(System.in);
		System.out.print("		Enter a number:	");
		int n = o.nextInt();
		String a = "";
		int ans = 0;
		while(n>0)
		{
			ans = ans*10 + n%2;
			if (ans ==0) a+='0';			
			n = n/2;		
		}
		System.out.println("		Binary Form:	"+ans+a);
	}
}


