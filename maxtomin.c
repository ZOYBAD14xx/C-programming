#include<stdio.h>
int main()
{
    int i = 1;
    int value = 3;
    int x, number[value];
    printf("Please enter 3 numbers: ");
    for(i=0; i<value; i++)
    {
        scanf("%d", &number[i]);
    }
    i = 0;
    do
    {
        if(number[i] < number[i+1]){
            x = number[i+1];
            number[i+1] = number[i];
            number[i] = x;
            i = 0; 
        }else{
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