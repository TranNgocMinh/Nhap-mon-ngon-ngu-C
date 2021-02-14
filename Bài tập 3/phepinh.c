#include <stdio.h>

int main(void){
int a = 5, b = 2;
char pt;
printf("Vui long nhap phep tinh: ");
scanf("%c", &pt);
switch (pt) {
case ('+'):
printf ("a+b=%d",a+b);
break ;
case ('-'):
printf ("a-b=%d",a-b);
break ;

default :
    printf ("vui long nhap phep tinh");
}
return 0 ;
}
