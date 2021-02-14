#include<stdio.h>
int n;
int main(){
	printf("nhap n");
	scanf("%d", &n);
	switch(n){
		case 1:
			printf("*");
			break;
		case 2:
			printf("\t*\n*\t*\t*");
			break;
		case 3:
			printf("\t\t*\n\t*\t*\t*\n*\t*\t*\t*\t*");
			break;
		case 4: 
		    printf("\t\t\t*\n\t\t*\t*\t*\n\t*\t*\t*\t*\t*\n*\t*\t*\t*\t*\t*\t*");
		    break;
}
          getchar();
          return 0;
}
    
