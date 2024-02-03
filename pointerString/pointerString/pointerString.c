#include <stdio.h>
#include <string.h>

int main(void) {

	//배열을 이용한 문자열 처리 

	char str[] = "apple"; // 배열을 이용한 처리  -> 복사 

	printf("%s\n", str);

	for (int i = 0; str[i] != '\0'; i++) {  // null 만나기전까지 
		
		str[i] -= 32; // 대문자로 변환
	}

	printf("%s\n", str);

	// 포인터를 이용한 문자열 처리

	char charArray[] = "hello";
	char* sp = "hello";

	printf("변경 전 문자열 : %s\n", charArray);
	printf("변경 전 포인터 문자열 : %s\n", sp);

	charArray[1] = 'E';
	//sp[1] = 'E';  오류 -> 상수는 변경 불가 


	printf("변경 후 문자열 : %s\n", charArray);

 
	// 주의할점

	// 주소 부터 널 문자까지 배열에 복사한다. 
	char str2[7] = "banana";  // 큰 따옴표를 쓰면 null 문자가 저장되고 실제 저장은 banana\0 이 저장된다.
	printf("%s\n", str2); // 길이를 6으로 해놓고 출력하면 이상하다...

	// 배열의 이름은 배열의 첫 번째 원소의 주소
	// buf  == &buf[0];
	char buf[6];
	//buf = "apple"; << 오류  주소를 변경해라는 뜻이기 때문에 불가능.
	// 문자를 복사 하려면 함수가 필요.
	strcpy(buf, "apple");

	printf("%s", buf);

	return 0;
}