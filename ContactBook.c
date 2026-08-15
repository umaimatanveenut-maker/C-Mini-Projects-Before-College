#include <stdio.h>
#include <string.h>

int main()
{
    // Variables
    char name[50];
    char phone[15];
    int choice;

    printf("=================================\n");
    printf("      CONTACT BOOK\n");
    printf("=================================\n");

    do
    {
        printf("\n1. Save Contact\n");
        printf("2. View Contact\n");
        printf("3. Delete Contact\n");
        printf("4. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:

                printf("\nEnter Name: ");
                scanf("%s", name);
                printf("Enter Phone Number: ");
                scanf("%s", phone);

                printf("\nContact Saved Successfully!\n");

                break;

            case 2:

                printf("\n----- Saved Contact -----\n");
                printf("Name : %s\n", name);
                printf("Phone: %s\n", phone);

                break;

            case 3:

                strcpy(name, "");
                strcpy(phone, "");

                printf("\nContact Deleted Successfully!\n");

                break;

            case 4:

                printf("\nClosing Contact Book...\n");

                break;

            default:

                printf("\nInvalid Choice!\n");

        }

    } while(choice != 4);

    return 0;
}
