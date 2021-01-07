#include <stdio.h>

int main()
{
int i , j;
  //Vong lap tu 1 den 10
for (i = 1; i <= 10; i++)
{
for (j = 2; j <= 4; j++)
{
  //Hien thi ra man hinh ket qua bang cuu chuong ra man hinh
  printf("%d*%d=%d\t", j, i, j * i);
}
printf("\n");
}

return 0;
}
