#include <stdio.h>

int main() {

	//int answer = 0;

	//for (int i = 1; i <= 10000; i++) {

	//	answer += i;
	//}

	//printf("1 ~ 50 ���� ���� ���� ���� %d �Դϴ� \n", answer);


	/* ���� �ް� ��� ���� */

	//int score;
	//int subject = 0;
	//int check = 0;
	//double average = 0;

	//printf("��� ������ �Է� ���� �ǰ���? ");
	//scanf_s("%d", &subject);


	//printf("�� ������ ������ �Է��ϼ��� \n");
	//for (int i = 1; i <= subject; i++) {
	//	printf("���� %d : ", i);
	//	scanf_s("%d", &score);

	//	average += score;
	//	check++;
	//}

	//printf("�� ������ %d �̰� ����� %.2f �Դϴ�.", (int)average, average / check);



	/* ���� �� �Է� �ް� ��� ����* /
	//int score;
	//int subject = 0;
	//int check = 0;
	//double average = 0;

	//printf("��� ������ �Է� ���� �ǰ���? ");
	//scanf_s("%d", &subject);


	//printf("�� ������ ������ �Է��ϼ��� \n");
	//for (int i = 1; i <= subject; i++) {
	//	printf("���� %d : ", i);
	//	scanf_s("%d", &score);

	//	average += score;
	//	check++;
	//}

	//printf("�� ������ %d �̰� ����� %.2f �Դϴ�.", (int)average, average / check);
	


	/* break �� */

	int userAnswer;

	printf("��ǻ�Ͱ� ������ ���ڸ� �Է� \n");

	for (;;) {
		scanf_s("%d", &userAnswer);

		if (userAnswer == 15) {
			printf("�³׿� \n");
			break;
		}
		else  printf("Ʋ�ȳ׿� �ٽ� �Է� �ϼ� \n");		
	}

	/* continue �� */
	
	// 5�� ����� ������ ���� ���

	for (int i = 1; i <= 100; i++) {
		
		if (i % 5 == 0) continue;

		printf("%d ", i);
	}
	printf("\n");

	/* ���� for �� */

	// ������

	// 2�� ���� 9�� ���� �ݺ��ϴ� for �� ���� ( �ܺ� )
	for (int i = 2; i <= 9; i++) {

		// ���� ����� i �� ���
		printf("%d�� \n", i);

		// 1 ���� 9���� �ݺ��ϴ� for �� ���� ( ���� )
		for (int j = 1; j <= 9; j++) {

			// i �� �� ���� j  �� * ���� �� ��� 
			printf("%d * %d = %d \n", i, j, i * j);
		}
	}

	/* while �� */

	int whileInt = 1, sum=0;

	
	while (whileInt <= 100) { // ���ǽ�

		sum += whileInt; // ���

		whileInt++;		// ����

	}
	printf("%d \n", sum);

	
	// n ���� �ﰢ�� ��� ( n�� �Է� ���� )




	// n ���� ���ﰢ�� �ﰢ�� ��� ( n�� �Է� ���� )




	return 0;
}