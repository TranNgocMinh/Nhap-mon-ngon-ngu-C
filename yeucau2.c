#include <stdio.h>

int main(void) {
  // khai bao bien R kieu double;
  double R = 2.5;
  // khai bao hang ten PI kieu double;
  double PI = 3.14;
  // khai bao cac bien CV va DT kieu double;
  double CV, DT; 
  printf ("R = %.1f,R",R);
  printf ("\t");
  printf ("PI = %.2f,PI",PI);
  CV = 2*R*PI;
  DT = R*R*PI;
  printf ("\n2*R*PI\nR*R*Pi \n");
  printf ("\n");
  printf ("CV = %.1f \t DT = %.2f",CV, DT);
  getchar() ;
  return 0;
}
