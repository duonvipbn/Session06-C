#include <stdio.h>

int main(){
	int n1, n2, n3, n4, n5, soLuongSoChan = 0, soLuongSoLe = 0;
	printf("nhap gia tri nguyen\n");
	//nhap gia tri
	printf("nhap so 1: ");
	scanf("%d", &n1);
	printf("nhap so 2: ");
	scanf("%d", &n2);
	printf("nhap so 3: ");
	scanf("%d", &n3);
	printf("nhap so 4: ");
	scanf("%d", &n4);
	printf("nhap so 5: ");
	scanf("%d", &n5);
	
	//check so le
	if (n1 % 2 != 0){
		soLuongSoLe ++;
	}else{
		soLuongSoChan ++;
	}
	
	if (n2 % 2 != 0){
		soLuongSoLe ++;
	}else{
		soLuongSoChan ++;
	}
	
	if (n3 % 2 != 0){
		soLuongSoLe ++;
	}else{
		soLuongSoChan ++;
	}
	
	if (n4 % 2 != 0){
		soLuongSoLe ++;
	}else{
		soLuongSoChan ++;
	}
	
	if (n5 % 2 != 0){
		soLuongSoLe ++;
	}else{
		soLuongSoChan ++;
	}
	
	printf("So luong so chan: %d\nSo luong so le: %d", soLuongSoChan, soLuongSoLe);
	
	return 0;
}
