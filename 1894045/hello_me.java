import java.util.Scanner;
class hello{
	public static void main(String[] args)
	{
			System.out.println("Hello "+name());
	}
	public static String name(){
		Scanner ob = new Scanner(System.in);
		String a = ob.nextLine();
		return a;
	}
}
