
//insertion sort
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    int k=0;
    for(int i=1;i<n;i++)
    {
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current&&j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
        
    }
    printf("Elements after insertion sort are: ");
    for(int i=0;i<n;i++)
    {
      printf("%d ",arr[i]);
    }
    printf("\n");
}