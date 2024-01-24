#include <stdio.h>

int main(void) {

	// 성적 평균 내기 

	/*int array[2];
	int sum = 0;
	float ave = 0;

	int arraylength = sizeof(array) / sizeof(int);

	for (int i = 0; i < arraylength; i++) {

		printf(" %d번 학생의 점수를 입력 하세요 : ", i+1);
		scanf_s("%d", &array[i]);
		
		sum += array[i];
	}

	ave = sum / arraylength;

	printf("학생 들의 총 점 수는  : %d 이고, 평균은 %.1f 입니다.", sum, ave);*/

	// 소수 찾기 

	int prime;
	int primeCheck = 0; // 소수 인지 확인 

	printf("소수 인지 확인 할 수 입력 : ");
	scanf_s("%d", &prime);

	for (int i = 1; i <= prime; i++) {
		if (prime % i == 0) {
			primeCheck++;
		}
	}

	if (primeCheck == 2) printf("해당 수는 소수 입니다.");
	else  printf("해당 수는 소수가 아닙니다.");

	// 입력 받은 수  까지의 숫자중  소수인 값 찾기 


	return 0;
}   