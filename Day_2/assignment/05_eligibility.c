#include <stdio.h>

int main() {
    int maths, physics, chemistry, total, math_phy_total;

    // Input marks for Physics, Chemistry, and Maths
    printf("Enter the marks obtained in Physics: ");
    scanf("%d", &physics);
    printf("Enter the marks obtained in Chemistry: ");
    scanf("%d", &chemistry);
    printf("Enter the marks obtained in Mathematics: ");
    scanf("%d", &maths);

    // Calculate totals
    total = maths + physics + chemistry;
    math_phy_total = maths + physics;

    // Check eligibility criteria
    if ((maths >= 65 && physics >= 55 && chemistry >= 50 && total >= 190) || math_phy_total >= 140) {
        printf("The candidate is eligible.\n");
    } else {
        printf("The candidate is not eligible.\n");
    }

    return 0;
}
