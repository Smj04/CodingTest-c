#include<stdio.h>
int main() {
	int arr[3][4] = { 0 };
	printf("arr�� ũ�� : %d \n", sizeof(arr));
	printf("arr[0]�� ũ�� : %d \n", sizeof(arr[0]));
	printf("arr[1]�� ũ�� : %d \n", sizeof(arr[1]));
	printf("arr[2]�� ũ�� : %d \n", sizeof(arr[2]));
	printf("arr[2][3]�� ũ�� : %d \n", sizeof(arr[2][3]));
	char ch = '9';
	int num = ch - 48;
	printf("%d\n", num);
	printf("%d\n", ch);
}
