#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0,y=0,z=0;
    printf("please enter 3 numbers\n");
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    if(x<y && x<z){
    printf("the smallest number is =%d\n",x);
    }
    else if(y<x && y<z){
        printf("the smallest number is = %d\n",y);
    }
    else{
        printf("the smallest number is = %d\n",z);
    }
    return 0;
}
