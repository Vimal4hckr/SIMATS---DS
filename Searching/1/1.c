#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int arr[10],i,target,choice,position=-1,comparisons=0;
    clock_t start,end;
    double time_taken;
    printf("Enter 1 for manual input, 2 for random: ");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("Enter 10 integers:\n");
        for(i=0;i<10;i++)
            scanf("%d",&arr[i]);
    }
    else if(choice==2)
    {
        srand(time(NULL));
        printf("Random array: ");
        for(i=0;i<10;i++)
        {
            arr[i]=rand()%100+1;
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Invalid choice\n");
        return 0;
    }
    printf("Enter target value: ");
    scanf("%d",&target);
    start=clock();
    for(i=0;i<10;i++)
    {
        comparisons++;
        if(arr[i]==target)
        {
            position=i+1;
            break;
        }
    }
    end=clock();
    time_taken=((double)(end-start)/CLOCKS_PER_SEC)*1000.0;
    if(position!=-1)
        printf("Target %d found at position %d\n",target,position);
    else
        printf("Target %d not found\n",target);
    printf("Comparisons made: %d\n",comparisons);
    printf("Status: %s\n",position!=-1?"Found":"Not Found");
    printf("Time taken: %.3f ms\n",time_taken);
    return 0;
}