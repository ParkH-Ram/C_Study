#include <stdio.h>

int main(void) {

	//문자열의 길이를 리턴 하는 함수  - 널문자는 포함하지 않는다.

	char str[20];

	int strLength;

	printf("입력 : ");
	fgets(str, sizeof(str), stdin);

	printf("%s", str);

	strLength = strlen(str);

	printf("글자 수는 : %d\n", strLength);
	printf("글자수 2 :  %d\n", sizeof(str));

	// 문자열 복사 strcpy()
	
	strcpy(str, "hello world");
	printf("%s\n", str);

	// 문자열 연결 strcat()
	char a[8];
	char b[8];
	
	strcpy(a, "hi ");
	strcpy(b, "mom");

	strcat(a, b);
	printf("%s\n", a);

	// 문자 크기 비교 strchr()



	return 0;
}