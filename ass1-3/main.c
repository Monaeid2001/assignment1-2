#include <stdio.h>
int main() {
 float cel=0,farh=0;
 printf("enter the temperature in celius");
 scanf("%f",&cel);
 farh=(cel*(9/5))+32;
 printf("the temperature in farh is %f",farh);
  return 0;
}
