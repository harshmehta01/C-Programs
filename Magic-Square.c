#include<stdio.h>
#define SIZE 20
int main()
{
    int n,i,j,k,r,c,mid,a[SIZE][SIZE];
    printf("Enter the number for magic square: ");
    scanf("%d", &n);
    mid=n/2;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=0;
        }
    }
    k=mid;
    j=0;
    for(i=1;i<=n*n; i++)
    {
        a[j][k]=i;
        r=j--;
        c=k++;
        if(j<0)
        {
            j=n-1;
        }
        if(k>n-1)
        {
            k=0;
        }
        if(a[j][k]!=0)
        {
            k=c;
            j=r+1;
        }
    }
    for(j=0;j<n;j++)
    {
        for(k=0;k<n;k++)
        {
            printf("%d  ",a[j][k]);
        }
        printf("\n");
    }
    printf("\n");
}
