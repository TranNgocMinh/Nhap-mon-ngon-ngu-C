#include<stdio.h> 
int main()
{
 int a;
 for(a = 1; a <= 20; a+=2)
{
 if((a == 5) or (a == 11) or (a == 15))continue;
 printf("%5d", a);
}
 return 0;
}
