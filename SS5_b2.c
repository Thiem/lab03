#include <stdio.h>
#include <stdlib.h>
int main(void){
	float a;
	float foot,inch;
	printf("Nhap vao gia tri can quy doi:");
	scanf("%f",&a);
//	printf("%.2f",a);
	inch =  a/2.54;
	foot = inch/12;
	printf("%0.1f cm = %0.1f inch\n",a,inch);
	printf("%0.1f cm = %0.1f foot",a,foot);
	return 0;
}
