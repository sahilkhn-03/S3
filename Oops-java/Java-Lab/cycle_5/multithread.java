

output_
student@ml-23:~/sahil$ javac multh.javaimport java.util.*;
class RandomNoGen implements Runnable
   {
   	public void run()
   	  {
   	  	int b = 1;
   	  	 		while(b==1)
   	  	           	{
   	  	          	int n = (int)(Math.random()*100);
   	  	          	System.out.println("The Generated Number is : "+n);
   	  	          	if(n%2==0)
   	  	          	  {
   	  	          	  	sqrcal even = new sqrcal(n);
   	  	          	  	Thread evenThread = new Thread(even);
   	  	          	  	evenThread.start();
   	  	          	  	try
   	  	          	  	 {
   	  	          	  	 	Thread.sleep(1000);
   	  	          	  	 }
   	  	          	  	catch(InterruptedException e)
   	  	          	  	 {
   	  	          	  	 	
   	  	          	  		System.out.println("Error:_");
   	  	          	  	 }
   	  	          	  }
   	  	                  else
   	  	                   {
   	  	                   	cubecal odd = new cubecal(n);
   	  	                   	Thread oddThread = new Thread(odd);
   	  	                   	oddThread.start();
   	  	                   	try
   	  	                   	 {
   	  	                   	 	Thread.sleep(1000);
   	  	                   	 }
   	  	                   	catch(InterruptedException e)
   	  	          	  	 {
   	  	          	  	 	
   	  	          	  		System.out.println("Error:_");
   	  	          	  	 }
   	  	          	  }
   	  	          }
    	  }
   }
class sqrcal implements Runnable
{
	private int number;
	sqrcal(int n)
	  {
	  	number = n;
	  }
	public void run()
	  {
	  	System.out.println("The Squre of The no is "+(number*number));
	  }
}
class cubecal implements Runnable
{
	private int number;
	cubecal(int n)
	   {
	   	number = n;
	   }
	public void run()
	{
		System.out.println("\nThe cube of the number is : "+(number*number*number));
	}
}

public class multh
	{
		public static void main(String args[])
			{
			
		RandomNoGen t = new RandomNoGen();
		Thread thread = new Thread(t);
		thread.start();
			}
	}
   	  	          
   	  	      
student@ml-23:~/sahil$ java multh
The Generated Number is : 11

The cube of the number is : 1331
The Generated Number is : 31

The cube of the number is : 29791
The Generated Number is : 27

The cube of the number is : 19683
The Generated Number is : 40
The Squre of The no is 1600
The Generated Number is : 23

The cube of the number is : 12167
student@ml-23:~/sahil$ 
