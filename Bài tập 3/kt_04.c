#include<stdio.h>
int main()
{
    //Khai n, tong, i
int n,tong,i;
    //Gan gia tri tong = 0
    tong = 0;
    //Hien thi dong chu Nhap mot so ra man hinh
    printf("Nhap mot so\n");
    //Nhap mot so tu ban phim
    scanf("%d",&n);
while (n > 0)
    {
    //Tinh i
    i = n % 10;
    //Tinh tong
    tong = tong + i;
    //Tinh n
    n = n / 10;
    }
    //Hien thi ket qua 
    printf("Tong cac chu so cua mot so nguyen = %d",tong);
return 0;
}
