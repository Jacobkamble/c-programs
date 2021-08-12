#include <stdio.h>
#include <stdlib.h>
void prime(int num);
void armstrong(int num);
void perfect(int num);
int main()
{
    int num = 0;
    printf("Enter number :  ");

    scanf("%d", &num);
    prime(num);
    armstrong(num);
    perfect(num);
    return 0;
}
void prime(int num)
{
    int i = 0;
    int flag = 0;
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {

            flag = 1;
            break;
        }
    }
    if (num == 1)
        printf("%d is neither nor composite.\n", num);

    else if (flag == 0)
    {
        printf("%d is prime number.\n", num);
    }
    else
        printf("%d is not prime number.\n", num);
}
void armstrong(int num)
{
    int lastDigit, sum = 0;
    int temp = num;
    while (num > 0)
    {
        lastDigit = num % 10;
        sum = sum + (lastDigit * lastDigit * lastDigit);
        num = num / 10;
    }
    if (temp == sum)
        printf("%d is Armstrong number.\n", temp);
    else
        printf("%d is not armstrong number.\n", temp);
}
void perfect(int num)
{
    int i = 0;
    int sum = 0;
    int temp = num;
    for (i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }
    if (temp == sum)
    {
        printf("%d is perfect number.\n", temp);
    }
    else
        printf("%d is not perfect number.\n", temp);
}