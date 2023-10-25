#include<stdio.h>
void main(){
    int n=0,reserve=0,num=0;
    printf("enter the number to be reverse\n");
    scanf("%d",&n);
    while(n!=0){
        num=n%10;
        reserve=reserve*10+num;
        n/=10;
    }
    printf("the reserved number is %d",reserve);
    return 0;
}
