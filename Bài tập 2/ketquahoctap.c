#include <stdio.h>

main(void) {
  //Khai bao bien van toan kieu so nguyen
  int Van,Toan,V,T;
  double DTB;
  printf("nhap Van =");
  scanf("%d, & V");
  printf("nhap Toan =");
  scanf("%d, & T");
  Van=V;
  Toan=T;
  //Xuat DTB
  DTB=(V+T)/2;
  printf("Van\tToan\tDTB\n%d\t%d\t%0.1f",Van,Toan,DTB);
}
