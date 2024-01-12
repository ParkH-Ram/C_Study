#include <stdio.h>
int main() {

	// 섭씨온도를 화씨로 바꾸기 
	double celsius;  // 섭씨

	printf("섭씨 온도를 화씨로 바꿔주는 프로그램 입니다. \n");
	printf("섭씨 온도를 입력 하세요 : ");
	scanf_s("%lf", &celsius);    // lf 는 long float  즉 double을 입력 받겠다.

	printf("섭씨 %f 도는 화씨로 %f 도 입니다. \n", celsius, 9 * celsius / 5 + 32);
		

	// scanf 총 정리
	
	char ch;  // 문자

	short sh; // 정수
	int i;
	long lo;

	float fl;   // 실수
	double du;

	printf("char 형 변수 입력 : ");
	scanf_s(" %c", &ch, 1);   // 개행 등 공백을 을 무시하기 위해 %c 앞에 공백을 한칸 주고 작성한다. 

	printf("short 형 변수 입력 : ");
	scanf_s("%hd", &sh);

	printf("int 형 변수 입력 : ");
	scanf_s("%d", &i);

	printf("long 형 변수 입력 : ");
	scanf_s("%ld", &lo);

	printf("float 형 변수 입력 : ");
	scanf_s("%f", &fl);

	printf("double 형 변수 입력 : ");
	scanf_s("%lf", &du);

	printf("char : %c  , short : %d ,   int : %d", ch, sh, i);

	printf("long : %ld  , float : %f ,   double : %lf", lo, fl, du);


	return 0;
}