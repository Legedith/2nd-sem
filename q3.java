interface stack{
	void push(int a);
	int pop();
}
class A implements stack{
	int ar[] = new int[10];
	int n = 0;
	public void push(int a)
	{
		if (n == 10)
		{	System.out.println("Stack full!");
			return;
		}
		ar[n] = a;
		n++;
	}
	public int pop()
	{
		if (n == 0)
		{
			System.out.println("Stack empty!");
			return -99;
		}
		return ar[--n];
	}
}
class main{
	public static void main(String[] args) {
		A st = new A();
		st.pop();
		for(int i=0; i<11; i++)
			st.push(i);
		for(int i=0; i<11; i++)
			st.pop();
	}
}