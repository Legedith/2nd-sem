import java.util.*;
class binaryAdv2{
	public static void main(String[] args)
	{
		Scanner o = new Scanner(System.in);
		System.out.print("		Enter a number:	");
		double n = o.nextDouble();
		int d = (int)n;
		n-=d;
		String a = "";
		String b= "";
		int ans = 0;
		while(d>0)
		{
			ans = ans*10 + d%2;
			if (ans ==0) a+='0';			
			d = d/2;	
		}
       for (int c=0;c<10;c++)
        {
			n = n*2;
		    if(n-1>0 || n==1.00)
            {
		      n-=1;
		      b+='1';
            }
			else
                b+='0';
		}
		System.out.println("		Binary Form:	"+ans+a+"."+b);
	}
}
