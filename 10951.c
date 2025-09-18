#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B;
    int *pa =NULL, *pb = NULL;
    int N =0;
    /*EOF는 end of fie의 줄임말로, 파일의 끝을 표현하기 위해 정의해 놓은 상수이다.(-1 값을 가지고 있다.)
    함수 호출의 실패나, 윈도우에서는 ctrl+z, 리눅스에서는 ctrl+d를 입력했을 경우 EOF를 반환한다.*/
    while(scanf("%d %d", &A, &B) != EOF)
    {
        N++;
        pa = (int *)realloc(pa, sizeof(int) * N);
        pb = (int *)realloc(pb, sizeof(int) * N);
        pa[N - 1] = A;
        pb[N - 1] = B;
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d\n", pa[i] + pb[i]);
    }
    free(pa);
    free(pb);
    return 0;
}