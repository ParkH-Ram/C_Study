#include <stdio.h>

int main() {

	int answer = 0;

	for (int i = 1; i <= 10000; i++) {

		answer += i;
	}

	printf("1 ~ 50 까지 전부 더한 값은 %d 입니다 \n", answer);


	// 과목 받고 평균 내기
	int score;
	int subject = 0;
	int check = 0;
	double average = 0;

	printf("몇개의 과목을 입력 받을 건가요? ");
	scanf_s("%d", &subject);


	printf("각 과목의 점수를 입력하세요 \n");
	for (int i = 1; i <= subject; i++) {
		printf("과목 %d : ", i);
		scanf_s("%d", &score);

		average += score;
		check++;
	}

	printf("총 점수는 %d 이고 평균은 %.2f 입니다.", (int)average, average / check);
		
	// 과목 받고 평균 내기
	int score;
	int subject = 0;
	int check = 0;
	double average = 0;

	printf("몇개의 과목을 입력 받을 건가요? ");
	scanf_s("%d", &subject);


	printf("각 과목의 점수를 입력하세요 \n");
	for (int i = 1; i <= subject; i++) {
		printf("과목 %d : ", i);
		scanf_s("%d", &score);

		average += score;
		check++;
	}

	printf("총 점수는 %d 이고 평균은 %.2f 입니다.", (int)average, average / check);
		


	return 0;
}