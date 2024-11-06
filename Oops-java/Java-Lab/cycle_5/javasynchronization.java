class savingAcc
	{
		private int funds = 1000;
		 public synchronized void addfunds(int amount)
			{
				funds += amount;
				System.out.println(Thread.currentThread().getName() +"Deposite amount:"+amount+ "NewBalance:"+funds);
			}
		 public synchronized void withdrawfunds(int amount)
		 	{
		 		if(funds>=amount)
		 		  {
		 			funds = funds - amount ;
		 			System.out.println(Thread.currentThread().getName() +"Withdraw"+amount+ "NewBalance"+funds);
		 		  }
		 		else
		 		  {
		 		  	System.out.println(Thread.currentThread().getName() +"Tried to withdraw"+amount+"Insufficient Balance"+funds);
		 		  }
		 	}
		 			public int getfunds()
		 			 {
		 			 	return funds;
		 			 }
	 }
class customer extends Thread
 {
 	private savingAcc account;
 	public customer(savingAcc account)
 	  {
 	  	this.account = account;
 	  }
 	public void run()
 	  {	
 	  	for(int i = 0;i<3;i++)
 	  	 {
 	  		account.addfunds(100);
 	  		account.withdrawfunds(200);
 	  	 }
 	  }
 }
class bank 
 {
   public static void main(String args[])
   	{
   		savingAcc sharedAcc = new savingAcc();
   		customer customer1 = new customer(sharedAcc);
   		customer customer2 = new customer(sharedAcc);
   		customer1.setName("Customer 1");
   		customer2.setName("Customer 2");
   		customer1.start();
   		customer2.start();
   	}
  }

student@ml-23:~/sahil$ javac synch.java
student@ml-23:~/sahil$ java bank
Customer 1Deposite amount:100NewBalance:1100
Customer 1Withdraw200NewBalance900
Customer 1Deposite amount:100NewBalance:1000
Customer 1Withdraw200NewBalance800
Customer 1Deposite amount:100NewBalance:900
Customer 1Withdraw200NewBalance700
Customer 2Deposite amount:100NewBalance:800
Customer 2Withdraw200NewBalance600
Customer 2Deposite amount:100NewBalance:700
Customer 2Withdraw200NewBalance500
Customer 2Deposite amount:100NewBalance:600
Customer 2Withdraw200NewBalance400
student@ml-23:~/sahil$ 



