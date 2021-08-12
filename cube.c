#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
int cube(int num);
int main()
{
    int num = 0;
    printf("Enter number : ");
    scanf("%d", &num);
    printf("\ncube is %d", cube(num));
    return 0;
}
int cube(int num)
{
    int result = 0;
    result = num * num * num;
    return result;
}