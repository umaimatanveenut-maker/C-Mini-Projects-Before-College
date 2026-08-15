#include <stdio.h>
int main()
{
    // Variables to store menu choice
    int choice;

    // Variables to store expense amount
    float expense = 0;
    // Variables to store total expense
    float totalExpense = 0;
    printf("===== DAILY EXPENSE TRACKER =====\n");

    do
    {
        printf("\n");
        printf("1. Add Expense\n");
        printf("2. View Total Expense\n");
        printf("3. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Expense Amount: ₹");
                scanf("%f", &expense);
                totalExpense = totalExpense + expense;
                printf("Expense Added Successfully!\n");
                break;

            case 2:
                printf("\nToday's Total Expense = ₹%.2f\n", totalExpense);
                break;

            case 3:
                printf("\nThank you for using Expense Tracker!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }
    }
    while(choice != 3);

    return 0;
}
