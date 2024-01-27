#include <stdio.h>

// 포인터 
int main(void) {

	// int* p or int *p 로 지정 이는 p를 int형 데이터의 주소값을 저장한다는 뜻

	// 포인터에 값을 집어 넣는 &연산자 ( 단항(unary) 연산자 )
	// 단항 & 연산자는 피연산자의 주소값을 불러온다.

	int* p;
	int a;

	// 포인터 p에 a의 주소값을 넣겠다.
	p = &a;

	a = 2;

	printf(" a에 들어 있는 값 : %d \n", a);

	// 단항 * 연산자는 포인터 주소 안에 들어있는 값을 불러 온다.
	printf(" p의 값은 : %d \n", *p);
	printf(" a의 주소값은 : %p \n", &a);
	printf(" p의 주소값은 : %p \n", &p);
	
	p = NULL;

	printf("p의 값은 : %d  \n", *p);
	


	int* s;
	int b;

	// 포인터 s 에 b의 주소를 담고
	s = &b;

	// 포인터 s 에 있는 주소에 3을 넣으면 
	*s = 3;

	printf(" *s의 값은 : %d \n", *s);
	printf(" b의 값은 : %d \n", b);
	printf(" s의 값은 : %p \n", s);
	printf(" s의 의 원래 주소는? : %p \n", &s);

	// 단항 연산자 *를 사용해 변수의 값도 바꿀 수 있다.
	// 즉 변수를 사용하지 않고 변수의 값을 포인터로 바꿀 수 있음
	// 하지만 포인터도 변수이기 때문에 포인터 s 의 주소는 b의 주소와 다르다. 

	


	return 0;
}