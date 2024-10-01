#include <stdio.h>


void main(){
    struct author
    {
        int authour_id;
    };
    struct book
    {   
        struct author a1;
        char book_name[20];
    };
    struct publisher
    {   
        struct book b1;        
        int Publish_year;
    };
    
    struct publisher p1;

    printf("Enter Author Id Here : ");
    scanf("%d", &p1.b1.a1.authour_id);
    printf("Author Id : %d\n", p1.b1.a1.authour_id);
    printf("Enter Book Name Here : ");
    scanf("%s", &p1.b1.book_name);
    printf("Book Name : %s\n", p1.b1.book_name);
    printf("Enter Publishing Year Here : ");
    scanf("%d", &p1.Publish_year);
    printf("Publishing Year : %d\n", p1.Publish_year);
    
}