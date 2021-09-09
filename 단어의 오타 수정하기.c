#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(char* words[], int words_len, char* word) {	//words[]는 2차원 배열
	int count = 0;
	
	for (int i = 0; i < words_len; i++) { //3번
		for(int j =0; j< strlen(word); j++){
		if(words[i][j] != word[j]) //서로 다르면 count증가해서 틀린 코드갯수 도출
			count++;
		}
		
	}


	return count;
}
int main() {
	char* words[3] = { "CODE", "COED", "CDEO" };
	int words_len = 3;
	char* word = "CODE";
	int ret = solution(words, words_len, word);

	printf("solution 함수의 반환 값은 %d 입니다. \n", ret);

}