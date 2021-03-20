#include <stdio.h>

int main(void) {
  int n,S;
  S = 0;
  printf ("Nhap n: ");
  scanf ("%d",&n);
  for (int i = 1; i<=n; i++){
    S = (n*(n+1)*(2*n+1))/6;
  }
  printf ("S = 1^2 + 2^2+...+ %d^2 = %d",n,S);
  return 0;
}
