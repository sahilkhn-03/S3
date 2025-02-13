#include<stdio.h>
void sort(int arr[],int n)
{
        int i,j,b,temp;
        for(i=0;i<n-1;i++)        
        {
                b=0;
                for(j=0;j<n-i-1;j++)
                {
                        if(arr[j]>arr[j+1])
                        {
                                temp=arr[j];
                                arr[j]=arr[j+1];
                                arr[j+1]=temp;
                                b=1;
                        }
                }

                if(b==0)
                        break;
        }
}
int main()
{
        int a[100],n,i;
        printf("Enter the number of elements in the array: ");
        scanf("%d",&n);
        printf("Enter the array elements: ");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        sort(a,n);
        printf("\tThe sorted array is: \n");
        for(i=0;i<n;i++)
        {
                if(i!=0)
                        printf(",%d",a[i]);
                else
                        printf("%d",a[i]);
        }
        printf("\n");
        return 0;
}

CASE MANIPULATIVE functions (LOWER,UPPER,INITCAP)
select LOWER('ASIET IS FOR TECH GEEKS ONLY') FROM dual;
select UPPER('ASIET IS FOR TECH GEEKS ONLY') FROM dual;

CHARACTER MANIPULATIVE FUNCTIONS
(concat,length,substr,instr,lpad,rpad,trim,replace).
select CONCAT ('CSE','-AI') from dual;
select CONCAT (NULL,'-AI') from dual;
SELECT LENGTH ('Learning is always fun') from dual;
SELECT LENGTH ('    DATABASE') from dual;
SELECT LENGTH ('Learning is always fun') from dual;
SELECt SUBSTR ('Database Management System', 9) from dual;
SELECT SUBSTR ('Database Management System',9,7) from dual;
SELECT INSTR ('Google apps are the great applications','app') from dual;
SELECT INSTR ('Google apps are the great applications','app',1,2) from dual;
SELECT LPAD('100',5,'*') from dual;
SELECT RPAD('100',5,'*') from dual;
SELECT LPAD('hello',21,'asiet') from dual;
SELECT RPAD('earn',19,'respect') from dual;
SELECT TRIM('A' from 'Android') from dual;
SELECT TRIM ('      android') from dual;
SELECT REPLACE ('Data management ','Data ','Database') from dual;

