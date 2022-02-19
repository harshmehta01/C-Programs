#include <stdio.h>
int main() 
{
    int n, i;
    float arr[10], sum = 0, avg;
    printf("Enter the numbers of subjects: ");
    scanf("%d", &n);
    for (i = 0; i < n; ++i) 
    {
        printf("Enter the marks of subject %d: ", i+1);
        scanf("%f", &arr[i]);
        sum += arr[i];
    }
    avg = sum / n;
    printf("Average = %.2f", avg);
    return 0;
}

   



