import  java.util.*;
class matrix
{			public static void main (String args[])
		{
	int a[][]=new int[50][50];
	int b[][]=new int[50][50];
	Scanner s = new Scanner(System.in);
	System.out.println("Enter The NO of Rows and colums") ;
	int x,y;
	x = s.nextInt();
	y = s.nextInt();
	System.out.println("Enter the array emements of first array ");
	for(int i=0;i<x;i++)
		{  for(int j=0;j<y;j++)
			{
			a[i][j] = s.nextInt();
			}
		}
			System.out.println("Enter The Array elements of second array :");
			for(int i=0;i<x;i++)
				{  for(int j=0;j<y;j++)
					{
							b[i][j] = s.nextInt();
					}
				}
	
	int c[][] = new int[50][50];
	for(int i=0;i<x;i++)
			{  for(int j=0;j<y;j++)
				{
						c[i][j] = a[i][j]+b[i][j];
				}
			}
			System.out.println("The sum of matrix is : ");
			for(int i=0;i<x;i++)
				{  for(int j=0;j<y;j++)
						{
							System.out.print(c[i][j]+"\t");
	
						}
						System.out.println();
				}

			}
			
}

				
				
				
			
	
	
