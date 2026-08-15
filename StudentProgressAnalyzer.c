#include <stdio.h>      // Used for printf() and scanf()

int main()
{
    // Variables to store marks
    int maths;
    int physics;
    int chemistry;

    // Variables for calculations
    int total;
    float percentage;

    printf("**** STUDENT PROGRESS ANALYZER *****\n\n");

    // Taking marks as input
    printf("Enter Maths Marks (out of 100): ");
    scanf("%d", &maths);

    printf("Enter Physics Marks (out of 100): ");
    scanf("%d", &physics);

    printf("Enter Chemistry Marks (out of 100): ");
    scanf("%d", &chemistry);

    // Calculating total marks
    total = maths + physics + chemistry;

    // Calculating percentage
    percentage = total / 3.0;

    // Displaying results
    printf("\n========== RESULT ==========\n");

    printf("Total Marks : %d/300\n", total);

    printf("Percentage : %.2f%%\n", percentage);

    // Checking performance
    if (percentage >= 90)
    {
        printf("Performance : Kitne excellent ho yaar tum!\n");
    }
    else if (percentage >= 75)
    {
        printf("Performance : Wah kya baat hai!\n");
    }
    else if (percentage >= 60)
    {
        printf("Performance : Badhiya hai!\n");
    }
    else if (percentage >= 35)
    {
        printf("Performance : Akhir paas hogaye tum\n");
    }
    else
    {
        printf("Performance : Aur padho thoda kya hojaayega\n");
    }

    printf("\nPadhte raho!! Aage badhoo!!\n");

    return 0;
}