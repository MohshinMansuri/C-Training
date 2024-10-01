
#include <stdio.h>

void main()
{
    struct pen
    {
        int price;
    };
    struct pen *p;
    printf("Enter Price Here : ");
    scanf("%d", &p->price);
    printf("Price : %d", p->price);
}