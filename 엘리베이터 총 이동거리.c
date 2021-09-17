#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int solution(int floors[], int floors_len) {
    int dist = 0;
    for (int i = 1; i < floors_len; ++i) { //1������ �����ϹǷ� i=1      1,2,3,4
        if (floors[i] >= floors[i - 1])   //1,2,3,4 >= 4  -> ��
            dist += floors[i] - floors[i - 1]; //dist += 1,2,3,4 - 4,3,2,1
        else
            dist += floors[i - 1] - floors[i];  // dist += 4,3,2,1 - 1,2,3,4
    }
    return dist;
}

int main() {
    int floors[5] = { 1, 2, 5, 4, 2 };
    int floors_len = 5;
    int ret = solution(floors, floors_len);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}