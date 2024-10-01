#include <stdio.h>

struct Car {
    int id;
    char model[100];
    float rental_rate_per_day;
};

int main() {
    struct Car cars[3];
    int days, i, car_choice;
    float total_cost;

    for(i = 0; i < 3; i++) {
        printf("Enter details for car %d:\n", i+1);
        printf("Car ID: ");
        scanf("%d", &cars[i].id);
        printf("Model: ");
        scanf("%s", cars[i].model);
        printf("Rental rate per day: ");
        scanf("%f", &cars[i].rental_rate_per_day);
    }

    printf("\nEnter the car number (1-3) you want to rent: ");
    scanf("%d", &car_choice);
    printf("Enter number of days for renting: ");
    scanf("%d", &days);

    total_cost = cars[car_choice - 1].rental_rate_per_day * days;
    printf("\nTotal rental cost for car %d (%s): %.2f\n", cars[car_choice - 1].id, cars[car_choice - 1].model, total_cost);

    return 0;
}







