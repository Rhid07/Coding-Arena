#include <stdio.h>
#include <conio.h>

int main()
{
    float a;
    float b;
    float sum;

    printf("Enter value\n");
    scanf("%2f %2f", &a,&b);
    
    sum = a+b;

    printf("sum a+b = %2f\n", sum);
    return 0;
}