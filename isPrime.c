#include <stdio.h>
#include <stdlib.h>
void isPrime(int start, int end);
int main()
{
    int num1, num2;
    printf("Enter lower Limit :  ");
    scanf("%d", &num1);
    printf("Enter upper limit:  ");
    scanf("%d", &num2);
    isPrime(num1, num2);
    return 0;
}
void isPrime(int start, int end)
{
    int i, j, flag = 0;
    i = j = 0;
    for (i = start; i <= end; i++)
    {
        flag = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d, ", i);
    }
}
