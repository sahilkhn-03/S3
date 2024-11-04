import java.io.*;
public class filehandling
    {
     	public static void main (String args[])
     	{
     	    try
     	       {
     	       		FileReader reader = new FileReader("input.txt");
     	       		FileWriter writer = new FileWriter("output.txt");
     	       		
     	       		int character = reader.read();
     	       		System.out.println("Reading from input and Writing to output ");
     	       		while(character!=-1)
     	       			{
     	       				writer.write(character);
     	       				System.out.println((char)character);
     	       			}
     	       			
     	       		reader.close();
     	       		writer.close();
     	       		System.out.println("\nFileContent writern Sucessfully to output\n");
     	       	}
     	      catch(FileNotFoundException e)
     	      	{
     	      		
     	       		System.out.println("Error: File Not Found_"+ e.getMessage());
     	       	}
     	       catch(IOException e)
     	        {
     	        	System.out.println("Errorr: I/OException_"+ e.getMessage());
     	        }
     	       catch(Exception e)
     	        {
     	        	System.out.println("Erroe:"+ e.getMessage());
     	        }
     	          
     	         System.out.println();
     	         
      }
    }
