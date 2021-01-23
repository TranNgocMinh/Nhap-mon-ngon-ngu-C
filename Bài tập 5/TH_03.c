#include<stdio.h>
int So_lon_nhat_la ();
int main() {
	int a, b, c;
    printf("nhap a : ");
    scanf("%d", &a);
    printf("nhap b : ");
    scanf("%d", &b);
    printf("nhap c : ");
    scanf("%d", &c);
	if(a>b &&a>c)
   printf("so lon nhat : %d",a);
   
   if (b>a&& b>c)
   printf("so lon nhat : %d",b);

   if (c>a&&c>b)
   
   printf("so lon nhat : %d",c);
   return 0;
}
int So_lon_nhat_la (){
	return 0;
}
