#include <stdio.h>

int main() {
  int a[4]={3,5,7,2};
  int k,tong=0;

  for(int k = 0; k < 4; ++k){
  	tong +=a[k];
     printf("%d\n", a[k]);
  }
  printf("TONG = %d",tong);
  return 0;
}

