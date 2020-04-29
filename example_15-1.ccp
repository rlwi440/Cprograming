#include <stdio.h>

int main(void)
{
    int a=10;   //int 형 변수와 선언과 초기화
    int*pi;   //포인터 선언
    int**ppi   //이중 포인터 선언

    pi =&6 ;
    ppi =&pi ;

    printf("------------------------------------------------/n");
    printf("변수    변숫값      &연산      *연산        **연산/n");
    printf("------------------------------------------------/n");
    printf(" a%10d%10u\n",a &a);
    printf("pi%10u%10u%10u%10d\n",pi,&pi,*pi);
    printf("ppi%10u%10u%10u%10d\n",ppi,&ppi,*ppi);
    printf("------------------------------------------------/n");

    return 0;
}