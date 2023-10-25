#include <stdio.h>
int main() {
 int r=0;
 float area=0,circu=0;
 printf("enter the radius\n");
 scanf("%d",&r);
 area=3.14*r*r;
 circu=2*r*3.14;
 printf("the area of circle is %f\n",area);
 printf("the circu of circle is %f",circu);
  return 0;
}
