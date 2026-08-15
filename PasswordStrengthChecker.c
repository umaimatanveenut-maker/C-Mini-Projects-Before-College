#include <stdio.h>
#include <string.h>

int main()
{
    // Variable to store password
    char password[50];

    // Variable to store password length
    int length;

    printf("===== PASSWORD STRENGTH CHECKER =====\n\n");

    // Taking password input
    printf("Enter your password: ");
    scanf("%s", password);

    // Finding password length
    length = strlen(password);

    // Checking password strength
    if(length >= 12)
    {
        printf("\nPassword Strength : Bahut badiya ee to humko hi nahi pata tha(strong)💪\n");
    }
    else if(length >= 8)
    {
        printf("\nPassword Strength : ee Hamko pata tha(medium) 🙂\n");
    }
    else
    {
        printf("\nPassword Strength : 1234 kon rakhta hai be(weak)😅\n");
    }

    printf("\nPassword Length : %d characters\n", length);

    return 0;
}