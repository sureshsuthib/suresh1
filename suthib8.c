#include <stdio.h>
int main()
{
    int n, h, sum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d",&n);

    for(h=1; h <= n; ++h)
    {
        sum += h;   // sum = sum+h;
    }

    printf("Sum = %d",sum);

    return 0;
}
