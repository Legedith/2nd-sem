class Print{
        public String s;
        public Print()
        {
            s="";
        }
       public Print(String a)
        {
            s=a;
        }
        public void display()
        {
            System.out.println("String was: "+s);
            System.out.print("Reverse is : ");
            int n = s.length();
            for(int i=0; i<n; i++)
            {
                System.out.print(s.charAt(n-i-1));
            }
            System.out.println();
        }
}
