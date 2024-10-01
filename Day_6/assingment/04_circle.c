#include <stdio.h>

struct Circle{
    float radius;
};

float calculate_area(struct Circle c){
    return 3.14 * c.radius * c.radius;
}

float calculate_perimeter(struct Circle c){
    return 2 * 3.14 * c.radius;
}

int main(){
    struct Circle circle1, circle2;

    // Input radius for two circles
    printf("Enter radius for circle 1: ");
    scanf("%f", &circle1.radius);
    printf("Enter radius for circle 2: ");
    scanf("%f", &circle2.radius);

    // Calculate and display area and perimeter
    printf("\nCircle 1:\nArea: %.2f\nPerimeter: %.2f\n",calculate_area(circle1), calculate_perimeter(circle1));
    printf("\nCircle 2:\nArea: %.2f\nPerimeter: %.2f\n",calculate_area(circle2), calculate_perimeter(circle2));

    return 0;
}



