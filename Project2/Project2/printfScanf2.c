#include <stdio.h>

int main(void) {

	int numA = 5;

	numA += 15;

	printf("numA = 5 + 15 = %d \n", numA);

	printf("numA++ = %d \n", numA++);

	printf("++numA = %d \n", ++numA);

	printf("numA = %d  여기가 최종 값 ", numA);

	return 0;
}