#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number to print even n natural number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d\n",2*i);
    return 0;
}
