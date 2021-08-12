#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
int strong(long num);
void print(long start,long end);
int main ()
{
    long lower,upper;
    printf("Enter a lower Limit : ");
    scanf("%ld",&lower);
    printf("Enter a upper limit : ");
    scanf("%ld",&upper);
    print(lower,upper);
    return 0;
}
int strong(long num)
{
    int last;
    long temp;
    long sum=0;
    temp=num;
    long fact=1;
    while(num!=0)
    {
        last=num%10;
        fact=1;
        for(int i=1;i<=last;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        num=num/10;
    }

    if(temp==sum)
        return 1;
    else
        return 0;
}
void print(long start,long end)
{
    while(start<=end)
    {
        if(strong(start))
        {
            printf("%ld, ",start);
        }
        start++;
    }
}
