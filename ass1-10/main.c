#include<stdio.h>

int main()
{
    int a,b,c;
    char op;
    printf("Enter first number: ");
    scanf(" %d", &a);
    printf("Enter second number: ");
    scanf(" %d", &b);
    printf("Enter operator: ");
    scanf(" %c", &op);
   switch(op){
   case '+':
    printf("%d",a+b) ;
    break;
    case '-':
     printf("%d",a-b) ;
    break;
    case '*':
     printf("%d",a*b) ;
    break;
    case '/':
    if(b!=0){
     printf("%f",(float)a/b) ;
    }
    break;
    default:
    printf("error");
   }
     return 0;
}
