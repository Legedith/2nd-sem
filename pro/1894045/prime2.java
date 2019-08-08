import java.util.Scanner;
import java.lang.Math;
class prime{
	public static void main(String[] args)
	{
		Scanner o = new Scanner(System.in);
		System.out.print("	Enter number: ");
		int x = o.nextInt();	
		if( noPrime(x))
			System.out.println("	Prime");
		else
			System.out.println("	Not Prime");
	}
	public static boolean noPrime(int r)
	{
		if(r%2==0) return false;
		double d = Math.sqrt(r);
		for( int i = 3; i<=d;i+= 2)
			if( r%i==0)
				return false;
		return true;  
	}

}

