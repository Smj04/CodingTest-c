#include<stdio.h>
int func_a(char(*p)[20], int n) {
	return 0;
}
int func_b(char* p[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%s\n", p[i]);
	}
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < 20; k++)
			printf("%c", p[i][k]);
	}printf("\n");
	
	return 0;
}
int main(){
	char titles[5][20] = { "first", "second", "third","fourth","fift" };
	func_a(titles, 5);

	char* par[5] = { titles[0], titles[1], titles[2], titles[3], titles[4] };
	func_b(par, 5);
	return 0;
}