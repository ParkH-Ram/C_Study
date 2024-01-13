#include <stdio.h>

int main() {

	//int i;

	//printf("입력하고 싶은 숫자를 입력 하세요 ! : ");
	//scanf_s("%d", &i);

	//if (i == 7) printf("행운의 숫자 입니다. \n");

	//else printf("숫자를 다시 생각해 보세요... \n");

	//// 나누기
	//// 컴퓨터에서 0으로 어떤 수를 나누는 것은 금지 되어 있기 때문에.. 항상 신경 써야 한다.

	//double di, dj;

	//printf("나누고 싶은 두 수를 입력하세요 : ");
	//scanf_s("%lf %lf", &di, &dj);


	//if (dj == 0) {
	//	printf("0으로 나눌 수 없습니다. ");
	//	return 0;
	//}

	//else printf("%f 를 %f 로 나눈 결과는 ? : %f  \n", di, dj, di / dj);


	// 간단한 if 실험 
	//int score;

	//printf("점수를 입력 하세요 : ");
	//scanf_s("%d", &score);

	//if (score >= 90) {
	//	printf("합격 입니다. \n");
	//	return 0;
	//}

	//else printf("불합격 입니다. 당신의 점수는 %d 입니다. \n", score);

	// 성적 계산기

	float average;
	float math, korean, programming;

	printf("수학 점수를 입력하세요 : ");
	scanf_s("%f", &math);

	printf("국어 점수를 입력하세요 : ");
	scanf_s("%f", &korean);

	printf("프로그래밍 점수를 입력하세요 : ");
	scanf_s("%f", &programming);
	
	average = (math + korean + programming) / 3;

	if (average >= 90) {
		printf(" 당신의 평균은 90점 이상입니다. 잘 하셨습니다.");
		return 0;
	}
	else if (average < 30) {
		printf("당신의 평균은 %f 점 입니다. 노력하세요.", average);
		return 0;
	}
	else { 
		printf("당신의 점수는 %f 점 입니다. 그래도 낙제는 아니네요", average);
	}


	return 0;
}