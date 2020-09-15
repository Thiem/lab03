#include <stdio.h>
#include <stdlib.h>
int main(){
	int iResult, a = 10, b = 8, c = 6, d = 5, e =2;
	printf("a = %d, b = %d, c = %d, d = %d, e = %d\n",a,b,c,d,e);
	printf("Bieu thuc iResult = a - b - c - d : %d\n",(a - b - c - d));
	printf("Bieu thuc iResult = a - b + c - d : %d\n",(a - b + c - d));
	printf("Bieu thuc iResult = a + b / c / d : %d\n",(a + b / c / d));
	printf("Bieu thuc iResult = a + b / c * d : %d\n",(a + b / c * d));
	printf("Bieu thuc iResult = a / b * c * d : %d\n",(a / b * c * d));
	printf("Bieu thuc iResult = a mod b / c * d : %d\n",(a % b / c * d));
	printf("Bieu thuc iResult = a mod b mod c mod d : %d\n",(a % b % c % d));
	printf("Bieu thuc iResult = a - (b - c) - d : %d\n",(a - (b - c) - d));
	printf("Bieu thuc iResult = (a - (b - c)) - d : %d\n",((a - (b - c)) - d));
	printf("Bieu thuc iResult = a - ((b - c) - d) : %d\n",(a - ((b - c) - d)));
	printf("Bieu thuc iResult = a mod (b mod c) * d * e : %d\n",(a % (b % c) * d * e));
	printf("Bieu thuc iResult = a + (b - c) * d - e : %d\n",(a + (b - c) * d - e));
	printf("Bieu thuc iResult = (a + b) * c + d * e : %d\n",((a + b) * c + d * e));
	printf("Bieu thuc iResult = (a + b) * (c / d) mod e : %d",((a + b) * (c / d) % e));
	return 0;
}
