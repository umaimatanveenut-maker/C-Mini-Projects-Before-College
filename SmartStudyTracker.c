#include <stdio.h>
//Allows us to use printf() and scanf()
int main()
{ 
    // Variable to store the time entered by the user
    int studytime;

    // Variablle to store breaktime
    int breaktime;

    // Print title 
    printf("===== SMART STUDY TRACKER =====\n");

    // Ask the user how many minutes they want to study
    printf("Enter study time in minutes: ");
    scanf("%d",  &studytime);
    // Ask the user how many minutes they want to take a break
    printf("Enter break time in minutes: ");
    scanf("%d",  &breaktime);

    // Display study sesion 
    printf("\n----------------\n");
    printf("Study for %d minutes.\n", studytime);

    // Display break session
printf("Take a %d minute break.\n", breaktime);


// Motivation message
printf("\nGreat job!\n");
printf("One study session completed successfully.\n");

printf("---------------\n");

    return 0;
}
