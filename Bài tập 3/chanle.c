#include <stdio.h>

int main(void) {
   //khai bao bien
  int n;
  // nhap xuat n
  printf("Nhap n = ");
  scanf("%d",&n);
  // kiem tra so chan le bang khong
  if(n > 0){
    // so chan
    if(n % 2 ==0){
      printf("%d la so chan",n);
    } else{
      printf("%d la so le",n);
    }
    }else if(n==0){
      printf("%d bang khong",n);
    }
  return 0;
}
