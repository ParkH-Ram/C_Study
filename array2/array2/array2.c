#include <stdio.h>

int main(void) {

	int array2[3][2];

	// 가로 길이
	int array2Col = sizeof(array2[0]) / sizeof(int);

	// 세로 길이 
	int array2Row = sizeof(array2) / sizeof(array2[0]);

	for (int i = 0; i < array2Row; i++) {

		for (int j = 0; j < array2Col; j++) {

			if (j == 0) {
				printf("%d번 학생의 국어 점수를 입력 하세요 : ", i+1);
				scanf_s("%d", &array2[i][j]);
			}
			else {
				printf("%d번 학생의 수학 점수를 입력 하세요 : ", i + 1);
				scanf_s("%d", &array2[i][j]);
			}

		}
		
	}

	for (int i = 0; i < array2Row; i++) {
		
		printf("%d번 학생의 국어 점수 : %d, 수학 점수 %d \n", i + 1, array2[i][0], array2[i][1]);

	}

	return 0;
}