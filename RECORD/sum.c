#include<stdio.h>

int main()
{
    int n, c, sum = 0, array[100];
    printf("Enter the limit: ");
    scanf("%d", &n);
    printf("Enter %d integers \n", n);
    for(c = 0; c < n; c++)
    {
        scanf("%d", &array[c]);
        sum += array[c];    
    }
    printf("Sum = %d\n", sum);
    return 0;
}
