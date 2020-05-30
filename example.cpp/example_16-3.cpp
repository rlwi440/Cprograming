#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *pi;       //할당한 저장공간 을 연결한 포인터
    int size = 5;  //한번에 할당할 저장 공간의 크기
    int count = 0; // 현재 입력된 양수갯수
    int num;       //양수를 입력한 변수
    int i;         // 반복제어 변수

    pi = (int *)calloc(size, sizeof(int)); //먼저 5개의 저장공간 할당
    while (1)
    {
        printf("양수만 입력하세여 => "); //데이터 입력
        scanf("%d", &num);               //0또는 음수이면 종료
        if (num <= 0)
            break; //저장공간을 모두 사용하면
        {

            size += 5; //크기를 늘려서 재할당
            pi = (int *)realloc(pi, size * sizeof(int));
        }
        pi[count++] = num;
    }
    for (i = 0; i < count; i++)
    {
        printf("%5d", pi[i]); //입력한 데이터 출력
    }
    free(pi); //동적 할당 저장 공간 반납

    return 0;
} //제목 재수정(2020년 05월 31일),혼자 공부하는 c언어 파일 모음집