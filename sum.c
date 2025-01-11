#include <stdio.h> 
int main() { 
    int range, sum = 0; 
   printf("enter the range");
    scanf("%d", &range); 
   printf("Enter the elements");
    for(int i = 0, num; i < range; i++) { 
        scanf("%d", &num); 
        sum += num; 
    } 
    printf("sum of numbers is :")
    printf("%d\n", sum); 
    return 0; 
}