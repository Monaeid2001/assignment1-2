#include <stdio.h>
int main() {
 int num1=0,num2=0;
 printf("enter first number\n");
 scanf("%d",&num1);
 printf("enter second number\n");
 scanf("%d",&num2);
 if(num1==num2){
    printf("number 1 equals number 2\n");
 }else{
     printf("number 1 not equal number 2\n");
 }
 if(num1>num2){
    printf("number 1 grater than number 2\n");
 }else{
     printf("number 2 grater than number 1\n");
 }
  return 0;
}
