#include<stdio.h>
int func_c(int arr[], int arr_size) {
	int ret = -1;
	for (int i = 0; i < arr_size; ++i) 
		if (ret < arr[i])
			ret = arr[i];
		return ret;
	
}

	int solution(int visitor[], int n) {
		int max_first = func_c(visitor, n);
		int* visitor_removed = func_a(visitor, n, max_first);
		int max_second = func_c(visitor_removed, n - 1);
		int answer = func_b(max_first, max_second);
		return answer;
	}
	int main() {
		int ans; 
		int v[] = { 4,7,2,9,3 };
		ans = solution(v, 5);
		printf("%d", ans);
	}