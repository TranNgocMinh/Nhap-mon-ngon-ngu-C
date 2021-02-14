#include <stdio.h>

int main (void) 
{
	int a,b;
	int n;
	printf("Nhap vao n= ");
	scanf("%d",&n);
	for (a=1; a<= n ; a++ )
    {
    	printf("\n");
    	for(b=1;b<=a;b++)
   	    {
		   printf("%d ",b);
		}
	}
	return 0 ;	
}
