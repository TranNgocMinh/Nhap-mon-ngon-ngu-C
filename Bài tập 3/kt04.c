#include <stdio.h>
int main() {
int n = 123;
int s = 0;
while(n!=0){
	s = s + n%10;
	n = n/10;
	}
printf("s = %d",s);
return 0;
}
