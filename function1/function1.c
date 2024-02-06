#include <stdio.h>

// 팩토리얼   x! = 
int factorial(int i) {

	int result = 1;

	// 6! 1 * 2 * 3 * 4 * 5 * 6;

	for (int j = i; i > 1; i--) {
		result = result * i;
	}

	return result;
}

//  x ^ y 를 구하는 함수
int power(int x, int y) {

	int result = 1;
	for (int i = 1; i <= y; i++) {
		result = result * x;
	}
	return result;

}

// 상자 만들기 함수?   가로 
int draw_line(int x) {

	for (int i = 1; i <= x; i++) {

		printf("-");

	}
	printf("\n");

	return 0;
}

// 상자만들기 함수?  세로
int draw_wall(int y) {

	for (int i = 1; i <= y / 2; i++) {

		printf("l  l");
		printf("\n");

	}


}


int main(void) {

	printf("3! = %d\n", factorial(3));
	printf("5! = %d\n", factorial(5));
	printf("2 ^ 8 = %d\n", power(2, 8));
	draw_line(5);
	draw_wall(5);
	draw_line(5);

	return 0;
}