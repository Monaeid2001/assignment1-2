#include <stdio.h>
int main() {
  int grade=0;
  printf("enter the grade\n ");
  scanf("%d",&grade);
  if(grade>=0 && grade<50){
    printf("FAIL");
  }
   else if(grade>=50 && grade<65){
    printf("PASS");
  }
   else if(grade>=65 && grade<75){
    printf("Good");
  }
   else if(grade>=75 && grade<85){
    printf("very good");
  }
  else if(grade>=85 && grade<100){
    printf("Execllent");
  }
  else{
    printf("error");
  }
  return 0;
}
