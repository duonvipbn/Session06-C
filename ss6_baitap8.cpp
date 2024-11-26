#include <stdio.h>
#include <math.h>
int main(){
	double tienGuiNganHang, laiSuatThang, soThangGui, tongTien;
	do{
	printf("nhap tien gui ban dau: ");
	scanf("%lf", &tienGuiNganHang);
	printf("nhap lai suat thang: ");
	scanf("%lf", &laiSuatThang);
	printf("nhap so thang gui: ");
	scanf("%lf", &soThangGui);
	if(tienGuiNganHang < 0 || laiSuatThang < 0 || soThangGui < 0){
		printf("nhap sai roi cac so phai >= 0\n");
	}
	}while(tienGuiNganHang < 0 || laiSuatThang < 0 || soThangGui < 0);
	
	
	tongTien = tienGuiNganHang + ((tienGuiNganHang*laiSuatThang)/100)*soThangGui;

	printf("tien lai: %lf\n", tongTien-tienGuiNganHang);
	printf("tien nhan duoc: %lf", tongTien);
	return 0;
}
