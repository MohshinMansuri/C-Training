#include <stdio.h>

struct Employee {
    int id;
    char name[100];
    float salary;
};

int main() {
    struct Employee employees[3];
    int i, highest_salary_index = 0;

    // Input details of three employees
    for(i = 0; i < 3; i++) {
        printf("Enter details for employee %d:\n", i+1);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Find highest salary employee
    for(i = 1; i < 3; i++) {
        if(employees[i].salary > employees[highest_salary_index].salary) {
            highest_salary_index = i;
        }
    }

    // Output the highest salary employee's details
    printf("\nHighest Salary Employee:\nID: %d\nName: %s\nSalary: %.2f\n", 
    employees[highest_salary_index].id, employees[highest_salary_index].name, employees[highest_salary_index].salary);

    return 0;
}


