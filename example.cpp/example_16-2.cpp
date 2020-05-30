#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *pi;        //동적할당 영역을 연결할 포인터
    int i, sum = 0; //반복 제어 변수와 누적변수

    pi = (int *)malloc(5 * sizeof(int)); //저장공간 20바이트 할당
    if (pi == NULL)
    {
        printf("메모리가 부족합니다!\n"); //메모리가 부족할때 의 예외처리 구문 (10행 ~14행)
        exit(1);
    }
    printf("다섯명의 나이를 입력하세요 : ");
    for (i = 0; i < 5; i++) //i는 0부터 4까지 5번 반복
    {
        scanf("%d", &pi[i]); //배열 요소에 입력
        sum += pi[i];        //배열 요소의 값 누적
    }
    printf("다섯명의 평균 나이 : %.1lf\n", (sum / 5.0)); //평균나이출력
    free(pi);                                            //할당한 메모리 영역 반환

    return 0;
} //제목 재수정(2020년 05월 31일),혼자 공부하는 c언어 파일 모음집