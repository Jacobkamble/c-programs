#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
void max(int num1, int num2);
void min(int num1, int num2);

int main()
{
    int num1, num2;
    printf("Enter two Numbers : \n");
    scanf("%d %d", &num1, &num2);
    max(num1, num2);
    min(num1, num2);
    return 0;
}
void max(int num1, int num2)
{
    int max = 0;
    int min = 0;
    if (num1 > num2)
    {
        max = num1;
    }
    else if (num1 < num2)
    {
        max = num2;
    }

    printf("\nMax is %d", max);
}
void min(int num1, int num2)
{
    int max = 0;
    int min = 0;
    if (num1 < num2)
    {
        min = num1;
    }
    else if (num1 > num2)
    {
        min = num2;
    }
    printf("\nMin is %d", min);
}