#include<stdio.h>
int main()
{
    int a, k;
    long s; 
    s = 0;
    a = 1;
    printf("\nNhap k: ");
    scanf("%d", &k);

    while(a <= k)
    {
        s = s + a;
        a++;
    }
    printf("\nTong 1 + 2 + ... + %d la %ld: ", k, s);
    return 0;
}
