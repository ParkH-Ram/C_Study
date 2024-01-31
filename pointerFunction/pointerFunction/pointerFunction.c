#include <stdio.h>

int max(int a, int b) {
	if (a > b) // a가 크면
		return a;
	else 
		return b;

}

int min(int a, int b) {
	if (a < b) // a가 작으면
		return a;
	else
		return b;
}

double doNothing(char c, int d, int z, double s) {

	return 0;
}



int main(void) {
	// 함수 포인터 - 함수의 주소를 저장하는 변수 

	int x, y;
	// 함수를 포인터로 지정할 땐 반드시 괄호 붙일 것. 
	int (*pFunc) (int, int); // 8byte 짜리 포인터

	double (*pF)(char, int, int, double) = doNothing;  // pF == doNothing  함수포인터 지정
	printf("주소 확인해볼까유? %p \n", pF);
	printf("주소 확인해볼까유? %p \n", doNothing);

	printf("수 두개 입력 : ");
	scanf_s("%d %d", &x, &y);

	pFunc = max; // 함수명은 그 함수가 저장된 곳의 주소를 말한다.  max 함수의 주소를 pFunc에 저장
	printf("두 수중 큰 수는 %d 입니다. \n", max(x, y));
	printf("두 수중 큰 수는 %d 입니다. \n", pFunc(x, y)); // 함수 포인터로 함수의 호출 가능

	
	pFunc = min; // min 함수의 주소를 pFunc에 저장   포인터 함수로 같은 인수일 경우 주소만 바꿈으로 함수를 변경할 수 있다.
	printf("두 수중 작은 수는 %d 입니다. \n", min(x, y));
	printf("두 수중 작은 수는 %d 입니다. \n", pFunc(x, y)); // 위에선 max 였지만 밑에선 min 함수로 바뀜


	return 0;
}