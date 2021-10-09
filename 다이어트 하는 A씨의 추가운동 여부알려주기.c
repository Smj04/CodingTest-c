#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int solution(int calorie[], int calorie_len) {
   
    int answer = 0;
    for (int i = 0; i < calorie_len; i++) {
        if (calorie[i+1] > calorie[i]  ) //뒤값이 앞에보다 큰날      
            answer -= calorie[i];
        else
            answer = calorie[i];
    }
    return answer;
}

int main() {
    int calorie[] = { 713, 665, 873, 500, 751 };
    int ret = solution(calorie, 5);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}