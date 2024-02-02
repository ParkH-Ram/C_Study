#include <stdio.h>

int main(void) {

	// 문자열 상수

	// 문자열과 포인터 배열


	char a[5] = "apple";
	// 문자열의 실제 저장은 apple + null 총 6byte 가 저장된다.

	printf("%s \n", a);  // %s 의 뜻은 주소부터 null 문자 전까지 

	printf("%s\n", "apple");
	printf("%s\n", "apple" + 2);
	printf("%s\n", a + 2);  // 문자열 시작 부터 2만큼 출력 즉 a[2]인 p 부터 출력 됨
	printf("%s\n", a + 5); 

	return 0;
}