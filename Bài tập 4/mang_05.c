#include<stdio.h>
 int main(){
 
 int n,k,m;
 int a[n];
 printf("Nhap n = ");
 	scanf("%d", &n);
   for(int i = 0 ;i < n; i++){
     printf("nhap phan tu thu %d",i+1);
     scanf("%d", &a[i]);
     printf("\n");
   }
   printf("Mang a:");
   for(int i = 0 ;i < n; i++){
     printf("%d",a[i]);
   }
    printf("\nNhap m = ");
 	scanf("%d", &m);
 	for(int i = 0;i < n;i++){
    if(a[i] == m){
      k=+1;
      break;
    } 
    if(k > 0){printf("Co ton tai");
    }
    else(printf("Khong ton tai"));
     return 0;
}}
