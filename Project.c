#include<stdio.h>
#include<stdlib.h>
int main(){
char choice,again;
int row,colum,line=1,n,s,i;
do
{
	printf("This is choice:\n");
	printf("1. Rectangle\n");
	printf("2. Triangle\n");
	printf("3. Pyramid\n");
	printf("4. Christmas tree\n");
	printf("5. Exit\n");
	printf("Please Select : ");
	scanf("%s",&choice);
	switch (choice)
	{
		case ('1'):
			printf("Please Enter Number : ");
			scanf("%d",&n);
			for (row=1; row<=n; row++) {  /*print * nai tae la theo*/
				for(colum=1; colum<=n; colum++) /*this is colum*/
			{ 
				printf("* ");
			}
			printf("\n"); /*break nai tae la loop*/
			}
			break;
		case ('2'):
			printf("Please Enter Number : ");
			scanf("%d",&n);
			for(row=0;row< n;row++){ /* print * nai tae la theo*/
				for(colum=0;colum<=row;colum++) /*print * nai tae la thun +1*/
				{
					printf("* ");
				}
				printf("\n"); /*break nai tae la theo*/
			}
			break;
		case ('3'):
			printf("Please Enter Number : ");
			scanf("%d",&n);
			for(row=1; row<=n; row++) /* row */
			{
				for(colum=n-1; colum>=row; colum--) /*ya warng tae la theo -1*/
				{
					printf(" ");
				}
				for(s=1; s<=line; s++) /* print * nai tae la theo*/
				{ 
					printf("*");
				}          
				printf("\n"); /* break nai tae la theo*/
				line = line+2;    /*+2 nai tae la theo*/
			}
			break;
		case ('4'):
			printf("Please Enter Number : ");
			scanf("%d",&n);
			for(row=1; row<=n; row++) /* row */
			{
				for(colum=n-1; colum>=row; colum--) /*ya warng tae la theo -1*/
				{
					printf(" ");
				}
				for(s=1; s<=line; s++) /* print * nai tae la theo*/
				{ 
					printf("*");
				}          
				printf("\n"); /* break nai tae la theo*/
				line = line+2;    /*+2 nai tae la theo*/
			}
				for (row = 2; row < n; row++){ /*  ya warng Leg tree tae 2 --> n-1*/
				printf(" ");
				}
				printf("[|]\n");
			break;

		case ('5'):
			return 0;
			break;
		default:
			printf("Please Select Only 1, 2, 3, 4, or 5 ");
			break;
	}
	printf("\nDo you want to try again? [y]es or [n]o : ");
        scanf("%s",&again);
        if (again == 'y' ||again == 'Y'){
            system("cls");  	/*Clear nar jr*/
			s=1;					/*khuen ka hai kup sa pharp derm*/
			line=1;
			row=1;
			colum=n-1;
        }else if (again == 'n' ||again == 'N'){		/*input n stop program*/
            printf("\nThank You.");
            return 0;
        }else{
            i=0;
            while (i==0) /* kr la ny t input not y or n mun la von loop*/
            {
                printf("Please Type Only Y or N : ");
                scanf("%s",&again);
					if (again == 'y' ||again == 'Y'){
						system("cls"); 
						i=1;
						s=1;
						line=1;
						row=1;
						colum=n-1;
					}else if (again == 'n' ||again == 'N')
						{
						printf("\nThank You.");
						return 0;
						} 
            }
        }
}while (again == 'y');
}
