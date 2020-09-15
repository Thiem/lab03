#include <stdio.h>
#include <stdlib.h>
int main(){
	int s, m=3, n=5, r, t;
	float x=3.0, y;
	printf("Bieu thuc t = n/m : %d\n",(t = n/m));
	printf("Bieu thuc r = n%m : %d\n",(r = n%m));
	printf("Bieu thuc y = n/m : %.2f\n",(y = n/m));
	printf("Bieu thuc t = x*y-m/2: %d\n",(t = x*y-m/2));
	printf("Bieu thuc x = x*2.0: %d\n",(x = x*2.0));
	printf("Bieu thuc s = (m+n)/r: %d\n",(s = (m+n)/r));
	printf("Bieu thuc y = --n: %.2f",(y = --n));
	return 0;		
}
