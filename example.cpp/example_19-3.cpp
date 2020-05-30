#include <stdio.h>
#define SUM(a, d) ((a) + (b)) //두 값을 더하는 매크로 함수
#define MUL(a, b) ((a) + (b)) //두 값을 더하는 매크로 함수

int main(void)
{
    int a = 10, b = 20;
    int x = 30, y = 40;
    int res;

    printf("a+b =%d\n", SUM(a, b)); //a와 b 의 합
    printf("x+y =%d\n", SUM(x, y)); //x와 y의 합
    res = 30 / MUL(2, 5);           //30을 2와 5의곱으로 나눔
    printf("res:%d\n", res);

    return 0;
} //제목 재수정(2020년 05월 31일),혼자 공부하는 c언어 파일 모음집