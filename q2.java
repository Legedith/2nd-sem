abstract class figure{
	double l;
	double b;
	double area()
	{
		return l+b;
	}
}
class triangle extends figure
{
	triangle(double x, double y)
	{
		l = x;
		b = y;
	}
	double area()
	{
		return l*b/2;
	}
}

class rectangle extends figure
{
	rectangle(double x, double y)
	{
		l = x;
		b = y;
	}
	double area()
	{
		return l*b;
	}
}

class main{
	public static void main(String[] args)
	{
		rectangle r = new rectangle(3,4);
		System.out.println(r.area());
		triangle t = new triangle(3,4);
		System.out.println(t.area());
	}
}