class facto{
	public static void main(String args[])
	{
		int fact = 1;
		if (args.length!=1)
		{
			return;		
		}
		for(int i=1; i<args[0]; i++)
		{
			fact*=i;
		}
		System.out.println("factoiral is "+fact);		
	}
}
