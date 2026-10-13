#include <stdio.h>
#define MAX 100
#define SIZE 10
int main()
{
    int a[MAX][3],b[MAX][3],c[MAX][3];
    int r1,c1,r2,c2,n1,n2,n3=0;
    int i,j,k;
    int mat1[SIZE][SIZE]={0},mat2[SIZE][SIZE]={0},sum[SIZE][SIZE]={0};
    printf("Enter rows, columns and non-zero terms of Matrix 1: ");
    scanf("%d%d%d",&r1,&c1,&n1);
    if(r1<1||r1>SIZE||c1<1||c1>SIZE||n1<0||n1>r1*c1)
    {
        printf("Invalid Matrix 1 dimensions or terms\n");
        return 0;
    }
    printf("Enter row, column and value:\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
        if(a[i][0]<0||a[i][0]>=r1||a[i][1]<0||a[i][1]>=c1)
        {
            printf("Invalid position\n");
            return 0;
        }
        mat1[a[i][0]][a[i][1]]=a[i][2];
    }
    printf("Enter rows, columns and non-zero terms of Matrix 2: ");
    scanf("%d%d%d",&r2,&c2,&n2);
    if(r2<1||r2>SIZE||c2<1||c2>SIZE||n2<0||n2>r2*c2)
    {
        printf("Invalid Matrix 2 dimensions or terms\n");
        return 0;
    }
    if(r1!=r2||c1!=c2)
    {
        printf("Matrix dimensions must be equal\n");
        return 0;
    }
    printf("Enter row, column and value:\n");
    for(i=0;i<n2;i++)
    {
        scanf("%d%d%d",&b[i][0],&b[i][1],&b[i][2]);
        if(b[i][0]<0||b[i][0]>=r2||b[i][1]<0||b[i][1]>=c2)
        {
            printf("Invalid position\n");
            return 0;
        }
        mat2[b[i][0]][b[i][1]]=b[i][2];
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            sum[i][j]=mat1[i][j]+mat2[i][j];
            if(sum[i][j]!=0)
            {
                c[n3][0]=i;
                c[n3][1]=j;
                c[n3][2]=sum[i][j];
                n3++;
            }
        }
    }
    printf("\nSparse Matrix (Row Column Value):\n");
    for(i=0;i<n3;i++)
        printf("%d\t%d\t%d\n",c[i][0],c[i][1],c[i][2]);
    printf("\nSum Dense Matrix:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
            printf("%d\t",sum[i][j]);
        printf("\n");
    }
    return 0;
}