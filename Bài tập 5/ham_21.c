//Khoi khai bao
#include<stdio.h>
int kiem_tra_am_duong(int p);

 //khoi ham main
int main(){
  int n;
  printf("Nhap n = ");
  scanf("%d", &n);
  if(kiem_tra_am_duong(n) > 0)
      printf("n la so nguyen duong ");
  else if (kiem_tra_am_duong(n) < 0)
    printf("n la so nguyen âm");
  else 
    printf("n = 0");
  return 0;
}
  int kiem_tra_am_duong(int p){ 
  return p;
  }
