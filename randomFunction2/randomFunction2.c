#include <stdio.h>
#include <stdlib.h>

int main(void) {

	// ���̽��� ����

	unsigned int sTime = time(NULL);
	srand(sTime);  // �õ� �ʱ�ȭ 

	int oneNumber = rand() % 10;
	int twoNumber = rand() % 10;
	int threeNumber = rand() % 10;

	

	for (int i = 0; i <= 9; i++) {
		int  strike = 0, ball = 0;
		int userOne, userTwo, userThree;

		printf("��ȣ�� �Է��ϼ���(0~9) ex)1 2 3\n");
		scanf_s("%d %d %d", &userOne, &userTwo, &userThree);

		if (userOne == oneNumber) strike++; 
		else if (userOne == twoNumber || userOne == threeNumber) ball++;

		if (userTwo == twoNumber) strike++;
		else if (userTwo == oneNumber || userTwo == threeNumber) ball++;

		if (userThree == threeNumber) strike++;
		else if (userThree == twoNumber || userThree == oneNumber) ball++;


		if (userOne == oneNumber && userTwo == twoNumber && userThree == threeNumber) {
			printf("����� �¸��Դϴ�. ������ �������ϴ�.");
			break;
		}
		
	}


	return 0;
}