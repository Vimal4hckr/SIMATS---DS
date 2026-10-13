#include <stdio.h>
int main(){
    int arr[100], n, i;
    int *ptr;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    ptr = arr;
    printf("\nUsing Array Indexing:\n");
    for (i = 0; i < n; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    printf("\nUsing Pointer Notation:\n");
    for (i = 0; i < n; i++){
        printf("*(ptr+%d) = %d\n", i, *(ptr + i));
    }
    printf("\nAddress Difference:\n");
    for (i = 0; i < n - 1; i++){
        printf("Address difference between arr[%d] and arr[%d] = %td bytes\n",
               i, i + 1,
               (char *)&arr[i + 1] - (char *)&arr[i]);
    }
    return 0;
}