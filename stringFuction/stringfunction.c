#include <stdio.h>

int main(void) {

	//���ڿ��� ���̸� ���� �ϴ� �Լ�  - �ι��ڴ� �������� �ʴ´�.

	char str[20];

	int strLength;

	printf("�Է� : ");
	fgets(str, sizeof(str), stdin);

	printf("%s", str);

	strLength = strlen(str);

	printf("���� ���� : %d\n", strLength);
	printf("���ڼ� 2 :  %d\n", sizeof(str));

	// ���ڿ� ���� strcpy()
	
	strcpy(str, "hello world");
	printf("%s\n", str);

	// ���ڿ� ���� strcat()
	char a[8];
	char b[8];
	
	strcpy(a, "hi ");
	strcpy(b, "mom");

	strcat(a, b);
	printf("%s\n", a);

	// ���� ũ�� �� strchr()



	return 0;
}