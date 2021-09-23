//x받은 학생의 번호 오름차순
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int* solution(char* schedule[], int schedule_len) {         
    int x_count = 0;
    int* answer = (int*)malloc(sizeof(int) * x_count);
    for (int i = 0; i < 10; i++){
        if (schedule[i][0] == 'X')         
            x_count++;                          
    }
    for (int i = 0, j = 0; i < 10; i++) {
        if (schedule[i][0] == 'X') {
            answer[j++] = i+1;
        }
    }

    

  
    return answer;
}
int main() {        
    char* schedule[] = { "O", "X", "X", "O", "O", "O", "X", "O", "X", "X" };            //1번이 X니까 결과는 2이므로 answer++;
    int* ret = solution(schedule, 10);

    printf("solution 함수의 반환 값은 ");
    for (int i = 0; i < 5; i++)
        printf("%d, ", ret[i]); 
    printf("입니다.")
   ;

}