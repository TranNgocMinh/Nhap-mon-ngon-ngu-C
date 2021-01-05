#include <stdio.h>

int main(void) {
  //khai bao bien bang float, delta
  float a, b, c, x1, x2, x, delta;
  //hien thi ra man hinh
  printf("nhap he so bac 2: a = ");
  scanf("%f", &a);
  printf("nhap he so bac 1: b = ");
  scanf("%f", &b);
  printf("nhap he so: c = ");
  scanf("%f", &c);
 if(a == 0)
 {
   if(b == 0)
   {
     if(c == 0)
     {
       printf("phuong trinh vo so nghiem");
     }
     else //c !=0
     {
       printf("phuong trinh vo nghiem");
     }
    
   }
   else //b !=0
   {
     printf("nghiem: x = %f", -c / b);
   }

 }
 else //a !=0
 {
      delta = b*b - 4*a*c;
      if(delta < 0)
      {
        printf("phuong trinh vo nghiem");

      }
      else
      {
        if (delta == 0)
        {
          printf("phuong trinh co nghiem kep: x = %f", -b/2*a);
        }
        else
        {
          printf("phuong trinh co 2 nghiem phan biet: \n");
          x1 = (-b + sqrt(delta)) / (2 * a);
          printf("x1 = %f", x1);
          x2 = (-b - sqrt(delta)) / (2 * a);
          printf("x1 = %f", x2);
        }
      }
 }
   return 0;
}
