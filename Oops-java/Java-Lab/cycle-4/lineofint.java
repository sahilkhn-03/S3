import java.util.*;
public class integersum
 {
 	public static void main (String args[])
 		{
 			
    			Scanner s = new Scanner(System.in);
	    		System.out.println("Enter The Line of integer seperated by spaces ");
	    		String inputLine = s.nextLine();
    		        String[] numbers = inputLine.split("");
    		        
    		        int sum = 0;
    		        
    		       System.out.println("The integer Are :");
    		       for(String numstr : numbers)
			  {
			  	int num = Integer.parseInt(numstr);
			  	System.out.println(num);
			  	sum+= num;
    		          }
    		          System.out.println("The sum of all integer is " +sum);
    		 }
    }		         
