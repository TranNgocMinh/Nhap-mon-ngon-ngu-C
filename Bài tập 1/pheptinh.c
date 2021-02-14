#include <stdio.h>
int main(void)
{
  // khai bao bien a,b dang int
int a,b;
	a = 3;
	b = 5;
	//khai bao bien tong, hieu, tich dang int
  int tong, hieu, tich;
	// khai bao bien thuong dang double 
  double thuong;
	// khoi tao gia tri bien tong, hieu, tich, thuong
  tong = a + b;
	hieu = a - b;
	tich = a * b;
	thuong = (double)a / b;
	// hien thi bien tong, hieu, tich, thuong ra man hinh
  printf("a + b = %d, a - b = %d, a * b = %d, a / b = %0.1f", tong, hieu, tich, thuong);
	return 0;
}
