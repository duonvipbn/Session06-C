#include <stdio.h>

int main(){
	int y, m;
	printf("Nhap so nam: ");
	scanf("%d", &y);
	printf("Nhap so thang: ");
	scanf("%d", &m);
	
	printf("so ngay: %d", (y*12)*30 + m*30);
	return 0;
	
}
