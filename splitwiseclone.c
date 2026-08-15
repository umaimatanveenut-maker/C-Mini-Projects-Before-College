#include <stdio.h>
#include <string.h>

int main()
{
    char friend1[30];
    char friend2[30];

    float expense;
    float friend1Paid = 0;
    float friend2Paid = 0;

    int choice;

    printf("*************************************\n");
    printf("     MINI SPLITWISE CLONE\n");
    printf("*************************************\n");

    printf("\nEnter First Friend Name : ");
    scanf("%s", friend1);

    printf("Enter Second Friend Name : ");
    scanf("%s", friend2);

    do
    {
        printf("\n========== MENU ==========\n");

        printf("1. %s Paid\n", friend1);
        printf("2. %s Paid\n", friend2);
        printf("3. Show Expense Summary\n");
        printf("4. Exit\n");

        printf("\nEnter Choice : ");
        scanf("%d",&choice);

        switch(choice)
        {

            case 1:

                printf("\nEnter Amount Paid by %s : ",friend1);
                scanf("%f",&expense);

                friend1Paid += expense;

                printf("\nExpense Added!\n");

                break;

            case 2:

                printf("\nEnter Amount Paid by %s : ",friend2);
                scanf("%f",&expense);

                friend2Paid += expense;

                printf("\nExpense Added!\n");

                break;

            case 3:

                printf("\n=========== SUMMARY ===========\n");

                printf("%s Paid : ₹%.2f\n",friend1,friend1Paid);

                printf("%s Paid : ₹%.2f\n",friend2,friend2Paid);

                float total = friend1Paid + friend2Paid;

                float share = total / 2;

                printf("\nTotal Expense : ₹%.2f\n",total);

                printf("Each Should Pay : ₹%.2f\n",share);

                if(friend1Paid > share)
                {
                    printf("\n%s should receive ₹%.2f from %s\n",
                    friend1,
                    friend1Paid-share,
                    friend2);
                }

                else if(friend2Paid > share)
                {
                    printf("\n%s should receive ₹%.2f from %s\n",
                    friend2,
                    friend2Paid-share,
                    friend1);
                }

                else
                {
                    printf("\nEverything is settled! Ab lado mat\n");
                }

                break;

            case 4:

                printf("\nThank You!sab clear rigghhtt???\n");

                break;

            default:

                printf("\nInvalid Choice!\n");
        }

    }
    while(choice!=4);

    return 0;
}