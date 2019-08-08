import java.awt.*;
import java.applet.*;
/*
<applet code="A" width =500 height=200>
</applet>*/
public class app extends Applet
{
    public void paint(Graphics G)
    {
        G.drawString("Hello", 20, 20);
    }
    public void start()
    {
        Thread t = new Thread();
        t.start();
    }
    public void run()
    {
        
    }
}
