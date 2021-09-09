#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], int arr_len) {
    //temp는 이동한 변수를 담는 공간이다.(배열X!)
    
    int left = 0; //left는 배열 첫번째 방부터 시작
    int right = arr_len - 1;  //right는 배열 끝방부터 시작
    while (left < right) {   //left 가 right보다 작을때까지 반복해야 알맞게 끝난다.
        int temp = arr[left];  //temp에 arr[0] 대입
        arr[left] = arr[right]; //right를 left로 대입해서 뒤집음
        arr[right] = temp; // 아까 left값을 보관했던 temp를 right에 대입
        left += 1;  //앞으로 간다.
        right -= 1; //뒤로 간다.
    }
    return arr;
}

int main() {
    int arr[4] = { 1, 4, 2, 3 };
    int arr_len = 4;
    int* ret = solution(arr, arr_len);

    printf("solution 함수의 반환 값은 {");
    for (int i = 0; i < 4; i++) {
        if (i != 0) printf(", ");
        printf("%d", ret[i]);
    }
    printf("} 입니다.\n");
}