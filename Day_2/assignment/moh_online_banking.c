#include <stdio.h>

int main()
{
    int x_choice, ac_choice, l_choice;
    int amt;
    int salary, percentage, loan, req_loan;
    do
    {
        printf("\n--- Welcome to Online Banking ---\n");
        printf("1. Account Department\n");
        printf("2. Loan Department\n");
        printf("3. Exit\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &x_choice);
        switch (x_choice)
        {
        case 1:
        {
            do
            {
                printf("\n--- Account Department ---\n");
                printf("Welcome To Account Department\n");
                printf("1. Savings Account\n");
                printf("2. Current Account\n");
                printf("3. Exit\n");
                printf("Enter your choice (1-3): ");
                scanf("%d", &ac_choice);
                switch (ac_choice)
                {
                case 1:
                    printf("You selected Savings Account.\n");
                    printf("Enter your Amount Here : ");
                    scanf("%d", &amt);
                    if (amt >= 1000)
                    {
                        printf("Saving Account is Open\n");
                    }
                    else
                    {
                        printf("Sorry, Account Closed\n");
                    }
                    break;
                case 2:
                    printf("You selected Current Account.\n");
                    printf("Enter your Amount Here : ");
                    scanf("%d", &amt);
                    if (amt >= 5000)
                    {
                        printf("Current Account is Open\n");
                    }
                    else
                    {
                        printf("Sorry, Account Closed\n");
                    }
                    break;
                case 3:
                    printf("Exiting Account Department.\n");
                    break;
                default:
                    printf("Invalid choice! Please select a valid option.\n");
                }
            } while (ac_choice != 3);
            break;
        }
        case 2:
            // Loan Department Menu
            do
            {
                printf("\n--- Loan Department ---\n");
                printf("1. Personal Loan\n");
                printf("2. Education Loan\n");
                printf("3. Exit\n");
                printf("Enter your choice (1-3): ");
                scanf("%d", &l_choice);
                switch (l_choice)
                {
                case 1:
                    printf("You selected Personal Loan.\n");
                    printf("Enter your Salary Here : ");
                    scanf("%d", &salary);
                    if (salary >= 5000)
                    {
                        loan = salary * 5;
                        printf("You can get the loan of %d\n", loan);
                    }
                    else
                    {
                        printf("Sorry, please try again.\n");
                    }
                    break;
                case 2:
                    printf("You selected Education Loan.\n");
                    printf("Enter your Percentage Here : ");
                    scanf("%d", &percentage);
                    if (percentage >= 60)
                    {
                        printf("You are eligible for the Education Loan\n");
                        printf("Enter the Loan Amount that you want : ");
                        scanf("%d", &req_loan);
                        loan = req_loan * percentage / 100;
                        printf("You can get the loan of %d\n", loan);
                    }
                    else
                    {
                        printf("Sorry, please try again.\n");
                    }
                    break;
                case 3:
                    printf("Exiting Loan Department.\n");
                    break;
                default:
                    printf("Invalid choice! Please select a valid option.\n");
                }
            } while (l_choice != 3);
            break;

        case 3:
            printf("Thank you for using Online Banking. Goodbye!\n");
            break;

        default:
            printf("Invalid choice! Please select a valid option.\n");
        }
    } while (x_choice != 3);

    return 0;
}
