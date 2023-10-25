#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int fact=1,n=0;
    printf("enter the number for factorial\n");
    scanf("%d",&n);
    if(1==n || 0==n){
        printf("fact = %d\n",fact);
    }
    else if(n<0){
        printf("please only enter positive number");
    }
    else{
    for(int i=1;i<=n;i++){
        fact*=i;
    }
        printf("%d",fact);
    }
    return 0;
}
