#include <stdio.h>
int h = 4;
int main(){
	for(int i = 1; i <= h; i++){
		printf("hang %d",i);
	for(int kt = 1; kt <= h - i;kt++)
	 printf(" ");
	for(int ngs = 1; ngs <= 2*i - i;ngs++)
	 printf("*");
	 
	 printf("\n");
}} 
