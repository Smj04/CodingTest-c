#include<stdio.h>
int solution(int stones[], int stones_len) {
	int cnt = 0;
	int current = 0;
	while (current < stones_len) {
		current += stones[current];
		cnt++;
	}
	return cnt;
}
void main() {
	int stones[] = { 3,5,1,2,1,5 };
	int answer = solution(stones, 6);
	printf("%d", answer);
}