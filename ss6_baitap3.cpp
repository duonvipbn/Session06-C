#include <stdio.h>

int main(){
	int input, matKhau = 2006;
	printf("Nhap vao mat khau: ");
	scanf("%d", &input);
	if(input == matKhau){
		printf("Dung mat khau");
	}else{
		printf("Sai mat khau");
	}
	return 0;
}
