#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i, j, k = 1;

	int ar[5][5];

	for (i = 0; i < 5; i++) {

		for (j = 0; j < 5; j++) {
			ar[j][i] = k++;
		}
	}

	for (i = 0; i < 5; i++) {

		for (j = 0; j < 5; j++) {
			printf("%5d", ar[i][j]);  // %5d �� ������� �������� ä��� ��
		}
		printf("\n");
	}


	return 0;
}