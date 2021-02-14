#include <stdio.h>

int main(){
  //khai bao bien
  double R;
  R = 2.5;
  //khai bao hang
  const double PI = 3.14;
  //khai bao nhieu bien
  double CV, DT;
  printf("R=%.1f", R);
  printf("\n");
  printf("PI:%.2f",PI);
  CV = (double) 2*R*PI;
  DT = (double) R*R*PI;
  printf("\n\n");
  printf("2*R*PI\tR*R*PI\n%.1f\t%.1f",CV,DT);
 
  getchar();
  return 0;
}
