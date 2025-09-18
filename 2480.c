#include <stdio.h>

int main()
{
    int A, B, C=0;
    scanf("%d %d %d", &A, &B, &C);
    
    if (A == B && B ==C && A ==C)
        printf("%d", 10000+(A*1000));
    else if ((A == B && A != C) || (B ==C && B !=A) || (A ==C && A !=B))
    {
        int same = A;

        if(B == C && B != A) same = B;
        printf("%d", 1000+(same*100));
    }
    else if (A != B && B != C && A != C)
    {
        int max = A;
        if(B>max) max = B;
        if(C>max) max = C;
        printf("%d", max*100);
    }
    return 0;
}