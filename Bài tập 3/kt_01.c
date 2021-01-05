#include <stdio.h>

int main()
{
//khia bao bien i, j
int i , j;
  printf("\tBANG CUU CHUONG\n");
  //Vong lap tu 1 den 10
for (i = 1; i < 11; i++)
{
  //Vong lap nhan tu 1 den 10
for (j = 1; j < 10; j++)
{
  //Hien thi ra man hinh ket qua bang cuu chuong ra man hinh
  printf("%d*%d=%d\t", j, i, j * i);
}
  printf("\n");
}

return 0;
}
