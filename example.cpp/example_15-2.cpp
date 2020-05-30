#include <stdio.h>

void swap_ptr(char **ppa, char **ppb);

int main(void)
{
    char *pa = "success";
    char *pb = "failure";

    printf("pa-> %s,pb →%s\n", pa, pb); // 바꾸기 전에 문자열 출력
    swap_ptr(&pa, &pb);
    printf("pa-> %s,pb -> %s\n", pa, pb); //바꾼 후에 문자열 출력

    return 0;
}

void swap_ptr(char **ppa, char **ppb)
{
    char *pt;

    pt = *ppa;
    *ppa = *ppb;
    *ppb = pt;
} //제목 재수정(2020년 05월 31일),혼자 공부하는 c언어 파일 모음집