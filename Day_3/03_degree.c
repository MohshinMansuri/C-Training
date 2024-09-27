#include <stdio.h>

void main()
{
    int x, y;
    char ans;
    do
    {
        printf("<----------- Degree --------->\n");
        printf("1. Bachelor Degree\n");
        printf("2. Master Degree\n");
        printf("3. Exit\n");
        printf("Select Choice 1 to 3 : ");
        scanf("%d", &x);
        if (x == 1)
        {
            printf("Welcome To The Bachelor Degree Department\n");
            printf("1. B. Tech\n");
            printf("2. BCA\n");
            printf("3. Exit\n");
            printf("Select Choice 1 to 3 : ");
            scanf("%d", &y);
            if (y == 1)
            {
                printf("Welcome to the B. Tech Department");
            }
            else if (y == 2)
            {
                printf("Welcome to the BCA Department");
            }
            else
            {
                printf("Exit");
            }
        }
        else if (x == 2)
        {
            printf("Welcome To The Master Degree Department\n");
            printf("1. M. Tech\n");
            printf("2. MCA\n");
            printf("3. Exit\n");
            printf("Select Choice 1 to 3 : ");
            scanf("%d", &y);
            if (y == 1)
            {
                printf("Welcome to the M. Tech Department");
            }
            else if (y == 2)
            {
                printf("Welcome to the MCA Department");
            }
            else
            {
                printf("Exit");
            }
        }
        else if (x == 3)
        {
            printf("Program Exited");
        }
        else
        {
            printf("Please Enter the Correct Choice");
        }
        printf("\nPress Y to continue : ");
        scanf("%s", &ans);
    } while (ans == 'y');

    printf("Program Exited");
}