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
    int x;
    char ans;
    do{
        printf("1. Author\n"); 
        printf("2. Book Name\n"); 
        printf("3. Publisher\n"); 
        printf("4. Exit\n"); 
        printf("Enter Choice 1 to 4 : ");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            printf("Enter Author Id Here : ");
            scanf("%d", &p1.b1.a1.authour_id);
            printf("Author Id : %d\n", p1.b1.a1.authour_id);
            break;
        case 2:
            printf("Enter Book Name Here : ");
            scanf("%s", &p1.b1.book_name);
            printf("Book Name : %s\n", p1.b1.book_name);
            break;
        case 3:
            printf("Enter Publishing Year Here : ");
            scanf("%d", &p1.Publish_year);
            printf("Publishing Year : %d\n", p1.Publish_year);
            break;
        case 4:
            printf("Exit\n");
            break;
        
        default:
            printf("Wrong Choice\n");
            break;
        }
    printf("Enter Y to continue : ");
    scanf("%s", &ans);
    }while (ans == 'y');
}