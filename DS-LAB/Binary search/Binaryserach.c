#include<stdio.h>
void sort(int arr[], int n) 
{
    int i, j, temp;
    for(i = 0; i < n - 1; i++) 
    {
        int swapped = 0;
        for(j = 0; j < n - i - 1; j++) 
        {
            if(arr[j] > arr[j + 1]) 
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if(swapped == 0)
            break;  
    }
}

void search(int arr[],int n,int s)
{
        int first=0,last=n-1;
        while(first<=last)
        {
                int middle=first+(last-first)/2;
                if(arr[middle]==s)
                {
                        printf("The search element was found at %d",middle);
                        return;
                }
                else if(arr[middle]>s)
                        last=middle-1;
                else 
                        first=middle+1;                
        }
        printf("The search element was not found in the array !");                
}

int main()
{
        int a[100],n,i,s;
        printf("Enter the number of elements in the array: ");
        scanf("%d",&n);
        printf("Enter the array elements: ");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
    sort(a,n);
    printf("Sorted array: ");
    for(i = 0; i < n; i++) 
        printf("%d ", a[i]);
    printf("\n");
        printf("Enter the Search element: ");
        scanf("%d",&s);

        search(a,n,s);
        printf("\n");
        return 0;
}

