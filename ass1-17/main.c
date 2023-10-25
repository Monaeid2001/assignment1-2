#include<stdio.h>
void main(){
    int n=0,count=0;
    printf("enter the number to be count\n");
    scanf("%d",&n);
    while(n!=0){
        n/=10;
        count++;
    }
    printf("the number of digits is %d",count);
    return 0;
