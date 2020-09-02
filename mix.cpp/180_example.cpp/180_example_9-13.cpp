/**
 * @param int i
 * @return put_stary(s,no)
 * 
 * @description exmaple rea#d and print a string array
 * 
 * @version 0.29.0
 * @author 깔끔한청년
 * @seecom C/C++
 * Since 2020.07.06
 */

#include <stdio.h>

#define NUM 100 //문자열 개수
#define LEN 128 //문자열 길이

void put_strary(const char s[][LEN], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("s[%d]=\"%s\"n", i, s[i]);
}
int get_strary(const char s[][LEN], int n) //문자열 배열로 문자열을 읽어들임
{
    int i, no = n;

    for (i = 0; i < n; i++)
    {
        printf("s[%d] : ", i);
        scanf("%s", s[i]);
        if (s[i][0] == '$' && s[i][1] == '$' && s[i][2] == '$' &&
            s[i][3] == '$' && s[i][4] == '$' && s[i][5] == '\0')
        {
            no = i;
            break;
        }
    }
    return no;
}

int main(void)
{

    int no;
    char s[NUM][LEN];

    printf("%d개의 문자열을 입력해주세요(\"$$$$\"로 중단).\n", NUM);
    no = get_strary(s, NUM); //읽어들임
    put_strary(s, no);       //출력

    return 0;
}
