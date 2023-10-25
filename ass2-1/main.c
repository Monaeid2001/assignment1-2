#include<stdio.h>
int cube(int n);
int main(){
    int n=0,c=0;
    printf("enter the number\n");
    scanf("%d",&n);
    c=cube(n);
    printf("the cube of %d is %d",n,c);
return 0;
}

 int cube(int n){
     return n*n*n;
 }
