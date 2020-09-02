/**
 * @param int i j ch
 * @return cnt[10]
 * 
 * @description example numeric character counting 
 * 
 * @version  0.29.0
 * @author 깔끔한청년
 * @seecom  C/C++
 * @Since   2020.07.03
 */

#include <stdio.h>

int main(void)
{
    int i, j, ch;
    int cnt[10] = {0}; //숫자문자의등장횟수

    while ((ch = getchar()) != EOF)
        if (ch >= '0' && ch <= '9')
            cnt[ch - '0']++;

    puts("숫자문자의 등장 횟수");
    for (i = 0; i < 10; i++)
    {
        printf("'%d ':", i);
        for (j = 0; j < cnt[i]; j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}