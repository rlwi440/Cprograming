/**
 * @param int i
 * @return cnt[i]
 * 
 * @description  A program that counts and prints the number of numerc characters  
 * 
 * @version 0.29.0
 * @author 깔끔한청년
 * @seecom  C/C++
 * @Since 2020.07.04
 */

#include <stdio.h>

int main(void)
{
    int i;
    int ch;
    int c_count = 0;   //모든 문자의 개수
    int n_contt = 0;   //줄 바꿈 개수
    int cnt[10] = {0}; //숫자문자의 등장횟수

    while ((ch = getchar()) != EOF)
    {
        c_count++;
        if (ch == '\n')
            n_contt++;
        else if (ch >= '0' && ch <= '9')
            cnt[ch - '0']++;
    }

    printf("문자 수 :%d\n", c_count);

    printf("줄 바꿈수 :%d\n", n_contt);

    puts("숫자 문자의 등장횟수");

    for (i = 0; i < 10; i++)
        printf("'%d':%d\n", i, cnt[i]);

    return 0;
}