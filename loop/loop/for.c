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

	int n;

	printf("원하는 숫자를 입력 하세요 1 ~ 10 \n");
	scanf_s("%d", &n);

	printf("  직각 삼각형 \n");
	// n 줄인 직각 삼각형 출력 ( n은 입력 받음 )
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	printf("\n \n \n  역 직각 삼각형 \n");
	// n 줄인 역 직각 삼각형 삼각형 출력 ( n은 입력 받음 )
	for (int i = n; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}


	printf("\n \n \n   정삼각형 \n");

	// i는 현재 줄(행)을 나타냄
	for (int i = 1; i <= n; i++) {  // 삼각형의 높이만큼 반복
		// j는 각 줄에서 별 앞에 오는 공백을 출력하기 위한 변수
		
		// n = 5;  일 때 i = 1 이면 빈공간 4개, i = 2 면 빈공간 3개 출력 
		for (int j = i; j < n; j++ ) {  // 현재 줄보다 아래의 줄 수만큼 공백을 출력
			printf(" ");
		}
		// k는 각 줄에서 별을 출력하기 위한 변수

		for (int k = 1; k <= i*2-1; k++) {  // 현재 줄의 번호*2-1만큼 별을 출력
			printf("*");
		}
		printf("\n");  // 각 줄을 출력한 후 줄바꿈
	}

	
	printf("\n \n \n  역 정삼각형 \n");
		
	// i는 현재 줄(행)을 나타냄
	for (int i = n; i >= 1; i--) {  // 삼각형의 높이만큼 반복
	
	
		for (int j = i; j < n; j++) {  // 현재 줄보다 아래의 줄 수만큼 공백을 출력
			printf(" ");
		}

		for (int k = 1; k <= i * 2 - 1; k++) {  // 현재 줄의 번호*2-1만큼 별을 출력
			printf("*");
		}

		printf("\n");  // 각 줄을 출력한 후 줄바꿈
	}


	return 0;
}