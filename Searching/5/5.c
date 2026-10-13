#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 50
#define LEN 100
int isAnagram(char s1[], char s2[])
{
    int count[256]={0};
    int i;
    if(strlen(s1)!=strlen(s2))
        return 0;
    for(i=0;s1[i]!='\0';i++)
    {
        count[(unsigned char)tolower((unsigned char)s1[i])]++;
        count[(unsigned char)tolower((unsigned char)s2[i])]--;
    }
    for(i=0;i<256;i++)
    {
        if(count[i]!=0)
            return 0;
    }
    return 1;
}
int main()
{
    char str[MAX][LEN],target[LEN];
    int n,i,found=0;
    printf("Enter number of strings: ");
    scanf("%d",&n);
    if(n<1||n>MAX)
    {
        printf("Invalid number of strings\n");
        return 0;
    }
    printf("Enter %d strings:\n",n);
    for(i=0;i<n;i++)
        scanf("%99s",str[i]);
    printf("Target: ");
    scanf("%99s",target);
    printf("Anagrams found at positions: ");
    for(i=0;i<n;i++)
    {
        if(isAnagram(str[i],target))
        {
            printf("%d ",i+1);
            found++;
        }
    }
    if(found==0)
        printf("Not found");
    printf("\nMatches: ");
    found=0;
    for(i=0;i<n;i++)
    {
        if(isAnagram(str[i],target))
        {
            if(found>0)
                printf(" ");
            printf("%s",str[i]);
            found++;
        }
    }
    if(found==0)
        printf("None");
    printf("\n");
    return 0;
}