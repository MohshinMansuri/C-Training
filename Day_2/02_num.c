#include <stdio.h>

void main(){
    int num;
    printf("Enter Any Number Here : ");
    scanf("%d", &num);
    switch (num>0)
    {
    case 1:
        printf("%d is Positive Number", num);
        break;
    case 0:
        switch (num <0)
        {
        case 1:
            printf("%d is Negative Number", num);
            break;
        case 0:
            printf("%d is Zero", num);
        }
    }
}