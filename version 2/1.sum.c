#include <stdio.h>
int number()
{
    int N[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum;
    for (int i = 0; i <= 10; i++)
    {
        sum = sum + N[i];
        printf("\nCurrent number:%d Current sum:%d", N[i], sum);
    }
}
int main()
{
    number();
}