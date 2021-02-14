#include <stdio.h>

int main(){

 //khai bao bien a kieu so nguyen 
 int a;
 // khai bao gia tri bien a
 a = 4;
 //khai bao va khoi tao bien
 int b = 2;
 //khai bao nhieu bien va khoi tao 
 int c = 1, d = 3;
 // khai bao nhieu bien 
 int e, f, g;
 printf("Bien a = %d va bien b = %d va bien c = %d va bien d = %d",a,b,c,d);
 e = a + b ;
 printf("\n");
 printf("Tong a + b = %d",e);
 printf("\n");
 printf("Tong %d + %d = %d ",a,b,e);
 printf("\n");
 g = ((a + b) - c) * d;
 printf("((%d + %d) - %d) * %d = %d)",a,b,c,d,g);
 getchar();
 return 0;
}
