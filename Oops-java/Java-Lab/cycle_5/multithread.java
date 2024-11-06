import java.util.*;
class RandomNoGen implements Runnable
   {
   	private int limit;
   	RandomNoGen(int limit)
   	   {
   	   	this.limit = limit;
   	   }
   	public void run()
   	  {
   	  	           for(int i = 0;i<limit;i++)
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
class shareNo
  {
  	private int number;
	public synchronized void setNo(int number)
	{
		this.number = number;
	}
	public synchronized int getNumber()
		{ 
			return number;
	 	}
 }

	public class multh
	{
		public static void main(String args[])
			{
				int limit = 5;
		RandomNoGen t = new RandomNoGen(limit);
		Thread thread = new Thread(t);
		thread.start();
			}
	}
   	  	          
