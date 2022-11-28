#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter a number to print a table :");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        j=i*n;
        printf("%d X %d = %d \n",n,i,j);
    }
    return 0;
}
