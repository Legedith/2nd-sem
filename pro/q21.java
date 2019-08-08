class A extends Thread
{
    String x;
    A(String y)
    {
        x=y;
    }
    public void run()
    {
        try
        {
            for(int i=0; i<5; i++)
            {
                System.out.println(x+" : "+i);
                Thread.sleep(500);
                //System.out.println(x+" " +Thread.getPriority());
            }
                
            System.out.println(x+ " Ends here!");
        }
        catch(InterruptedException e)
        {
            System.out.println("Errors!");
        }
    }
}    

class b
{
    public static void main(String[] args)
    {
        A ob1 = new A("Thread 1");
        A ob2 = new A("Thread 2");
        System.out.println(ob1.getPriority());
        System.out.println(ob2.getPriority());
        ob1.setPriority(7);
        ob2.setPriority(3);
        ob1.start();
        ob2.start();
        try{
            for(int i=0; i<5; i++)
            {
                System.out.println("Main thread "+i);
                Thread.sleep(500);
            }
            System.out.println("Main ends here!");
        }
        catch(InterruptedException e)
        {
            System.out.println("Error Errorr Errorrr...");
        }
        System.out.println("At the end");
    }
}
		
