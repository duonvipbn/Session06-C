#include <stdio.h>

int main(){
	int n;
	printf("Nhap so nguyen bat ky: ");
	scanf("%d", &n);
	printf("Cac uoc cua so %d la: ", n);
	for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
	return 0;
}
