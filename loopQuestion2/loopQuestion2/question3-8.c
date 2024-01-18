#include <stdio.h>
int main(void) {

	int n, sum =0; 
	printf("임의의 정수를 입력 하세요 \n");
	scanf_s("%d", &n);

	/* 100 이하의 3 또는 5의 배수인 자연수들의 합 구하기 */
	
	for (int i = 1; i <= 100; i++) {

		if (i % 3 == 0 || i % 5 == 0) {
			sum += i;
		}	
	}
	printf("100 이하의 3 또는 5의 배수인 자연수들의 합은 : %d \n", sum);



	/* 1, 000, 000 이하의 피보나치 수열(n 번째 항이 N - 1 번째 항과 N - 2 번째 항으로 표현되는 수열)
	 의 짝수 항들의 합을 구하기 */


	sum = 0;

	int a = 1, b = 2;

	for (int i = 1; i <= n; i++) {

		if (a % 2 == 0) sum += a;  // 짝수 일 때 더하기 

		int temp = b;		// b 의 값을 임시 변수에 저장
		b = a+b;			// a 와 b 를 더하여 다음 피보나치 수를 계산
		a = temp;			// a 에 b의 원래 값을 저장

	}
	
	printf("피보나치 수열 짝수의 합은 : %d \n", sum);


	/* 사용자로 부터 N 값을 입력 받고 1 부터 N 까지의 곱을 출력 */

	sum = 1;
	
	for (int i = 1; i <= n; i++) {
		sum *= i;
	}
	printf(" 1부터 n 까지 곱한 값은 : %d \n ", sum);

	return 0;

}