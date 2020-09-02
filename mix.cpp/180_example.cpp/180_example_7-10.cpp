/**
 * @param   unsigned set_n,reset_n,inverse_n
 * @return  bits
 * 
 * @description continuous unsigned integer random bit operation
 * 
 * @version 0.28.2
 * @author 깔끔한청년
 * @seecom  C++/C
 * Since 2020.06.24
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

unsigned set_n(unsigned x, int pos, int n)
{
    return x | lsht(~lsht(~0, n), pos);
}

unsigned reset_n(unsigned x, int pos, int n)
{
    return x & ~lsht(~lsht(~0, n), pos);
}

unsigned inverse_n(unsigned x, int pos, int n)
{
    return x ^ lsht(~lsht(~0, n), pos);
}

int main(void)
{
    unsigned x, pos, n;

    printf("부호 없는 정수 x를 n비트 조작합니다.\n");
    printf("x:   ");
    scanf("&u", &x);
    printf("pos: ");
    scanf("%u", &pos);

    printf("\nx         =");
    print_bits(x);
    printf("\nset_n (x,pos,n)   = ");
    print_bits(set_n(x, pos, n));
    printf("\nreset_n (x,pos,n)   = ");
    print_bits(reset_n(x, pos, n));
    printf("\ninverse_n (x,pos,n)   = ");
    print_bits(inverse_n(x, pos, n));
    putchar('\n');

    return 0;
}