#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
int isArm(int num);
void printArm(int start, int end);
int main()
{
    int lower, upper;
    printf("Enter lower limit : ");
    scanf("%d", &lower);
    printf("\nEnter upper limit : ");
    scanf("%d", &upper);
    printArm(lower, upper);
    return 0;
}
int isArm(int num)
{
    int last, sum = 0;
    int temp = num;
    while (temp != 0)
    {
        last = temp % 10;
        sum += (last * last * last);
        temp = temp / 10;
    }
    if (num == sum)
        return 1;
    else
        return 0;
}
void printArm(int start, int end)
{
    while (start <= end)
    {
        if (isArm(start))
        {
            printf("%d,", start);
        }
        start++;
    }
}
