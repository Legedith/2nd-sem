import java.util.Scanner;
class tdary
{
	public static void main(String[] args)
	{
		Scanner ob = new Scanner(System.in);
		System.out.print("	Enter rows of matrix: ");
		int n = ob.nextInt();
		System.out.print("	Enter column of matrix: ");
		int m = ob.nextInt();
		int[][] ar = new int[n][m];
		for(int i =0;i<ar.length;i++)
			for(int j =0; j<ar[i].length; j++)
				ar[i][j] = ob.nextInt();
		for(int i =0;i<ar.length;i++)
			for(int j =0; j<ar[i].length; j++)
				System.out.println(ar[i][j]);	
	}





}
