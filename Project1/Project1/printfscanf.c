#include <stdio.h> 

int main( void ) {

	int add = 3 + 7;

	printf("%d \n", add);

	printf("변수 사용안함  3 + 7 = %d\n", add);

	
	printf("%d\n",  30 % 70); 


	int num;
	printf("값을 입력하세요  : ");
	scanf_s("%d", &num);
	printf("입력 받은 값은 %d 입니다 \n", num );
	

	int one, two;
	printf("두 개의 정수를 입력 하세요 : ");
	scanf_s("%d %d", &one, &two);
	printf("입력 받은 정수 값은 %d, %d 입니다 \n ", one, two);

	// 문자 및 문자열

	char c = 'A';
	printf("%c\n", c) ;

	char str[256];  // 문자열 지정 
	scanf_s("%s", str, sizeof(str));   // 문자열은 입력 받을 변수 앞에 & 생략,  크기 명시 해줘야 함 
	fgets(str, sizeof(str), stdin);
	printf("입력 받은 문자열은 : %s\n", str);
	
	
	return 0;
}
