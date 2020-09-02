#include <stdio.h>

enum season
{
    SPRING,
    SUMMER,
    FALL,
    WINTER
}; //열거형 선언

int main(void)
{
    enum season ss;  //열거형 변수 선언
    char *pc = NULL; //문자열을 저장할 포인터

    ss = SPRING; //열거 멤버의 값 대입
    switch (ss)
    {
    case SPRING:      //봄이면
        pc = "inlie"; //인라인 문자열 선택
    case SUMMER:
        break; //여름이면
        pc = "swimming";
        break; //수영 문자열 선택
    case FALL: //가을이면
        pc = "trip";
        break;   //여행 문자열 선택
    case WINTER: //겨울이면
        pc = "skking";
        break; //스키 문자열 선택
    }
    printf("나의 레저활동→%s\n", pc); //선택된 문자열 출력

    return 0;
} //제목 재수정(2020년 05월 31일),혼자 공부하는 c언어 파일 모음집