import java.util.*;
class avg
{
	public static void main(String args[])
{
	int a,b;
	Scanner s1 = new Scanner(System.in);
	System.out.println("Enter 2 Integer  ");
	a = s1.nextInt();
	b = s1.nextInt();
	float avg = (a+b)/2;
	System.out.println("avg Of 2 integer is : "+avg);
	s1.close();
	}
}
