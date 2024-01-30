#include <stdio.h>


// 이 코드로는 값이 변하질 않는다.
//void swap(int x, int y) {
//
//	// 바꾸기 전 값을 저장할 함수
//	int temp;
//	temp = x;
//	x = y;
//	y = temp;
//
//}

void swap(int* x, int* y) {
	
	int temp;

	// temp는 포인터x 를 역참조 한다.
	temp = *x; 

	*x = *y;

	*y = temp;
}


int main(void) {

	int a = 5;

	int* p = &a;

	int** p2 = &p;

	printf("p2가 가리키는 값 : %p \n", *p2);

	printf("p2가 가리키고 가리키는 값 : %d \n", **p2);

	int array[10] = { 1,2,3,4,5 };

	int* ptrArray[5];

	for (int i = 0; i < sizeof(ptrArray) / sizeof(int*); i++) {
		
		// 포인터 배열에 각 주소 값 저장;
		ptrArray[i] = &array[i];
	}

	printf("길이가 몇 인데? :  %d \n", sizeof(ptrArray) / sizeof(int*));

	for (int i = 0; i < sizeof(ptrArray) / sizeof(int*); i++) {

		// 배열을 역참조 해서 하나씩 값을 출력한다.
		printf("ptrArray[%d]의 값은 : %d 다 \n", i, *ptrArray[i]);

	}


	// 포인터와 함수

	int x = 3, y = 5;

	printf("기존 값 =>  x 는 %d 이고 y 는 %d 이다 \n", x, y);

	swap(&x, &y);

	printf("바뀐 값 =>  x 는 %d 이고 y 는 %d 이다 \n", x, y);


	// 실습 5 

	int iArray[5] = { 1,2,3,4,5 };

	printf("%d, %d \n", iArray[0], iArray[1]);

	printf("%p, %p \n", &iArray[0], &iArray[1]);

	printf("%p \n", iArray);


	// 실습 6 1차원 배열명의 포인터 타입 

	int* iPtr;
	
	// 포인터가 배열의 이름이면   배열의 시작점이 된다 즉 iPtr[0] = iArray[0] 이랑 같음 
	iPtr = iArray;

	// 기존 배열 출력
	printf("%d, %d, %d \n", iArray[0], iArray[1], iArray[4]);

	printf("%d, %d, %d \n", iPtr[0], iPtr[1], iPtr[4]);

	
	// 실습 7 포인터 연산

	char c = 'b';
	int i = 3;
	double d = 3.14;

	char* cp = &c;
	int* ip = &i;
	double* dp = &d;

	printf("증감 전 %p, %p, %p \n", cp, ip, dp);

	cp++, ip++, dp++; 

	printf("증감 후 %p, %p, %p \n", cp, ip, dp);

	cp += 3;  ip += 3, dp += 3;

	printf("한번 더 증감 후 %p, %p, %p \n", cp, ip, dp);


	return 0;

}


// a 와 b 값을 바꿔주는 함수



