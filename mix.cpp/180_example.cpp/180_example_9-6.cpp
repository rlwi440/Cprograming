/**
 * @param int no
 * @return  ch
 * 
 * @description Fuction to check whether a specific character of a string is included
 * 
 * @version 0.29.0
 * @author 깔끔한 청년
 * @seecom  C/C++
 * @Since 2020.07.05
 */

#include <stdio.h>

int str_char(const char s[], int c) //문자열 s중  가장 앞에있는 문자 c를 탐색
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
        if (s[i] == c)
            return i;
    return -1;
}

int main(void)
{
    int no;
    char ch[10];

    printf("영문자를 입력해주세여 : ");
    scanf("%s", ch);

    no = str_char("ABCDEFGHIJKLMNOPQSTUWXYZ"
                  "abcdefghijklmopqstuwxyz",
                  ch[0]);

    if (no >= 0 && no <= 25)
        printf("이는 대문자 %d번째입니다.\n", no + 1);
    else if (no >= 26 && no <= 51)
        printf("이는 소문자%d번째입니다.\n", no - 25);
    else
        printf("이는 영문자가 아닙니다.\n");

    return 0;
}