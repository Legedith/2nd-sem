import java.util.Scanner;
class nested{
    public static void main(String[] args)
    { 
       //try {
            Scanner o = new Scanner(System.in);
            System.out.print("enter the size of array :");
            int size = o.nextInt();
            int ar[] =new int[size];
            System.out.print("enter the elememt of array :");
            for(int i=0;i<size;i++)
            {
                ar[i]=o.nextInt();
            }
            for(int i=0;i<size;i++)
                System.out.print(ar[i]);
            System.out.print("Enter the value of a: ");
            float a = o.nextFloat();
            System.out.print("Enter the value of b: ");
            float b = o.nextFloat();
            try{
                
                try{
                    int g = ar[5];
                    System.out.print("the value of index 5: "+g);
                }
                catch(ArrayIndexOutOfBoundsException e){
                    System.out.println("The array entered was shorter!");
                }
                float c = a/b;
                if(b==0)throw new ArithmeticException();
                System.out.println("The value of a/b: "+c);
            }
            catch(ArithmeticException e)
            {
                System.out.println("  Denominator can't be zero");
            }/*
            throw new ArithmeticException(); 
        }
        catch(ArithmeticException e)
        {
            System.out.print("strings are not supported ");
        }*/
    }
};
