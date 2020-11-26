
int main(void)
{
int a,b;
	a = 3;
	b = 5;
	int tong, hieu, tich;
	double thuong;
	tong = a + b;
	hieu = a - b;
	tich = a * b;
	thuong = (double)a / b;
	printf("a + b = %d, a - b = %d, a * b = %d, a / b = %0.1f", tong, hieu, tich, thuong);
	getchar();
	return 0;
}
