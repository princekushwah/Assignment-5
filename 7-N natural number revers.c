#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number to revers n even natural : ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
        printf("%d\n",2*i);
    return 0;
}
