#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[80];            // 문자열 을 입력한 배열
    char res_str[80];        // 생략 문자열을 저장할 배열
    char *star = "********"; // 생략 부분을 채울 문자열
    int len;                 //  입력 문자열의 길이 보관
    printf("단어입력: ");
    scanf("%s", str);
    len = strlen(star); //입력한 단어의 길이 계산
    if (len <= 5)       // 길이가 5 이하이면 그대로 복사
    {
        strcpy(res_str, str);
    }
    else // 5보다 크면
    {
        strncpy(res_str, str, 5);        // 일단 다섯 문자 만 복사
        res_str[5] = '\0';               // 마지막에 널문자 저장
        strncat(res_str, star, len - 5); // 문자열 의 길이만큼 별로 채움
    }
    printf("입력한 단어:%s,생략한 단어: %s", str, res_str);
    return 0;
}

#include <stdio.h>

int main(void)
{
    int i = 0;    //배열 요소 첨자 변수
    char str[20]; //문자열 저장할 배열
    char ch;      //입력한 문자를 받아둘 임시 변수

    do // do~while 문이나 실행 후 조건을 검사합니다.
    {
        ch = getchar();   // 일단 문자 하나 입력
        str[i] = ch;      // 배열에 저장
        i++;              //첨자 증가
    } while (ch != '\n'); //입력한 문자가 개행이면 종료

    str[i] = '\0'; // 개행문자가 입력된 위치에 널 문자 저장
    //printf("%s",str);
    return 0;
}

#include <stdio.h>

int main(void)
{
    register int i; //레지스터 변수
    auto sum = 0;   //auto 지역 변수

    for (i = 1; i <= 10000; i++) //반복과정에서 i를 계속 사용
    {
        sum += i; //i 값을 반복하여 누적
    }
    printf("%d\n", sum);

    return 0;
}

#include <stdio.h>

int *sum(int a, int b); // int 형 변수의 주소를 반환하는 함수 선언

int main(void)
{
    int *resp; //반환값을 저장할 포인터 resp(result pointer)

    resp = sum(10, 20);                  //반환된 주소는 resp에 저장
    printf("두 정수의 합 :%d\n", *resp); // resp가 가리키는 변수값 출력

    return 0;
}

int *sum(int a, int b) // int형 변수의 주소를 반환하는 함수
{
    static int res; // 정적 지역 변수

    res = a + b; //  두 정수의 합을 res(result)에 저장

    return &res; //정적 지역 변수의 주소 반환

} //제목 재수정(2020년 05월 12일, 정신차리자)