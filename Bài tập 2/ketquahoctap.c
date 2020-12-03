#include <stdio.h>

int main(void) {

int V,T,Van,Toan;
double DTB;
Van=V;
Toan=T;
DTB=(double)(V+T)/2;
printf  ("Nhap V =");
scanf  ("%d",&V);
printf (" Nhap T =");
scanf  ("%d",&T);
printf("Van\tToan\tDTB\n%d\t%d\t%0.1f",Van,Toan,DTB);
return 0 ;
}
