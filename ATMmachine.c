#include <stdio.h>

int main()
{
    FILE *file;

    int choice;
    int pin;
    int amount;
    int balance = 5000;

    // Load previous balance if available
    file = fopen("balance.txt", "r");

    if(file != NULL)
    {
        fscanf(file,"%d",&balance);
        fclose(file);
    }

    printf("====================================");
    printf("\n        UMAIMA's  ATM");
    printf("\n====================================");

    printf("\nEnter 4 Digit PIN : ");
    scanf("%d",&pin);

    if(pin != 5791)
    {
        printf("\nWrong PIN!");
        return 0;
    }

    do
    {
        printf("\n\n====== ATM MENU ======");

        printf("\n1. Check Balance");
        printf("\n2. Deposit Money");
        printf("\n3. Withdraw Money");
        printf("\n4. Exit");

        printf("\n\nEnter Choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:

                printf("\nCurrent Balance : ₹%d\n",balance);
                break;

            case 2:

                printf("\nEnter Amount : ");
                scanf("%d",&amount);

                balance += amount;

                file = fopen("balance.txt","w");
                fprintf(file,"%d",balance);
                fclose(file);

                printf("\nMoney Deposited Successfully!\n");

                break;

            case 3:

                printf("\nEnter Amount : ");
                scanf("%d",&amount);

                if(amount <= balance)
                {
                    balance -= amount;

                    file = fopen("balance.txt","w");
                    fprintf(file,"%d",balance);
                    fclose(file);

                    printf("\nPlease Collect Your Cash.\n");
                }
                else
                {
                    printf("\nInsufficient Balance!\n");
                }

                break;

            case 4:

                printf("\nThank You For Using Umaima's ATM \n");
                break;

            default:

                printf("\nInvalid Choice!\n");
        }

    }
    while(choice != 4);

    return 0;
}