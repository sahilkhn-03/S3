import java.io.*;
public class trycatchfinally
    {
     	public static void main (String args[])
     	{
     	    try
     	       {
     	       	        int num[] = { 43,76,89};
     	       	        System.out.println(num[10]);
     	       }
     	    
     	    catch(Exception e)
     	       {
     	    		System.out.println("Catch Block");
     	    		System.out.println("Error Occured In program ");
     	       }
     	    finally
     	       {
     	         	System.out.println("\nFinallyBlock");
     	         	System.out.println("tryandcatch excicuted sucessfully");
     	         
     	       }
     	}
     }
