#include <stdio.h>

int main()
{
    int N =0, M=0;
    int a =0, b =0, c=0;
    int arr[101] ={};
    scanf("%d %d", &N, &M);
    for(int i = 1; i <= M; i++)
       {
        scanf("%d %d %d", &a, &b, &c);
        for(int j = a; j <= b; j++)
            arr[j] = c;
       }
    for(int k = 1; k <= N; k++)
        printf("%d ", arr[k]);
    return 0;
}