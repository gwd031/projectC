#include <stdio.h>
#include <string.h>
int main()
{
    int cnt[26] = {0,};
    int max = -1;
    char res;
    char word[1000001] = {};
    scanf("%s", word);

    int t = strlen(word);
    for (int i = 0; i < t; i++)
    {
        if (word[i] >= 'a' && word[i] <= 'z')                                                  
           word[i] = word[i]- 'a' + 'A';
        if (++cnt[word[i] - 'A'] > max)
        {
            max = cnt[word[i] - 'A'];
            res = word[i];
        }
    }
    int check = 0;
    for (int i = 0; i < 26; i++)
    {
        if(max == cnt[i])
        check++;
    }
    if(check == 1)
    printf("%c", res);
    else
    printf("?");
    return 0;
}