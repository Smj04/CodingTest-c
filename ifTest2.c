#include < stdio.h>
int main(void) {

	int score;

	printf("점수를 입력하시오 : ");
	scanf_s("%d", &score);

	if (score >= 90) {
		printf("수");
	}

	else if (score >= 80 && score < 90) {
		printf("우");
	}
	else if (score >= 70 && score < 80) {
		printf("미");
	}
	else {
		printf("양");
	}



}