#include <stdio.h>

int main()
{
int a , b, c;
  a = 2; b = 3; c = 4;
  printf("\nbang 2\n");
  for(int i = 1; i <=10; i++)
  printf("\n%d*%d=%d\t",a,i,a*i);
  printf("\nbang 3\n");
  for(int i = 1; i <=10; i++)
  printf("\n%d*%d=%d\t",b,i,b*i);
  printf("\nbang 4\n");
  for(int i = 1; i <=10; i++)
  printf("\n%d*%d=%d\t",c,i,c*i);
return 0;
}
