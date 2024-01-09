#include <stdio.h>

int main(void) {

	int numA = 5;

	numA += 15;

	printf("numA = 5 + 15 = %d \n", numA);

	printf("numA++ = %d \n", numA++);

	printf("++numA = %d \n", ++numA);

	printf("numA = %d  여기가 최종 값 \n ", numA);

	int a = 0xAF;	// 10101111
	 
	int b = 0xB5;	// 10110101 

	printf("%x and 연산 \n", a & b);	// and 연산		1010 0101  a5

	printf("%x or 연산 \n", a | b);	// or 연산		1011 1111		bf

	printf("%x  xor 연산 \n", a ^ b);	// xor 연산		0001 1010	1a

	//  1111 1111 1111 1111 1111 1111 0101 0000       ffffff50
	printf("%x 반전 연산 \n",  ~a);	// 반전연산 자바에서 ! 이거랑 같은거 인듯  0101 0000

	printf("%x a << 2 연산 \n", a << 2);	// 시프트 연산  0000 0000 0000 0000 0000 0000 1010 1111   10 1011 1100

	printf("%x b >> 3 연산 \n", b >> 3);	//  0001 0110

	char charA = 0111;
	char charB = 1111;

	printf("charA 는 %d \n", charA);
	printf("charB 는 %d", charB);

	// 무조건 양수만 표시 4바이트 전부 양수로 표시 0~4294967295
	unsigned int uiA = -1;

	printf("uiA 값은? %u", uiA);

	return 0;
}