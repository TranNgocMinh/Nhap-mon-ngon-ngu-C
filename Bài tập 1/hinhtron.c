#include <stdio.h>

int main(void) {
  //khai bao bien DT, VC, R kieu double
  double DT, CV, R;
  //gan R = 1.5
  R = 1.5;
  //khai nao hang PI kieu double
  const double PI = 3.14;
  //gan gia tri DC, VC,
  CV = 2 * R * PI;
  DT = R * R * PI;
  printf("CV hinh tron la: %0.1f\n",CV);
  printf("DT hinh tron la: %0.f\n", DT);
  
  return 0;
}
