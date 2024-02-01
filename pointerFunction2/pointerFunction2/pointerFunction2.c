#include <stdio.h>

int isOdd(int value) {

	if (value % 2 != 0) return 1;

	return 0;
}

int isEven(int value) {

	if (value % 2 == 0) return 1;

	return 0;
}

 
void showIf(int* arr, int size, int (*pred)(int)) {  // 배열의 시작, 배열의 길이, 함수 포인터

	for (int i = 0; i < size; i++) {
		if (pred(arr[i])) printf("%d", arr[i]);

		puts("");
	}
}



int main(void) {

	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };

	showIf(a, 10, isOdd);   // isOdd = 함수의 주소 // 함수의 이름만쓰면 함수의 주소를 호출
	showIf(a, 10, isEven);   // isOdd = 함수의 주소


}

