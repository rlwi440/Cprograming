/**
 * @param unsigned set,reset,inverse
 * @return  bits
 * 
 * @description  Random bit mainpulation of unsingned integers
 * 
 * @version 0.28.2
 * @author 깔끔한청년
 * @seecom  C++/C
 * @Since 2020.06.22
 */

#include <stdio.h>

int count_bits(unsigned x)
{
    int bits = 0;
    while (x)
    {
        if (x & 1u)
            bits++;
        x >>= 1;
    }
    return bits;
}

int int_bits(void) //unsigned형의 비트수 반환
{
    return count_bits(~0U);
}

void print_bits(unsigned x) //unsigned형 비트내용 출력
{
    int i;
    for (i = int_bits() - 1; i >= 0; i--)
        putchar(((x >> i) & 1U) ? '1' : '0');
}

unsigned lsht(unsigned x, int n) //x를 왼쪽으로 n비트 시프트한 값 반환
{
    return (n <= 0 || n >= int_bits()) ? x : (x << n);
}

unsigned set(unsigned x, int pos)
{
    return x | lsht(1u, pos);
}

unsigned reset(unsigned x, int pos)
{
    return x & ~lsht(1U, pos);
}

unsigned inverse(unsigned x, int pos)
{
    return x ^ lsht(1U, pos);
}

int main(void)
{
    unsigned x, pos;

    printf("부호 없는 정수 x를 n비트 조작합니다.\n");
    printf("x:   ");
    scanf("&u", &x);
    printf("pos: ");
    scanf("%u", &pos);

    printf("\nx         =");
    print_bits(x);
    printf("\nset (x,pos)   = ");
    print_bits(set(x, pos));
    printf("\nreset (x,pos)   = ");
    print_bits(reset(x, pos));
    printf("\ninverse (x,pos)   = ");
    print_bits(inverse(x, pos));
    putchar('\n');

    return 0;
}