#include <stdio.h>
#define N 10
void display(int arr[])
{
    int i;
    printf("[");
    for (i = 0; i < N; i++)
    {
        printf("%d", arr[i]);
        if (i < N - 1)
            printf(" ");
    }
    printf("]\n");
}
void reverse(int arr[], int start, int end)
{
    int temp;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int sumArray(int arr[])
{
    int i, sum = 0;
    for (i = 0; i < N; i++)
        sum += arr[i];
    return sum;
}
int main()
{
    int arr[N], originalSum, rotatedSum;
    int k, i, choice;
    char direction;
    printf("Enter 10 numbers: ");
    for (i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    originalSum = sumArray(arr);
    do
    {
        printf("\nRotate Left (L)/Right (R): ");
        scanf(" %c", &direction);
        if (direction != 'L' && direction != 'l' &&
            direction != 'R' && direction != 'r')
        {
            printf("Invalid direction! Enter L or R.\n");
            continue;
        }
        printf("By positions (0 to 9): ");
        scanf("%d", &k);
        if (k < 0 || k >= N){
            printf("Invalid K! K must satisfy 0 <= K < %d.\n", N);
            continue;
        }
        printf("\nOriginal: ");
        display(arr);
        if (direction == 'L' || direction == 'l'){
            reverse(arr, 0, k - 1);
            printf("Step1: Reverse 0-%d -> ", k - 1);
            display(arr);
            reverse(arr, k, N - 1);
            printf("Step2: Reverse %d-%d -> ", k, N - 1);
            display(arr);
            reverse(arr, 0, N - 1);
            printf("Step3: Reverse all -> ");
            display(arr);
        }
        else
        {
            reverse(arr, 0, N - k - 1);
            printf("Step1: Reverse 0-%d -> ", N - k - 1);
            display(arr);
            reverse(arr, N - k, N - 1);
            printf("Step2: Reverse %d-%d -> ",
                   N - k, N - 1);
            display(arr);
            reverse(arr, 0, N - 1);
            printf("Step3: Reverse all -> ");
            display(arr);
        }
        rotatedSum = sumArray(arr);
        printf("Sum difference: %d\n",
               rotatedSum - originalSum);
        printf("\nDo another rotation? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);
    } while (choice == 1);
    printf("\nFinal Array: ");
    display(arr);
    return 0;
}