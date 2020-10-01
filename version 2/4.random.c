#include <stdio.h>

int main()
{
    int num, n1, n2, n3;
    srand(time(0));        /* seed random number generator */
    printf("Enter 3 numbes between 1-10 :\n");
    scanf("%d %d %d", &n1,&n2,&n3);
    num = rand() % 10 + 1;
    if (n1 == num || n2 == num || n3 == num)
    {
        printf("Correct! number is %d \n\n", num);
    }
    else
    {
        printf("\nSo noob! number is %d \n", num);
    }

    return 0;
}