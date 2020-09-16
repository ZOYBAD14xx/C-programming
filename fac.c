#include<stdio.h>
int main()
{
    int a[160],num,i,j,temp=0,m=1,x,remainder,t;
    int sum = 0;
	printf("Enter number : ");
              scanf("%d",&num);
              a[0]=1;
              for(i=1;i<=num;i++)
              {
                for(j=0;j<m;j++)
                {
					x = a[j]*i+temp;
					a[j]=x%10;
					temp = x/10;
				}
				while(temp!=0)
				{ 
					a[m]=temp%10;
					temp = temp/10;
					m++;
				}
            }
        for(i=m-1;i>=0;i--){
        printf("%d",a[i]);
           t = a[i];
   while (t != 0)
   {
      remainder = t % 10;
      sum       = sum + remainder;
      t         = t / 10;
   }
}
   printf("\nSum of digits of %d! = %d\n", a[i], sum); 
        }
