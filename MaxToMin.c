#include<stdio.h>
int main()
{
    int value = 3;
    int number[value];
    int i, tmp;
    printf("Please enter 3 numbers: ");
    for(i=0; i<value; i++)
    {
        printf("", i+1);
        scanf("%d", &number[i]);
    }
    i = 0;
    do
    {
        if(i < value-1 && number[i] < number[i+1])
        {
            tmp = number[i+1];
            number[i+1] = number[i];
            number[i] = tmp;
            i = 0;
        }
        else
        {
            i++;
        }
    }while(i < value);
        printf("Output: ");
    for(i=0; i<value; i++)
    {
        printf("%d ", number[i]);   
    }
    return 0;   
}
