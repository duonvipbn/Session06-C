#include <stdio.h>
#include <math.h>
int main(){
	float a, b, c;
    float delta;

	printf("Nhap vao so a: ");
	scanf("%f", &a);
	printf("Nhap vao so b: ");
	scanf("%f", &b);
	printf("Nhap vao so c: ");
	scanf("%f", &c);
	delta = b * b - 4 * a * c;
	
	if(a == 0) {
    printf("a phai lon hon 0\n");
    return 0; 
    }
    if(delta < 0) {
    printf("phuong trinh vo nghiem");
    return 0; 
    } 
    
    if(delta == 0) {
        float x = -b / (2 * a);
        printf("x = %.2f\n", x);
        return 0; 
    }
    
	if(delta > 0) {
        float x1 = (-b + sqrt(delta) ) / (2 * a);
        float x2 = (-b - sqrt(delta) ) / (2 * a);
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }
	return 0;
}
