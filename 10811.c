#include <stdio.h>

int main()
{
    int N =0, M=0;
    int i =0, j =0, temp =0;
    int arr[101] = {0};
    scanf("%d %d", &N, &M);

    for (int x = 1; x <= N; x++)
    {
        arr[x] = x;
    }
    for(int y = 1; y <= M; y++)
    {
        scanf("%d %d", &i, &j);
        int left = i, right = j;
        while (left < right)
        {
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
    for(int l = 1; l <= N; l++)
    {
        printf("%d ", arr[l]);
    }
    return 0;
    }

    #include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int N, M;
    int arr[101] = {0};
    scanf("%d %d", &N, &M);

    for (int x = 1; x <= N; x++)
        arr[x] = x;

    for (int y = 1; y <= M; y++)
    {
        int i, j;
        scanf("%d %d", &i, &j);
        for (int l = 0; l < (j - i + 1) / 2; l++)
            swap(&arr[i + l], &arr[j - l]);
    }

    for (int l = 1; l <= N; l++)
        printf("%d ", arr[l]);
    return 0;
}