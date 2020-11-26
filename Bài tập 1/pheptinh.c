#include <stdio.h>
int main(void)
{
//khai báo các bien	
int a, b, tong, hieu, tich;
//
float thuong;
//
	a = 5;
	b = 2;
	tong = a + b;
	hieu = a - b;
	tich = a * b;
	thuong = (float)a / b;
	printf("a\tb\ta+b\ta-b\ta*b\ta/b\n%d\t%d\t%d\t%d\t%d\t%.1f",a,b,tong,hieu,tich,thuong);
	getchar();
	return 0;
}
