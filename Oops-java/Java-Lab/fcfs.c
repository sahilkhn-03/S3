#include<stdio.h>
#include<string.h>
void main()
{  
   float awt =0,att =0;
   int pid[20],bt[20],wt[20],tt[20],n,i;
   printf("Enter The NO of Processors : ");
   scanf("%d",&n);
   printf("Enter The Burst Time Of Processors : ");
   for( i = 0 ; i<n ; i++)
   	{
   	
   	printf("p%d : ",i+1);
   	scanf("%d",&bt[i]);
   	
   	
   	}
   	for(i = 0; i< n;i++)
   	{
   	
   	printf("p%d %d",i+1,bt[i]);
   	
   	
   	}
   	
 wt[0] = 0;
for(i = 0;i<n;i++)
{
 wt[i] = wt[i-1] + bt[i-1];
 awt = awt + wt[i];
}
for(i = 0;i<n;i++)
{
 tt[i] = bt[i] + wt[i];
 att = att+ tt[i];
}
printf("Average tt = %f\n",att/n);
printf("Average wt = %f\n",awt/n);
printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
for(i =0;i<n;i++)
{
printf("|\tp%d\t|",i);
}
printf("\n");
printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
for(i =0;i<n;i++)
{

printf("%d\t\t",wt[i]);
}
}
