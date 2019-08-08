import java.awt.*;
import java.applet.*;
/*
    <applet code="scroll.java" height = 720, width =1080></applet>
*/
class scroll extends Applets{
    int i = 10;
    public void paint(Graphics g)
    {
        g.drawString("Banner",i,15);
    }
    public void run()
    {
        repaint();
        i+=10;
    }

}
