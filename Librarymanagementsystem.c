#include <stdio.h>
#include <string.h>

int main()
{
    // Library Data
    char books[5][50] = {
        "Atomic Habits",
        "C Programming",
        "Rich Dad Poor Dad",
        "Computer Networks",
        "The Psychology of Money"
    };

    int available[5] = {1, 1, 1, 1, 1};

    int choice;
    int i;
    int bookNumber;

    do
    {
        printf("\n******************************");
        printf("\n   MINI LIBRARY MANAGEMENT");
        printf("\n******************************");

        printf("\n1. View Books");
        printf("\n2. Borrow Book");
        printf("\n3. Return Book");
        printf("\n4. Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:

                printf("\n------ BOOK LIST ------\n");

                for(i = 0; i < 5; i++)
                {
                    printf("%d. %s", i + 1, books[i]);

                    if(available[i] == 1)
                        printf("  [Available]\n");
                    else
                        printf("  [Borrowed]\n");
                }

                break;

            case 2:

                printf("\nEnter Book Number to Borrow: ");
                scanf("%d", &bookNumber);

                if(bookNumber >= 1 && bookNumber <= 5)
                {
                    if(available[bookNumber - 1] == 1)
                    {
                        available[bookNumber - 1] = 0;
                        printf("\nBook Borrowed Successfully!\n");
                    }
                    else
                    {
                        printf("\nSorry! Book is already borrowed.\n");
                    }
                }
                else
                {
                    printf("\nInvalid Book Number!\n");
                }

                break;

            case 3:

                printf("\nEnter Book Number to Return: ");
                scanf("%d", &bookNumber);

                if(bookNumber >= 1 && bookNumber <= 5)
                {
                    if(available[bookNumber - 1] == 0)
                    {
                        available[bookNumber - 1] = 1;
                        printf("\nBook Returned Successfully!\n");
                    }
                    else
                    {
                        printf("\nThis book is already in the library.\n");
                    }
                }
                else
                {
                    printf("\nInvalid Book Number!\n");
                }

                break;

            case 4:

                printf("\nThank you for using the Library System!\n");
                break;

            default:

                printf("\nInvalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}