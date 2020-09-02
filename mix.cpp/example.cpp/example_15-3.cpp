#include <stdio.h>

void print_str(char **pps, int cnt);

int main(void)
{
    char *ptr_ary[] = {"eagle", "tiger", "lion", "squirrel"}; //초기화
    int count;                                                //배열 요소 수를 저장할 변수

    count = sizeof(ptr_ary) / sizeof(ptr_ary[0]); //배열 요소 의 수 계산
    print_str(ptr_ary, count);                    //배열명과  배열요소  수를 주고 호출
    return 0;
}

void print_str(char ***pps, int cnt) // 매개변수로 이중 포인터 사용
{
    int i;

    for (i = 0; i < cnt; i++)
    {
        printf("%s\n", pps[i]); //이중 포인터를 배열명 처럼 사용
    }
} //제목 재수정(2020년 05월 31일),혼자 공부하는 c언어 파일 모음집