#include <stdio.h>
#include <string.h>
int main()
{
   char string[1000];
   printf("Input uppercase: ");
   scanf("%s",string);
   printf("Uppercase: %s", strupr(string));
}