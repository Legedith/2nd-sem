class prime{
	public static void main(String[] args)
	{
		if( args.length!=1)
		{
			System.out.println(" Usage: java prime number ");
			return;
		}
		int number = Integer.parseInt(args[0]);		
		if( noPrime(number))
			System.out.println("Prime");
		else
			System.out.println("Not Prime");
	}
	public static boolean noPrime(int r)
	{
		for( int i = 2; i<=r/2;i++)
			if( r%i==0)
				return false;
		return true;  
	}

}

