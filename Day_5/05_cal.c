#include <stdio.h>


int add(int a, int b){
    int c = a + b;
    return c;
}
int sub(int a, int b){
    int c = a - b;
    return c;
}
int multi(int a, int b){
    int c = a * b;
    return c;
}
int div(int a, int b){
    int c = a / b;
    return c;
}
void main(){
    int x , y, ans;
    char o, z;
    do{
    printf("Calculate Here : ");
    scanf("%d %s %d", &x ,&o, &y);
    if (o == '+'){
        ans = add(x,y);
    }
    else if(o == '-'){
        ans = sub(x,y);
    }
    else if(o == '*'){
        ans = multy(x,y);
    }
    else if(o == '/'){
        ans = div(x,y);
    }
    else{
        printf("Invalid Operator, Please Try Again");
    }
    printf("%d", ans);
    printf("\nThank You");
    printf("\nPress Y to Continue : ");
    scanf("%s", &z);
    }while ( z == 'y' || z == 'Y');
}
