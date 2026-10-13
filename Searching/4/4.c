#include <stdio.h>
#define MAX 50
int main()
{
    int arr[MAX],n,i,j,temp;
    int first=-1,last=-1,sorted=1;
    printf("Enter number of books: ");
    scanf("%d",&n);
    if(n<1||n>MAX)
    {
        printf("Invalid number of books\n");
        return 0;
    }
    printf("Enter page counts:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Sorted array: ");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
    for(i=0;i<n;i++)
    {
        if(arr[i]>=300)
        {
            first=i;
            break;
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<=150)
            last=i;
    }
    if(first!=-1)
        printf("First >=300: index %d (%d)\n",first,arr[first]);
    else
        printf("First >=300: Not found\n");
    if(last!=-1)
        printf("Last <=150: index %d (%d)\n",last,arr[last]);
    else
        printf("Last <=150: Not found\n");
    for(i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            sorted=0;
            break;
        }
    }
    printf("Array remains sorted: %s\n",sorted?"Yes":"No");
    return 0;
}