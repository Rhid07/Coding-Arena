#include <stdio.h>
#include <string.h>

int main()
{
char country[20];
int year;

printf("Enter country name: \n");
scanf("%s", country);

printf("Enter year: \n");
scanf("%d", &year);

if (year < 63)

printf("%s is not matured to be independent\n",country);

if (year == 63)

printf("HAPPY INDEPENDENT %s is %d \n",country,year);

else
printf("Error, %s is not %d !!!\n",country,year);

return 0;
}
