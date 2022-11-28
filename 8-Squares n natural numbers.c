#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter a number to sqaure n natural numbner : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        j=i*i;
        printf("%d squar is %d\n",i,j);
    }
    return 0;
}
