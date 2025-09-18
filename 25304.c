#include <stdio.h>

int main()
{
    int X , N, a, b, sum =0;

    scanf("%d %d", &X, &N);
    for(int i = 1; i <= N; i++)
    {
        scanf("%d %d", &a, &b);
        sum += a*b;
    }
    if (X == sum)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    
    return 0;
}