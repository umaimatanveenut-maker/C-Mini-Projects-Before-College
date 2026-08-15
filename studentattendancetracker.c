#include <stdio.h>

int main()
{
    FILE *file;

    char name[30];
    char status;
    int choice;

    do
    {
        printf("\n*******************************");
        printf("\n STUDENT ATTENDANCE TRACKER");
        printf("\n*******************************");

        printf("\n1. Mark Attendance");
        printf("\n2. View Attendance");
        printf("\n3. Exit");

        printf("\n\nEnter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:

                file = fopen("attendance.txt","a");

                printf("\nEnter Student Name: ");
                scanf("%s",name);

                printf("Present or Absent (P/A): ");
                scanf(" %c",&status);

                fprintf(file,"%s %c\n",name,status);

                fclose(file);

                printf("\nAttendance Saved Successfully!\n");

                break;

            case 2:

                file = fopen("attendance.txt","r");

                if(file==NULL)
                {
                    printf("\nNo Attendance Found.\n");
                    break;
                }

                printf("\n------ Attendance Record ------\n\n");

                while(fscanf(file,"%s %c",name,&status)!=EOF)
                {
                    printf("Student : %-15s Status : %c\n",name,status);
                }

                fclose(file);

                break;

            case 3:

                printf("\nGood Bye!\n");
                break;

            default:

                printf("\nInvalid Choice!\n");
        }

    }while(choice!=3);

    return 0;
}