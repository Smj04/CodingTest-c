#include < stdio.h>
int main(void) {

	int score;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &score);

	if (score >= 90) {
		printf("��");
	}

	else if (score >= 80 && score < 90) {
		printf("��");
	}
	else if (score >= 70 && score < 80) {
		printf("��");
	}
	else {
		printf("��");
	}



}