#include <stdio.h>

int main(void)
{
    int a[5] = {3, 2, 1, 6, 5};
    int i, j, temp;
    int min;

    for (i = 0; i < 4; i++) //가장 작은 값을 구하는 구하는 과정 반복 횟수
    {
        min = i; //i가 가장 작은 값의 첨자라고 과정
        for (j = i + 1; j < 5; j++)
        {
            if (a[min] > a[j]) //가장 작은 값이 a[j]보다 크면
            {
                min = j; //j가  가장 작은 값의 첨자 가된다
            }
        }
        if (min != i) //가장 작은 값의 위치가 바뀌었으면
        {
            temp = a[i]; //두 값 교환
            a[i] = a[min];
            a[min] = temp;
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("%5d", a[i]);
    }

    return 0;
} //제목 재수정(2020년 05월 31일),혼자 공부하는 c언어 파일 모음집