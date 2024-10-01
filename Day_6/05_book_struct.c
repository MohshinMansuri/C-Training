
#include <stdio.h>

void main()
{
    struct book
    {
        int price, quantity, discount, cashpay;
    };
    struct book b1;
    printf("Enter Price Here : ");
    scanf("%d", &b1.price);
    printf("Enter Quantity Here : ");
    scanf("%d", &b1.quantity);
    b1.price = b1.price * b1.quantity;
    printf("Total Price : %d\n", b1.price);
    b1.discount = b1.price * 20 / 100;
    printf("Total Discount : %d\n", b1.discount);
    b1.cashpay = b1.price - b1.discount;
    printf("CashPay : %d", b1.cashpay);
}