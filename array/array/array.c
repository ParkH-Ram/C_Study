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

	if (primeCheck == 2) printf("해당 수는 소수 입니다. \n");
	else  printf("해당 수는 소수가 아닙니다. \n");

	// 입력 받은 점수를 내림 차순 정렬 

	int array[5];
	int temp = 0;

	int arrayLength = sizeof(array) / sizeof(int);

	for (int i = 0; i < arrayLength; i++) {
		printf("%d번 학생의 점수를 입력 하세요(1 ~ 100) : ", i + 1);
		scanf_s("%d", &array[i]);
	}

	for (int i = 0; i < arrayLength; i++) {

		// -1 안하면 예외 뜸 아웃오브 인덱스
		for (int j = 0; j < arrayLength - 1; j++) {

			// 비교 // 입력받은 애 보다 작은 애가 있으면 입력 받은 애를 뒤로 옮기기 위해 
			if (array[j] < array[j + 1]) {
				// 헷갈려서 이해하기 위해 출력
				printf("%d 바꾸기 전 값 출력 array[j] = %d, array[j+1] = %d \n",i , array[j], array[j + 1]);
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				// 헷갈려서 이해하기 위해 출력
				printf("%d 바꾼 후 값 출력 array[j] = %d, array[j+1] = %d \n",i, array[j], array[j + 1]);
			}
		}

	}

	printf("내림 차순 정렬 값은 : ");

	for (int i = 0; i < arrayLength; i++) {
		printf("%d ", array[i]);
	}

	printf("\n");

	// 입력 받은 점수를 막대 그래프로 나타내기

	int graphArray[5];
	int graphArrayLength = sizeof(graphArray) / sizeof(int);



	for (int i = 0; i < graphArrayLength; i++) {
		printf("%d번 학생의 점수를 입력 하세요(1 ~ 100) : ", i + 1);
		scanf_s("%d", &array[i]);
	}

	for (int i = 0; i < graphArrayLength; i++) {

		printf("%d번 학생 : ", i+1);

		for (int j = 1; j <= 100; j++) {
			printf("*");
			if (array[i] == j) break;
		}
		printf("\n");
	}


return 0;
}