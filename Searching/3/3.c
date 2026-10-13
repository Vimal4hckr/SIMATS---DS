#include <stdio.h>
#define MAX 50
int main()
{
    int arr[MAX],n,i,j,temp;
    int low,high,mid,first=-1,last=-1;
    printf("Enter number of days: ");
    scanf("%d",&n);
    if(n<1||n>MAX)
    {
        printf("Invalid number of days\n");
        return 0;
    }
    printf("Enter daily temperatures:\n");
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
    printf("Temperatures after sort:\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(arr[mid]>=30)
        {
            first=mid;
            high=mid-1;
        }
        else
            low=mid+1;
    }
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(arr[mid]<=25)
        {
            last=mid;
            low=mid+1;
        }
        else
            high=mid-1;
    }
    if(first!=-1)
        printf("First >=30: index %d (%d)\n",first,arr[first]);
    else
        printf("First >=30: Not found\n");
    if(last!=-1)
        printf("Last <=25: index %d (%d)\n",last,arr[last]);
    else
        printf("Last <=25: Not found\n");
    return 0;
}