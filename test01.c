#include<stdio.h>

int func_a(char p[][20], int n) {
	
	for (int i = 0; i < n; i++) {
		printf("%s\n", p[i]);
	}
		for (int i = 0; i < n; i++) {
			for (int k = 0; k < 20; k++) {
				printf("%c", p[i][k]);
			}
			printf("\n");
		}
		return 0;
	}
int main() {
	char titles[3][20] = { "first", "second","third" };
	func_a(titles, 3);

}