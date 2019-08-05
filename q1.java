class Inp{
	public static void main(String[] args)
	{
		int n = args.length;
		int[] ar = new int[n];
		for(int i=0; i<n; i++)
			ar[i] = Integer.parseInt(args[i]);
		for (int i = 0; i < n-1; i++)
    		for (int j = 0; j < n-i-1; j++)
        		if (ar[j] > ar[j+1])
        		{
            	
            	    int temp = ar[j];
                	ar[j] = ar[j+1];
                	ar[j+1] = temp;
        		}
    	for(int i=0; i<n; i++)
    		System.out.print(ar[i]+" ");
    }
			
}
		
