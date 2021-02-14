#include<stdio.h>

int main(){
	//khai bao bien a, b
	int a, b;
	printf("nhap a tu ban phim :",a);
	scanf("%d", &a);
		printf("nhap b tu ban phim :",b);
	scanf("%d", &b);
	if(a > b){
		printf("a>b",a,b);
	}else if( a== b){
		printf("a==b",a,b);
	}else if(a < b){
		printf("a<b ",a,b);
	}
	return 0;
}
