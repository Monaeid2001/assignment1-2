#include <stdio.h>
#include <stdlib.h>
void isAlpha(char c);
int main()
{
   char c=0;
   printf("enter the character");
   scanf("%c",&c);
   isAlpha(c);
    return 0;
}
void isAlpha(char c){
    if(c>=65&&c<=90 || c>=97 &&c<=122){
    printf("the character is alphapet");
   }
   else{
    printf("the character is not alpha");
   }
}
