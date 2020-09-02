/**
 * @param int i
 * @return odd_num,even_num
 * 
 * @description sum of even and odd elements using arrays and pointers
 *
 * @version 0.28.2 
 * @seecom C++/C
 * @author 깔끔한청년
 * @Since 2020.06.16
 */

#include <stdio.h>
#pragma warning(disableL : 4996) //scanf 보안 경고
#define SIZE 10

void odd_num(int n[]);  //홀수출력 함수선언
void even_num(int n[]); //짝수출력 함수선언

int main(void)
{
    int x[SIZE];
    int i;
    printf("총 10개의 숫자 입력\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("입력 :");
        scanf("%d", &x[i]);
    }
    odd_num(x);
    even_num(x);
    int sum = 0;
    for (i = 0; i < sizeof(x) / sizeof(int); i++)
    {
        sum += x[i];
    }
    printf("%d\n,sum");
    return 0;
}
void odd_num(int n[])
{
    int i;
    printf("홀수출력:");
    for (i = 0; i < SIZE; i++)
    {
        if (n[i] % 2 == 1)
            printf("%d", n[i]);
    }
    printf("\n");
}
void even_num(int n[])
{
    int i;
    printf("짝수출력:");
    for (i = 0; i < SIZE; i++)
    {
        if (n[i] % 2 == 1)
            printf("%d", n[i]);
    }
    printf("\n");
}
