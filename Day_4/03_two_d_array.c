#include <stdio.h>

void main(){
    int x = 3, y = 3;
    int a[x][y];
    printf("<-------------------Enter the Array Values Here--------------->\n");
    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
        printf("Enter %d row & %d column Element : ", i+1, j+1);
        scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
        printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}