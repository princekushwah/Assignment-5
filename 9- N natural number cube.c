#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter a number for cube n numbers : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        j=i*i*i;
        printf("%d cube is %d\n",i,j);
    }
    return 0;

}
