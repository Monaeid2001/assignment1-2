#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x=0,num=0;
    printf("please enter a positive perfect square \n");
    scanf("%d",&x);
    num=sqrt(x);
    if(x>=0){
            if(x==num*num){
             printf("this is a perfect square = %d\n",x);

            }else{
            printf("this is not a perfect square \n");
            }
    }else{
        printf("the number you enter is negative please enter a positive one");
    }
    return 0;

}
