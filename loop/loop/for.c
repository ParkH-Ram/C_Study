#include <stdio.h>

int main() {

	int answer = 0;

	for (int i = 1; i <= 10000; i++) {

		answer += i;
	}

	printf("1 ~ 50 ���� ���� ���� ���� %d �Դϴ� \n", answer);


	// ���� �ް� ��� ����
	int score;
	int subject = 0;
	int check = 0;
	double average = 0;

	printf("��� ������ �Է� ���� �ǰ���? ");
	scanf_s("%d", &subject);


	printf("�� ������ ������ �Է��ϼ��� \n");
	for (int i = 1; i <= subject; i++) {
		printf("���� %d : ", i);
		scanf_s("%d", &score);

		average += score;
		check++;
	}

	printf("�� ������ %d �̰� ����� %.2f �Դϴ�.", (int)average, average / check);
		
	// ���� �ް� ��� ����
	int score;
	int subject = 0;
	int check = 0;
	double average = 0;

	printf("��� ������ �Է� ���� �ǰ���? ");
	scanf_s("%d", &subject);


	printf("�� ������ ������ �Է��ϼ��� \n");
	for (int i = 1; i <= subject; i++) {
		printf("���� %d : ", i);
		scanf_s("%d", &score);

		average += score;
		check++;
	}

	printf("�� ������ %d �̰� ����� %.2f �Դϴ�.", (int)average, average / check);
		


	return 0;
}