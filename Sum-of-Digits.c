#include<stdio.h>
int main()
{
    int n,sum=0,a;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    printf("Sum is: %d",sum);
    return 0;
}
