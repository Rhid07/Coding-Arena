#include <stdio.h>
#include <conio.h>

int main()
{
    int a;
    int b;
    int sum;
    
    printf("Enter value\n");
    scanf("%d %d", &a,&b);

    sum = a + b;
    printf("sum a+b = %d\n",sum);
    
    return 0;
}