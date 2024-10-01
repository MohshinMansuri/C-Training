#include <stdio.h>
struct Book{
    char title[100];
    char author[100];
    float price;
};

int main(){
    struct Book books[3];
    int i, most_expensive = 0, lowest_priced = 0;

    for (i = 0; i < 3; i++){
        printf("Enter details for book %d:\n", i + 1);
        printf("Title: ");
        scanf("%s", books[i].title);
        printf("Author: ");
        scanf("%s", books[i].author);
        printf("Price: ");
        scanf("%f", &books[i].price);
    }

    for (i = 1; i < 3; i++){
        if (books[i].price > books[most_expensive].price){
            most_expensive = i;
        }
        if (books[i].price < books[lowest_priced].price){
            lowest_priced = i;
        }
    }

    // Output results
    printf("\nMost Expensive Book:\nTitle: %s\nAuthor: %s\nPrice: %.2f\n", books[most_expensive].title, books[most_expensive].author, books[most_expensive].price);
    printf("\nLowest Priced Book:\nTitle: %s\nAuthor: %s\nPrice: %.2f\n", books[lowest_priced].title, books[lowest_priced].author, books[lowest_priced].price);

    return 0;
}


