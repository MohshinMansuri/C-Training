#include <stdio.h>

void main(){
    int x = 3, y = 3;
    int a[x][y], b[x][y], c[x][y];
    printf("<-------------------Enter the Array Values Here--------------->\n");
    printf("\n<----Enter the Values of Array A---->\n");
    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
        printf("Enter %d row & %d column Element : ", i+1, j+1);
        scanf("%d", &a[i][j]);
        }
    }
    printf("\n<----Enter the Values of Array B---->\n");
    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
        printf("Enter %d row & %d column Element : ", i+1, j+1);
        scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
        c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\n<----Values of The Array C---->\n");
    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
        printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}