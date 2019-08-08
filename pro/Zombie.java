import java.util.Scanner;
class noBrain extends Exception{
	int i = 0;
	public String toString()
	{
		return "	The human had low volume of brainzzz...\n<	The volume was "+i+" Kgs...\n";
	}
	noBrain(int a)
	{
		i=a;
	}
}
class zombie{
	static void eat(int a) throws noBrain
	{
		System.out.println("	Zombies about to have lunch...");
		System.out.println("	Weighting the brains...");
		if(a<5)
			throw new noBrain(a);
		System.out.println("	Zombies left your house!\n	After eating your brains...");
	}
	public static void main(String[] args)
	{
		Scanner o = new Scanner(System.in);
		try{
			while (true)		
			{
				System.out.println("	Zombies want to know the weight of your brain...");
				System.out.println("	For... Aahhh.... \"research purposes\"...");
				eat(o.nextInt());
				System.out.println("	Zombies entered AGAIN!");
			}
		}
		catch(noBrain e)
		{
			System.out.println(e);
		}
	}
}
