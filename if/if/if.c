#include <stdio.h>

int main() {

	//int i;

	//printf("�Է��ϰ� ���� ���ڸ� �Է� �ϼ��� ! : ");
	//scanf_s("%d", &i);

	//if (i == 7) printf("����� ���� �Դϴ�. \n");

	//else printf("���ڸ� �ٽ� ������ ������... \n");

	//// ������
	//// ��ǻ�Ϳ��� 0���� � ���� ������ ���� ���� �Ǿ� �ֱ� ������.. �׻� �Ű� ��� �Ѵ�.

	//double di, dj;

	//printf("������ ���� �� ���� �Է��ϼ��� : ");
	//scanf_s("%lf %lf", &di, &dj);


	//if (dj == 0) {
	//	printf("0���� ���� �� �����ϴ�. ");
	//	return 0;
	//}

	//else printf("%f �� %f �� ���� ����� ? : %f  \n", di, dj, di / dj);


	// ������ if ���� 
	//int score;

	//printf("������ �Է� �ϼ��� : ");
	//scanf_s("%d", &score);

	//if (score >= 90) {
	//	printf("�հ� �Դϴ�. \n");
	//	return 0;
	//}

	//else printf("���հ� �Դϴ�. ����� ������ %d �Դϴ�. \n", score);

	// ���� ����

	float average;
	float math, korean, programming;

	printf("���� ������ �Է��ϼ��� : ");
	scanf_s("%f", &math);

	printf("���� ������ �Է��ϼ��� : ");
	scanf_s("%f", &korean);

	printf("���α׷��� ������ �Է��ϼ��� : ");
	scanf_s("%f", &programming);
	
	average = (math + korean + programming) / 3;

	if (average >= 90) {
		printf(" ����� ����� 90�� �̻��Դϴ�. �� �ϼ̽��ϴ�.");
		return 0;
	}
	else if (average < 30) {
		printf("����� ����� %f �� �Դϴ�. ����ϼ���.", average);
		return 0;
	}
	else { 
		printf("����� ������ %f �� �Դϴ�. �׷��� ������ �ƴϳ׿�", average);
	}


	return 0;
}