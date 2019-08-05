import java.util.Scanner;
class euler{
	int[][] adj = new int[10][10];
	int n;
	void input()
	{
		Scanner o = new Scanner(System.in);
		System.out.print("Enter no. of vertices - ");
		n = o.nextInt();
		for(int i=0; i<n; i++)
		{
			for(int j=i+1; j<n; j++)
			{
				System.out.print("Edge from "+i+" to "+j+" : ");
				adj[i][j] = o.nextInt();
				adj[j][i] = adj[i][j];
			}
		}
	}
	void display()
	{
		for (int i=0; i<n ; i++ )
		{
			for(int j=0; j<n; j++)
			{
				System.out.print(adj[i][j]+"  ");
			}
			System.out.println();
		}
	}
	boolean eulerPath()
	{
		int l = 0;
		for(int i=0; i<n; i++, l=0)
		{
			for(int j=0; j<n; j++)
			{
				l+=adj[i][j];
			}
			if(l%2 == 1)
				return false;
		}
		return true;
	}
}
class main{
	public static void main(String[] args) {
		euler e = new euler();
		e.input();
		e.display();
		if(e.eulerPath())
			System.out.println("Euler path!");
		else
			System.out.println("Not Euler Path!");
	}
}
