#include<stdio.h>
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    if(n>0)
        printf("%d is positive",n);
    if(n<0)
        printf("%d is negative",n);
    if(n==0)
         printf("%d is zero",n);
    return 0;
}