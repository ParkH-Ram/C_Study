﻿#include <stdio.h>

int main(void) {

	/*임의의 실수에서 소수점 이하 두자리수만 추출하여 정수형 변수에 대입하라. 예를들어 사용자로부터
	입력받은 실수 f 가 12.3456이라면 34만 추출한다. 이때 반올림은 고려하지 않아도 상관없다. f가 
	달러 단위의 화폐 액수라고할 때 센트 단위만 추출해내는 경우라고 생각하면 된다. 다음 ????
	자리에 적합한 연산식을 작성하는 문제이다.
	*/

	int i;
	float f;

	printf("실수를 입력하시오 : ");
	scanf_s("%f", &f);

	//   1234    % 100 = 34    / = 12 
	i = (int)(f * 100) % 100;  // f * 100 하면 1234.56 인데 형변환 정수로 하면 .56이 사라지므로  1234가 된다.

	printf("i = %d\n", i);



	return 0;
}