#include <stdio.h>

int main()
{
    float a;
    float b;
    float sum;

    printf("Enter value\n");
    scanf("%f %f", &a,&b);
    
    sum = a+b;

    printf("sum %.2f + %.2f = %.2f\n",a,b, sum);
    return 0;
}
