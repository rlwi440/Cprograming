/**
 * @param signed
 * @return void
 * 
 * @description example integer numeric range output
 * 
 * @version 0.28.2
 * @author 깔끔한 청년
 * @Seecom C/C++
 * @Since 2020.06.09
 */

#include <stdio.h>
#include <limits.h>

int main(void)
{
    puts("이 환경에서의 각 정수형 값의 범위");
    printf("signed short int :%d~%d\n", SHRT_MIN, SHRT_MAX);
    printf("signed int :%d~%d\n ", INT_MIN, INT_MAX);
    printf("signed long int:%ld~%ld\n", LONG_MIN, LONG_MAX);

    printf("usigned short int :%u~%u\n", 0, SHRT_MIN, SHRT_MAX);
    printf("usigned int :%u~%u\n ", 0, INT_MIN, INT_MAX);
    printf("usigned long int:%lu~%lu\n", 0, LONG_MIN, LONG_MAX);

    return 0;
}