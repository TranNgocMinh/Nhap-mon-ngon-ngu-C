#include <stdio.h>

int main(void) {
	//Khai bao bien 
    char pt;
    //Gan gia tri a va b
    int a = 5, b =10;
    		//hien thi ra man hinh
         printf("Nhap phep tinh:\n");
         //Nhap so lieu tu ban phim
         scanf("%c", &pt);
    switch(pt)
	{
		case '+':
			//Hien thi ra man hinh 
			printf("a + b = %d", a + b);
		break;
		case '-':	
			//Hien thi ra man hinh 
			printf("a - b = %d", a - b);
		break;
		default:
			//Hien thi ra man hinh 
			printf("Vui long nhap lai");
	}

    return 0;
}
