// #include<stdio.h>
// int main(){
//     float x1,x2,x3;
//     printf("Enter number :\n");
//     scanf("%f %f %f",&x1,&x2,&x3);
//     printf("Avg of %.0f %.0f %.0f is %.2f",x1,x2,x3,(x1+x2+x3)/3);
// }

#include <stdio.h>
main()
{
	int i, limit=3;
	int number[limit]; // number[3]
	int sum = 0;
    printf("Input 3 numbers:\n");
	for (i = 0; i < limit; i++)
	{
		scanf("%d", &number[i]);
		sum += number[i];
	}
	printf("\nAvg = %d", sum / limit);
}