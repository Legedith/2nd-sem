class adder{
	public static void main(String[] args)
	{
		int n = args.length;
		int ans = adder(args , n);
		System.out.println("Answer is " + ans);
	}
	public static int adder(String args[], int n)
	{
		int sum = 0;		
		for(int i=0; i<n; i++)
		{
			sum+= Integer.parseInt(args[i]);
		}	
		return sum;
	}
}

