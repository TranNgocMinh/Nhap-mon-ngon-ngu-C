#include<stdio.h>
 int main(){
 
 int n, i, s;
 int a[n];
 printf("Nhap n = ");
 	scanf("%d", &n);
 	//tao namg a kich thuoc n
   //nhap n phan tu cua mang a tu ban phim
   for(int i = 0 ;i < n; i++){
     printf("nhap phan tu thu %d",i + 1);
     scanf("%d", &a[i]);
     printf("\n");
   }
   printf("mang a:");
   for(int i = 0 ;i < n; i++){
     printf("%d",a[i]);
     
   }
    for(int i = 0;i < n; i++){
   s+=a[i];
  }
  printf("\nTong cua mang a la : %d", s);
     return 0;
}
