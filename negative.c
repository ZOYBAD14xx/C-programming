#include<stdio.h>
int main(){
    int num;
    printf("User input:");
    scanf("%d",&num);
    if (num<0)
    {
    printf("Output: %d is Negative number",num);
    }else if(num>0)
    {
        printf("Output: %d is Positive number",num);

    }else
    {
            printf("Output: %d is 0",num);

    }
    
    
    
}