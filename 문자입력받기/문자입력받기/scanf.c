#include <stdio.h>
int main() {

	// �����µ��� ȭ���� �ٲٱ� 
	double celsius;  // ����

	printf("���� �µ��� ȭ���� �ٲ��ִ� ���α׷� �Դϴ�. \n");
	printf("���� �µ��� �Է� �ϼ��� : ");
	scanf_s("%lf", &celsius);    // lf �� long float  �� double�� �Է� �ްڴ�.

	printf("���� %f ���� ȭ���� %f �� �Դϴ�. \n", celsius, 9 * celsius / 5 + 32);
		

	// scanf �� ����
	
	char ch;  // ����

	short sh; // ����
	int i;
	long lo;

	float fl;   // �Ǽ�
	double du;

	printf("char �� ���� �Է� : ");
	scanf_s(" %c", &ch, 1);   // ���� �� ������ �� �����ϱ� ���� %c �տ� ������ ��ĭ �ְ� �ۼ��Ѵ�. 

	printf("short �� ���� �Է� : ");
	scanf_s("%hd", &sh);

	printf("int �� ���� �Է� : ");
	scanf_s("%d", &i);

	printf("long �� ���� �Է� : ");
	scanf_s("%ld", &lo);

	printf("float �� ���� �Է� : ");
	scanf_s("%f", &fl);

	printf("double �� ���� �Է� : ");
	scanf_s("%lf", &du);

	printf("char : %c  , short : %d ,   int : %d", ch, sh, i);

	printf("long : %ld  , float : %f ,   double : %lf", lo, fl, du);


	return 0;
}