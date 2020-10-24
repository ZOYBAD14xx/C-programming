#include <stdio.h>
#define myMoney 100000
void Welcome()
{
    printf("Welcome to ThanBoiCafe");
    printf("\n");
}
int showMoney()
{
    printf("Your money is : %d\n", myMoney);
}
int item()
{
    char menu, item, loop, answer;
    int totalMoney1 = 0, totalMoney2 = 0, totalMoney3 = 0,clear;
    int matcha = 18000, matchaPrice = 0, countMat = 0,
        hochicha = 16000, hochichaPrice = 0, countHochi = 0,
        thai_Tea = 12000, thai_TeaPrice = 0, countThai = 0,
        milk = 12000, milk_TeaPrice = 0, countMilk = 0;
    int CM = 15000, CMPrice = 0, countCM = 0,
        DM = 15000, DMPrice = 0, countDM = 0,
        DLPrice = 0, countDL = 0;
    do
    {
        printf("Menu");
        printf("\n");
        printf("1.Milk Tea");
        printf("\n2.Coffee");
        printf("\nPlease enter number : ");

        scanf("%s", &menu);
        switch (menu)
        {
        case ('1'):
            do
            {
                printf("1.Matcha  :  18.000kip");
                printf("\n2.Hochicha  :  16.000kip");
                printf("\n3.Thai Tea  :  12.000kip");
                printf("\n4.Milk Tea  :  12.000kip");
                printf("\n5.Exit");
                printf("\nWhat would you like?  :  ");
                scanf("%s", &item);
                switch (item)
                {
                case ('1'):
                    printf("How many cup do you want? : ");
                    scanf("%d", &countMat);
                    matchaPrice = countMat * matcha;
                    break;
                case ('2'):
                    printf("How many cup do you want? : ");
                    scanf("%d", &countHochi);
                    hochichaPrice = countHochi * hochicha;
                    break;
                case ('3'):
                    printf("How many cup do you want? : ");
                    scanf("%d", &countThai);
                    thai_TeaPrice = countThai * thai_Tea;
                    break;
                case ('4'):
                    printf("How many cup do you want? : ");
                    scanf("%d", &countMilk);
                    milk_TeaPrice = countMilk * 12000;
                    break;
                case ('5'):
                    return 0;
                    break;
                default:
                    printf("\nError!! Please enter only 1-4");
                    break;
                }
                printf("\nDo you want to choose more? (y/n) : ");
                scanf("%s", &item);
            } while (item == 'y');

            // printf("\nMatcha  :  18.000kip * %d : %d ", countMat, matchaPrice);
            // printf("\nHochicha  :  16.000lip * %d : %d ", countHochi, hochichaPrice);
            // printf("\nThai Tea  :  12.000kip * %d : %d ", countThai, thai_TeaPrice);
            // printf("\nMilk Tea  :  12.000kip * %d : %d ", countMilk, milk_TeaPrice);
            // totalMoney1 = ((matchaPrice) + (hochichaPrice) + (thai_TeaPrice) + (milk_TeaPrice));
            // printf("\nTotal is : %d ", totalMoney1);
            // printf("\n%d kip - %d kip", myMoney, totalMoney1);
            // printf("\n%d kip", (myMoney - totalMoney1));
            break;
        case ('2'):
            do
            {
                printf("1.Charamel Macchiato  :  15.000kip");
                printf("\n2.Dark Mocha  :  15.000kip");
                printf("\n3.Dark Latte  :  15.000kip");
                printf("\n4.Exit");
                printf("\nWhat would you like?  :  ");
                scanf("%s", &item);
                switch (item)
                {
                case ('1'):
                    printf("How many cup do you want? : ");
                    scanf("%d", &countCM);
                    CMPrice = countCM * CM;
                    break;
                case ('2'):
                    printf("How many cup do you want? : ");
                    scanf("%d", &countDM);
                    DMPrice = countDM * DM;
                    break;
                case ('3'):
                    printf("How many cup do you want? : ");
                    scanf("%d", &countDL);
                    DLPrice = countDL * 15000;
                    break;
                case ('4'):
                    return 0;
                    break;
                default:
                    printf("\nError!! Please enter only 1-4");
                    break;
                }
                printf("\nDo you want to choose more? (y/n) : ");
                scanf("%s", &item);
            } while (item == 'y');
            // printf("\nCharamel Macchiato  :  15.000kip * %d : %d ", countMat, matchaPrice);
            // printf("\nDark Mocha  :  15.000lip * %d : %d ", countHochi, hochichaPrice);
            // printf("\nDark Latte  :  15.000kip : %d ", countThai, thai_TeaPrice);
            // totalMoney2 = ((CMPrice) + (DMPrice) + (DLPrice));
            // printf("\nTotal is : %d ", totalMoney2);
            // printf("\n%d kip - %d kip", myMoney, totalMoney2);
            // printf("\n%d kip", (myMoney - totalMoney2));
            break;

        default:
            printf("\nPlease enter only 1-2 ");
            break;
        }
        printf("\nDo you want any? (y/n) : ");
        scanf("%s", &loop);
    } while (loop == 'y');

    printf("Do you want to cancel some menu? (y/n) : ");
    scanf("%s", &answer);
    do
    {
    printf("1.Matcha : %d",countMat);
    printf("\n2.Hochicha : %d",countHochi);
    printf("\n3.Thai Tea : %d",countThai);
    printf("\n4.Milk Tea : %d",countMilk);
    printf("\n5.Charamel Macchiato : %d",countCM);
    printf("\n6.Dark Mocha : %d",countDM);
    printf("\n7.Dark Latte : %d",countDL);
    printf("which menu do you want to cancel? : ");
    scanf("%d", &clear);
    if (clear == 1){
        countMat = 0;
    }else if(clear == 2){
        countHochi = 0;
    }else if(clear == 3){
        countThai = 0;
    }else if(clear == 4){
        countMilk = 0;
    }else if(clear == 5){
        countCM = 0;
    }else if(clear == 6){
        countDM = 0;
    }else if (clear == 7){
        countDL = 0;
    }else
    {
        printf("");
    }
    printf("Do you want to choose more? (y/n) : ");
    scanf("%s",&loop);
    } while (loop == 'y');

    printf("\nMatcha  :  18.000kip * %d : %d ", countMat, matchaPrice);
    printf("\nHochicha  :  16.000kip * %d : %d ", countHochi, hochichaPrice);
    printf("\nThai Tea  :  12.000kip * %d : %d ", countThai, thai_TeaPrice);
    printf("\nMilk Tea  :  12.000kip * %d : %d ", countMilk, milk_TeaPrice);
    totalMoney1 = ((matchaPrice) + (hochichaPrice) + (thai_TeaPrice) + (milk_TeaPrice));
    printf("\nCharamel Macchiato  :  15.000kip * %d : %d ", countCM, CMPrice);
    printf("\nDark Mocha  :  15.000kip * %d : %d ", countDM, DMPrice);
    printf("\nDark Latte  :  15.000kip * %d : %d ", countDL, DLPrice);
    totalMoney2 = ((CMPrice) + (DMPrice) + (DLPrice));
    printf("\nTotal is  : %d ", (totalMoney1 + totalMoney2));
    totalMoney3 = myMoney - (totalMoney1 + totalMoney2);
    printf("\n%d - %d", myMoney, (totalMoney1 + totalMoney2));
    printf("\nYour money remaining : %d kip ", myMoney - (totalMoney1 + totalMoney2));
}
int main()
{
    Welcome();
    showMoney();
    item();
}