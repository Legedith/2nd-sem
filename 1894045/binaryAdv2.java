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
      //System.out.print("		the value of b:	");		
		//double limit = 0.05;
               int c;

               for ( c=0;c<10;){
	       //while (1-n>limit ){
			n = n*2;
                        if (n==1.00)
                         {
                          b+='1';
                          c++;
                         }
		        else if(n-1>0){
				      n-=1;
				       b+='1';
                                       c++;
			              }
			else
				{b+='0';
                                 c++;	}
	//System.out.print("		Enter a number:	");}
		}
		//System.out.println(b+" this is b");
		System.out.println("		Binary Form:	"+ans+a+"."+b);
	}
}

