#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
void circle(float rad);
int main()
{
    float num = 0.0;
    printf("Enter value radius of Circle : ");
    scanf("%f", &num);
    circle(num);

    return 0;
}
void circle(float rad)
{
    float dia, cir, area;
    dia = 2 * rad;
    cir = 2 * 3.14 * rad;
    area = 3.14 * rad;
    printf("\nDiameter of circle : %.2f", dia);
    printf("\nCircumference of circle : %.2f", cir);
    printf("\nArea of circle : %.2f", area);
}