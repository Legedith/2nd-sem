import java.util.Scanner;
class binary{
	public static void main(String[] args)
	{
		Scanner o = new Scanner(System.in);
		System.out.print("		Enter a number:	");
		int n = o.nextInt();
		String a = "";
		while(n>0)
		{
			if(n%2==1) a+='1';
			else a+='0';			
			n = n/2;		
		}
		int l = a.length();
		String ans="";
        for(int i=0; i<l; i++)
        {
            ans += a.charAt(l-i-1);
        }
		System.out.println("		Binary Form:	"+ans);
	}
}


