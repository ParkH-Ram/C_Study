#include <stdio.h>

int main(void) {

	int numA = 5;

	numA += 15;

	printf("numA = 5 + 15 = %d \n", numA);

	printf("numA++ = %d \n", numA++);

	printf("++numA = %d \n", ++numA);

	printf("numA = %d  ���Ⱑ ���� �� \n ", numA);

	int a = 0xAF;	// 10101111
	 
	int b = 0xB5;	// 10110101 

	printf("%x and ���� \n", a & b);	// and ����		1010 0101  a5

	printf("%x or ���� \n", a | b);	// or ����		1011 1111		bf

	printf("%x  xor ���� \n", a ^ b);	// xor ����		0001 1010	1a

	//  1111 1111 1111 1111 1111 1111 0101 0000       ffffff50
	printf("%x ���� ���� \n",  ~a);	// �������� �ڹٿ��� ! �̰Ŷ� ������ �ε�  0101 0000

	printf("%x a << 2 ���� \n", a << 2);	// ����Ʈ ����  0000 0000 0000 0000 0000 0000 1010 1111   10 1011 1100

	printf("%x b >> 3 ���� \n", b >> 3);	//  0001 0110

	char charA = 0111;
	char charB = 1111;

	printf("charA �� %d \n", charA);
	printf("charB �� %d", charB);

	// ������ ����� ǥ�� 4����Ʈ ���� ����� ǥ�� 0~4294967295
	unsigned int uiA = -1;

	printf("uiA ����? %u", uiA);

	return 0;
}