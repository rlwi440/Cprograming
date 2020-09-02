/**
 * @param char cs[] [LEN] 
 * @return put_stary
 * 
 * @description example invert character strings of strings stored in an array
 * 
 * @version 0.29.0
 * @author 깔끔한청년
 * @seecom C/C++
 * @Since 2020.07.06
 */

#include <stdio.h>

#define LEN 128

int str_length(const char s[]) //문자열 s의 길이반환
{
    int len = 0;

    while (s[len])
        len++;

    return len;
}

void rev_string(char s[]) //문자열 s의 문자 나열반전
{
    int i, len = str_length(s);

    for (i = 0; i < len / 2; i++)
    {
        char temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
    }
}

void rev_strings(char s[][LEN], int n) // 문자열 배열의 문자 나열반전
{
    int i;
    for (i = 0; i < n; i++)
        rev_string(s[i]);
}

void put_stary(const char s[][LEN], int n) //문자열  배열 출력
{
    int i;
    for (i = 0; i < n; i++)
        printf("s[%d] =\"%s\"\n", i, s[i]);
}

int main(void)
{
    char cs[][LEN] = {"SEC", "ABC", "1234"};

    rev_strings(cs, 3); //반전

    put_stary(cs, 3); //출력

    return 0;
}