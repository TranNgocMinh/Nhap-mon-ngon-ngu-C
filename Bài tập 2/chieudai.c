#include <stdio.h>

main(void) {
  int l,t,d;
  printf("Nhap do dai can chuyen doi: %d",l);
  scanf("%d", &l);
  t=l*10000;
  d=t*10000000;
  printf("\nDo dai chuyen sang don vi Xentimet la: %d", t);
  printf("\nDO dai can chuyen sang don vi Milimet la: %d", d);
}

