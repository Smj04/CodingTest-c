#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(char* words[], int words_len, char* word) {	//words[]�� 2���� �迭
	int count = 0;
	
	for (int i = 0; i < words_len; i++) { //3��
		for(int j =0; j< strlen(word); j++){
		if(words[i][j] != word[j]) //���� �ٸ��� count�����ؼ� Ʋ�� �ڵ尹�� ����
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

	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�. \n", ret);

}