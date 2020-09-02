/**
 * @param bits
 * @return bits
 * 
 *@description  example bit configuration program
 *
 * @version 0.28.2
 * @author 깔끔한청년
 * @seecom C++/C
 * @Since 2020.06.11
 */

#include <stdio.h>

int count_bits(unsigned x) //unsigned의 비트 수 반환
{
    int bits = 0;
    while (x)
    {
        if (x & 1U) //unsigned형의 1
            bits++;
        x >> 1;
    }
    return bits;
}

int int_bits(void) //unsigned 형 비트내용 출력
{
    return count_bits(~0U);
}

void print_bits(unsigned x)
{
    int i;
    for (i = int_bits() - 1; i >= 0; i--)
        putchar(((x >> i) & 1U) ? '1' : '0');
}

int main(void)
{
    unsigned x;

    printf("음이 아닌 정수 :"), scanf("%u,&x");
    printf("이 정수의 내용은 ");
    print_bits(x);
    printf("입니다.\n");

    return 0;
}
