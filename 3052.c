#include <stdio.h>

int main()
{

    int n =0;
    int count = 10;
    int na[11] = {0};

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &n);
        na[i] = n % 42;
    }
    for (int j = 0; j < 10; j++)
    {
        for (int k = 0; k < j; k++)
        {
            if (na[j] == na[k])
            {
                count--;
                break;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}

#include <stdio.h>  

int main() {
    int check[42] = {0};
    int n, cnt = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        check[n % 42] = 1; // 나머지에 해당하는 인덱스를 1로 체크
    }

    for (int i = 0; i < 42; i++) {
        if (check[i] == 1)
            cnt++; // 등장한 나머지 개수 세기
    }

    printf("%d\n", cnt);
    return 0;
}