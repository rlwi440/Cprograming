/**
 * @param int n
 * @return sizeof, sizeof(usigned),sizeof(n)
 * 
 * @description example program statement that prints the sizeof value
 * 
 * @version 0.28.2
 * @author 깔끔한 청년
 * @seecom  C++
 * @Since 2020.06.10
 */

#include <stdio.h>

int main(void)
{
    int n;
    printf("sizeof 1        =%u\n", (unsigned)(sizeof 1));
    printf("sizeof +1        =%u\n", (unsigned)(sizeof + 1));
    printf("sizeof -1        =%u\n", (unsigned)(sizeof - 1));
    printf("sizeof(unsigned)-1=%u\n", (unsigned)(sizeof(unsigned) - 1));
    printf("sizeof(double)-1=%u\n", (unsigned)(sizeof(double) - 1));
    printf("sizeof((double)-1)=%u\n", (unsigned)(sizeof((double)-1)));
    printf("sizeof n+2      =%u\n", (unsigned)(sizeof(n + 2)));
    printf("sizeof (n+2)      =%u\n", (unsigned)(sizeof(n + 2)));
    printf("sizeof (n+2.0)      =%u\n", (unsigned)(sizeof(n + 2.0)));

    return 0;
}