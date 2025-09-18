#include <stdio.h>
#include <stdlib.h>
int main() {
    int A = 0, B = 0;
    int *pa = NULL;
    int *pb = NULL;
    int N = 0;

    while (1) {
        scanf("%d %d", &A, &B);
        if (A == 0 && B == 0)
            break;
        // 입력이 들어올 때마다 배열 크기 1씩 증가 이미 할당된 공간의 크기를 바꿀 때 사용(realloc).
        pa = (int *)realloc(pa, sizeof(int) * (N + 1));
        pb = (int *)realloc(pb, sizeof(int) * (N + 1));
        if (pa == NULL || pb == NULL) {
            // 메모리 할당 실패 시 종료
            return -1;
        }
        pa[N] = A;
        pb[N] = B;
        N++;
    }
    for (int i = 0; i < N; i++) {
        printf("%d\n", pa[i] + pb[i]);
    }
    free(pa);
    free(pb);
    return 0;
}