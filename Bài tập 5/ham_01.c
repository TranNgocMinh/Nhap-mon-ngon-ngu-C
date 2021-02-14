#include <stdio.h>
int sum(int a, int b, int c);
// khai ham main
int main(){
  int  x = 11, y = 2, z = 8;
  printf("x+y+z=%d",sum(x,y,z));
  return 0 ;
}
int sum(int a, int b, int c){
  int  f=a+b+c;
   return f;
}
