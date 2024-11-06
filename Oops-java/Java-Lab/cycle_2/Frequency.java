import java.util.*;
class frequency
{
	public static void main(String args[])
		{  
		  	int count=0;
			Scanner S=new Scanner(System.in);
			System.out.println("enter the string");
			String str;
			str=S.nextLine();
			str.toLowerCase();
			System.out.println("enter the character to check");
		   	char c= S.next().charAt(0);
		  	int len=str.length();
		  	for(int i=0;i<len;i++)
		  	{
		   		if(str.charAt(i)== c)
		   		{
		   			count++;
		  	 	}
			}
			System.out.println("the frequency of character is "+count);
			S.close();
		}
}
