#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
void even(int num);
int main()
{
    int num = 0;
    printf("\nEnter number to check wheather it's even or odd : ");
    scanf("%d", &num);
    even(num);
    return 0;
}
void even(int num)
{
    if (num % 2 == 0)
    {
        printf("%d is even number.\n", num);
    }
    else
        printf("%d is odd number.\n", num);
}