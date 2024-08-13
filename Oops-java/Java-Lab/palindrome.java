import java.util.Scanner;
class palindrome{
public static void main(String[] args){
String str, rev="";
int i, len;
System.out.println("enter the string=");
Scanner sc = new Scanner(System.in);
str = sc.nextLine();
len=str.length();
for (i=len-1;i>=0;i--)
{
	rev=rev+str.charAt(i);
}
if (str.equals(rev))
{
System.out.println( "string is palindrome");
}
else 
{
System.out.println("string is not palindrome");
}
sc.close();
}
}

