import java.awt.*;
import java.applet.*;
/*<applet code="scrolling" width=50 height=50>
</applet>*/
public class scrolling extends Applet implements Runnable
{
 int x=0;
	Thread t;
	String m="BANNER SCROLING";
	public void init()
	{
		setBackground(Color.white);
		setForeground(Color.blue);
	}
	public  void start()
	{
		t=new Thread(this);
		t.start();
	}
	public void run()
	{
		try{
			while(true)
			{
				repaint();
				t.sleep(800);
			}
		}
		catch(InterruptedException e)
		{}
	}

	public void paint(Graphics G)
	{
		G.drawString(m,x*10,x*10);
		x+=5;
		if(x>=1000)
		x=10;
	}
}
