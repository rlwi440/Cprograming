/**
 * @param unsigned,sht
 * @return m_pow,d_pow,l_sht_r_sht
 * 
 * @description  example bitwise shift operator program
 * 
 * @version 0.28.2
 * @author  깔끔한 청년
 * @Seecom  C++/C
 * Since 2020.06.11
 */

#include <stdio.h>

unsigned pow2(unsigned no)
{
    unsigned pw = 1;

    while (no--)
        pw *= 2;
    return pw;
}

int main(void)
{
    unsigned m_pow, d_pow, l_sht, r_sht;
    unsigned x, n;

    printf("부호 없는 정수 x를 n비트 시프트합니다.\n");
    printf("x: ");
    scanf("%u", &x);
    printf("n:");
    scanf("%u", &n);

    m_pow = x * pow2(n); //2의 n제곱을 곱한 값
    d_pow = x / pow2(n); //2의 n제곱을 나눈 값

    l_sht = x << n; //n비트 오른쪽 시프트한 값
    r_sht = x >> n; //n비트 왼쪽 시프트 한 값

    printf("[a] x ×(2의 %u제곱)==%u\n", n, m_pow);
    printf("[b] x ÷(2의 %u제곱)==%u\n", n, d_pow);
    printf("[c] x << %u ==%u\n,n,l_sht");
    printf("[d] x >> %u ==%u\n,n,r_sht");

    printf("[a]와 [c]의 값은 일치%s.\n", (r_sht == d_pow) ? "합니다" : "하지 않습니다");
    printf("[b]와 [d]의 값은 일치%s.\n", (r_sht == d_pow) ? "합니다" : "하지 않습니다");

    return 0;
}