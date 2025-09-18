#include <stdio.h>

int main()
{
    int N =0, M=0;
    int a =0, b =0;
    int arr[101] ={};
    int temp; 
    scanf("%d %d", &N, &M);
    for(int i = 1; i <= N; i++)
        arr[i] = i;
    for(int d = 1; d <= M; d++)
       { 
        scanf("%d %d", &a, &b);
        for(int j = 1; j < 2; j++)
            temp =arr[a];
            arr[a] = arr[b];
            arr[b] = temp;
       }
    for(int k = 1; k <= N; k++)
        printf("%d ", arr[k]);
    return 0;
}