import java.lang.*;
import java.util.*;
class square
{
	public static void main(String args[])
{
	int a;
	Scanner s1 = new Scanner(System.in);
	System.out.println("Enter a no ");
	a = s1.nextInt();
	double Root = Math.sqrt(a);
	System.out.println("Enter Two NUmbers To Calculated The Power "+Root );
	int x = s1.nextInt();
	int y = s1.nextInt();
	double power = Math.pow(x,y);

	System.out.println("The exponintal value : "+power);
	s1.close();
	}
}

