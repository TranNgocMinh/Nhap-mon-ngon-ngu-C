//khoi khai bao
#include <stdio.h>

int BCNN(int a, int b);

//khoi ham main
int main(void) {
  int a, b;
  printf("nhap a =");
  scanf("%d", &a);
  printf("nha b =");
  scanf("%d", &b);
  
  BCNN(a,b);
  printf("\nBCNN la : %d", BCNN(a,b));
    return 0;
}
//khoi dinh nghia ham
//tim UCLN
int UCLN(int a, int b){
  if(b == 0)
  return a;
  else
  return UCLN(b, a%b);
  }
  //Tim BCNN
int BCNN(int a, int b){
  return a*b/UCLN(a,b);
  }
