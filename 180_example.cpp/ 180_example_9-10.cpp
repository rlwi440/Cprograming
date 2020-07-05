/**
 * @param char str[256],ch[256]
 * @param put_string
 * 
 * @description  example various function for mainpulating strings
 * 
 * @version 0.29.0
 * @author 깔끔한청년
 * @seecom C/C++
 * @Since 2020.07.05
 */

#include <stdio.h>

int str_chnum(const char s[], int c) //문자열 s중 문자 c의 개수 반환
{
    int i, count = 0;

    for (i = 0; s[i] != '0'; i++)
        if (s[i] == c)
            count++;

    return count;
}
void put_strign(const char s[], int n) //문자열 s를 n번 출력
{
    while (n-- > 0)
        printf("%s", s);
}

int str_length(const char s[]) //문자열 s의 길이반환
{
    int len = 0;

    while (s[len])
        len++;

    return len;
}

void put_stringr(const char s[]) //문자열 s를 거꾸로 출력
{
    int i = str_length(s);

    while (i-- > 0)
        putchar(s[i]);
}

void rev_string(char s[]) //문자열 s의 문자 나열 반전
{
    int i, len = str_length(s);

    for (i = 0; i < len / 2; i++)
    {
        char temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
    }
}

int main(void)
{
    char str[256], ch[256];

    printf("문자열을 str을 입력해주세요 : ");
    scanf("%s", str);

    printf("문자 ch를 입략해주세요 : ");
    scanf("%s", ch);

    printf("str은 ch를 %d개 포합합니다.\n", str_chnum(str, ch[0]));

    printf("str을 거꾸로 읽으면 : ");
    put_stringr(str); //str을 거꾸로 출력
    putchar('\n');

    rev_string(str); //str반전

    printf("str을 반전했습니다. 5번 출력합니다.\n");
    put_strign(str, 5);
    putchar('\n');

    return 0;
}