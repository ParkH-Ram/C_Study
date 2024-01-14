#include <stdio.h>

int main() {

	//int answer = 0;

	//for (int i = 1; i <= 10000; i++) {

	//	answer += i;
	//}

	//printf("1 ~ 50 까지 전부 더한 값은 %d 입니다 \n", answer);


	/* 과목 받고 평균 내기 */

	//int score;
	//int subject = 0;
	//int check = 0;
	//double average = 0;

	//printf("몇개의 과목을 입력 받을 건가요? ");
	//scanf_s("%d", &subject);


	//printf("각 과목의 점수를 입력하세요 \n");
	//for (int i = 1; i <= subject; i++) {
	//	printf("과목 %d : ", i);
	//	scanf_s("%d", &score);

	//	average += score;
	//	check++;
	//}

	//printf("총 점수는 %d 이고 평균은 %.2f 입니다.", (int)average, average / check);



	/* 과목 수 입력 받고 평균 내기* /
	//int score;
	//int subject = 0;
	//int check = 0;
	//double average = 0;

	//printf("몇개의 과목을 입력 받을 건가요? ");
	//scanf_s("%d", &subject);


	//printf("각 과목의 점수를 입력하세요 \n");
	//for (int i = 1; i <= subject; i++) {
	//	printf("과목 %d : ", i);
	//	scanf_s("%d", &score);

	//	average += score;
	//	check++;
	//}

	//printf("총 점수는 %d 이고 평균은 %.2f 입니다.", (int)average, average / check);
	


	/* break 문 */

	int userAnswer;

	printf("컴퓨터가 생각한 숫자를 입력 \n");

	for (;;) {
		scanf_s("%d", &userAnswer);

		if (userAnswer == 15) {
			printf("맞네욥 \n");
			break;
		}
		else  printf("틀렸네요 다시 입력 하소 \n");		
	}

	/* continue 문 */
	
	// 5의 배수를 제외한 숫자 출력

	for (int i = 1; i <= 100; i++) {
		
		if (i % 5 == 0) continue;

		printf("%d ", i);
	}
	printf("\n");

	/* 이중 for 문 */

	// 구구단

	// 2단 부터 9단 까지 반복하는 for 문 시작 ( 외부 )
	for (int i = 2; i <= 9; i++) {

		// 현재 출력할 i 단 출력
		printf("%d단 \n", i);

		// 1 부터 9까지 반복하는 for 문 시작 ( 내부 )
		for (int j = 1; j <= 9; j++) {

			// i 단 과 숫자 j  단 * 숫자 를 출력 
			printf("%d * %d = %d \n", i, j, i * j);
		}
	}

	/* while 문 */

	int whileInt = 1, sum=0;

	
	while (whileInt <= 100) { // 조건식

		sum += whileInt; // 명령

		whileInt++;		// 증감

	}
	printf("%d \n", sum);

	
	// n 줄인 삼각형 출력 ( n은 입력 받음 )




	// n 줄인 역삼각형 삼각형 출력 ( n은 입력 받음 )




	return 0;
}