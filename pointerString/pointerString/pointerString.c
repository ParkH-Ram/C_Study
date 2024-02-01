#include <stdio.h>

int main(void) {

	// 문자열과 포인터 배열 

	int a[4] = { 1,2,3,4 };
	int b[4] = { 5,9,7,8 };

	int* pa[2];

	pa[0] = a; // a 배열의 시작인 1의 주소를 저장
	pa[1] = b;	// b 배열의 시작인 2의 주소를 저장

	
	printf("%d \n", *pa[1]); // 시작 지점 5  배열 밖 [] + 1 을 하면 시작 주소 5 다음 값인 9를 출력한다.
	printf("%d \n", *(pa[1] + 1)); // 9 

	return 0;
}