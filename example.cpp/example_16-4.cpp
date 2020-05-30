#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char temp[80]; // 임시 char 배열
    char *str[3];  //동적할당 영역을 연결할 포인터 배열
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("문자열을 입력하세요 : ");
        gets_s(temp);                              //문자열 입력
        str[i] = (char *)malloc(strlen(temp) + 1); //문자열 저장공간할당
        strcpy(str[i], temp);
    }

    for (i = 0; i < 3; i++)
    {
        printf("%s\n", str[i]); //입력된 문자열 출력
    }

    for (i = 0; i < 3; i++)
    {
        free(str[i]); // 동적 할당 영역 변환
    }

    return 0;
} //제목 재수정(2020년 05월 31일),혼자 공부하는 c언어 파일 모음집
