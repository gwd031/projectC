#define _CRT_SECURE_NO_WARNINGS
#include  <stdio.h>
#include  <stdlib.h>
int main() {

    int *pa;
    int *pb;
    int a, b;
    int N =0;
    scanf("%d", &N);
    pa = (int *) malloc(sizeof(int) * N);
    pb = (int *) malloc(sizeof(int) * N);
    if (pa == NULL || pb == NULL)
        {
            return -1;
        }
    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &a, &b);
        pa[i] = a;
        pb[i] = b;
    }
    for (int i = 0; i < N; i++)
    {
        printf("Case #%d: %d + %d = %d\n", i + 1, pa[i], pb[i], pa[i] + pb[i]);
    }

    free(pa);
    free(pb);
    
    return 0;
}