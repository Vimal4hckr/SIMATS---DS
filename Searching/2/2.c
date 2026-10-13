#include <stdio.h>
#define N 15
int main()
{
    int arr[N],i,j,temp,target;
    int low,high,mid,comparisons=0,found=-1,sorted=1;
    printf("Enter 15 numbers: ");
    for(i=0;i<N;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N-i-1;j++)
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
    for(i=0;i<N;i++)
        printf("%d ",arr[i]);
    printf("\nEnter target: ");
    scanf("%d",&target);
    low=0;
    high=N-1;
    printf("Binary Search Iterations:\n");
    while(low<=high)
    {
        mid=low+(high-low)/2;
        comparisons++;
        printf("low=%d, high=%d, mid=%d, arr[%d]=%d\n",low,high,mid,mid,arr[mid]);
        if(arr[mid]==target)
        {
            found=mid;
            break;
        }
        else if(arr[mid]<target)
            low=mid+1;
        else
            high=mid-1;
    }
    if(found!=-1)
        printf("Found at index %d (1-based: %d)\n",found,found+1);
    else
        printf("Target not found\n");
    printf("Comparisons: %d\n",comparisons);
    for(i=0;i<N-1;i++)
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