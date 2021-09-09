#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], int arr_len) {
    //temp�� �̵��� ������ ��� �����̴�.(�迭X!)
    
    int left = 0; //left�� �迭 ù��° ����� ����
    int right = arr_len - 1;  //right�� �迭 ������� ����
    while (left < right) {   //left �� right���� ���������� �ݺ��ؾ� �˸°� ������.
        int temp = arr[left];  //temp�� arr[0] ����
        arr[left] = arr[right]; //right�� left�� �����ؼ� ������
        arr[right] = temp; // �Ʊ� left���� �����ߴ� temp�� right�� ����
        left += 1;  //������ ����.
        right -= 1; //�ڷ� ����.
    }
    return arr;
}

int main() {
    int arr[4] = { 1, 4, 2, 3 };
    int arr_len = 4;
    int* ret = solution(arr, arr_len);

    printf("solution �Լ��� ��ȯ ���� {");
    for (int i = 0; i < 4; i++) {
        if (i != 0) printf(", ");
        printf("%d", ret[i]);
    }
    printf("} �Դϴ�.\n");
}