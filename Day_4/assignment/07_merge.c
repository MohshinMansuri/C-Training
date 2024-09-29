#include <stdio.h>
int main() {
    int n, i, j, temp;
    printf("Enter the size of the arrays: ");
    scanf("%d", &n);
    int arr1[n], arr2[n], merged[2 * n];
    printf("Enter elements of the first array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter elements of the second array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }
    for(i = 0; i < n; i++) {
        merged[i] = arr1[i];
    }
    for(i = 0; i < n; i++) {
        merged[n + i] = arr2[i];
    }
    for(i = 0; i < 2 * n; i++) {
        for(j = i + 1; j < 2 * n; j++) {
            if(merged[i] < merged[j]) {  
                temp = merged[i];
                merged[i] = merged[j];
                merged[j] = temp;
            }
        }
    }
    printf("Merged array sorted in descending order:\n");
    for(i = 0; i < 2 * n; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}



