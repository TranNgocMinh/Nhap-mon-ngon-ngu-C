#include<stdio.h>

int main(){
	int dongia, soluong, thanhtien;
	printf("nhap don gia :",dongia);
	scanf("%d",&dongia);
	printf("nhap soluong :",soluong);
	scanf("%d",&soluong);
	thanhtien=dongia*soluong;
	if(thanhtien>=500&&dongia>=5){thanhtien=(dongia*soluong)*0.5;
	printf("%d", thanhtien);
	}else{printf("%d",thanhtien);
	}
	getchar();
	return 0; 
	}
