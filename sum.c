#include <stdio.h>

int main()
{
    int a;
    int b;
    int sum;
    
    printf("Enter value\n");
    scanf("%d %d", &a,&b);

    sum = a + b;
   printf("sum %d + %d = %d\n",a,b,sum);
    
    return 0;
}
