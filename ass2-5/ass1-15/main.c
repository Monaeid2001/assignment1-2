#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,pow=0,res=1;
   printf("enetr the number");
   scanf("%d",&a);
   printf("enetr the power");
   scanf("%d",&pow);
   while(pow!=0){
    res*=a;
    pow--;
   }
   printf("the powe of the  number is %d",res);

}
