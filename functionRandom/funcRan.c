#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {


	// 프로그램을 실행할 때 마다 같은 값이 저장 됨

	// srand() --> rand 함수가 가지는 재료 값을 바꿔줌  ( 시드 변경 ) 


	// 하지만 이도 값을 주기적으로 바꿔주는게 아니다.. srand 에 주기적으로 새로운 값을 넣어줘야할 필요가 있음
	// 이를 쉽게 해결하는 방법 시간으로 처리 

	unsigned int ctime  = time(NULL); // 

	printf("%d\n", ctime);
	srand(ctime);

	int randValue = (rand() % 45) + 1;


	// 입력 받은 게임 수 만큼 6개 번호 추출 로또 출력
	// 중복 제거 추가 
	
	int gameCount;
	int gameCountArray[6];

	int as =0;
	for (int i = 1; i <= 100; i += 2) {
		as += i;
		printf("%d\n", as);
	}
	

	unsigned int sTime = time(NULL);

	srand(sTime);

	printf("게임 수를 입력하세요(1~10) : ");
	scanf_s("%d", &gameCount);



	for (int i = 1; i <= gameCount; i++) {

		for (int j = 0; j <= 5; j++) {
			gameCountArray[j] = (rand() % 45) + 1;	//  랜덤 번호 입력 
			for (int k = 0; k < j; k++) {
				if (gameCountArray[j] == gameCountArray[k]) { // 중복 번호가 있다면 j를 감소 시켜 다시 뽑기
					j--;		// 중복 값을 다시 받기 위해  j 감소 
					break;	// 중복 발견하면 더 이상 반복필요 없으므로 종료하고 for int j 로 복귀 해서 다시 난수 생성
				}
			}
		}

		printf("%d번 게임 : ", i);  // 입력 받은 수만큼 게임 실행

		for (int k = 0; k <= 5; k++) {
			printf("%d ", gameCountArray[k]);
		}
		printf("\n");

	}

	return 0;
}