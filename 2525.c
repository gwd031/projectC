#include <stdio.h>


int main()
{

    int A =0, B =0;
    int C =0;

    scanf("%d %d", &A, &B);
    scanf("%d", &C);
    if ((A<0 || A>23) || (B<0 || B>59) || (C<0 || C>1000))
    {
        return 1;
    }
    if (B+C >=60)
    {
        A += (B+C)/60;
        B = (B+C)%60;
        if (A > 23)
    {
        A -=24;
    }
    printf("%d %d", A, B);
    }
    else
    printf("%d %d", A, B+C);
    return 0;
}