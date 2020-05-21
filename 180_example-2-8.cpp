/*자료형 과 연산에대해 확인 하기 위한 프로그램 */
#include <stdio.h>

int main(void)
{
    int n1, n2;    //정수
    double d1, d2; //부동소수점수

    puts("정수와살수를 2개씩입력하세요.");
    printf("정수 n1 : "), scanf("%d", &n1);
    printf("정수 n2 : "), scanf("%d", &n2);
    printf("정수 d1 : "), scanf("%lf", &d1);
    printf("정수 d2: "), scanf("%lf", &d2);

    /*int 와 int */
    printf("5*2=%d\n", 5 * 20);
    printf("5/2=%d\n", 5 / 2);
    printf("5*n1 =%d\n", 5 * n1);
    printf("5/n1-%d\n", 5 / n1);
    printf("n1*n2 =%d\n", n1 * n2);
    printf("n1/n2=%d\n", n1 / n2);

    /*int와 double */
    printf("5*2.5-%lf\n", 5 * 2.5);
    printf("5/2.5=%lf\n", 5 / 2.5);
    printf("5*d1 =%lf\n", 5 * d1);
    printf("5/d1 =%lf\n", 5 / d1);
    printf("n1*d2=%lf\n", n1 * d2);
    printf("n1/d2=%lf\n", n1 / d2);

    /*double과 double */
    printf("5.3*2.5=%f\n", 5.3 * 2.5);
    printf("5.3/2.5=%f\n", 5.3 / 2.5);
    printf("5.3*d1 =%f\n", 5.3 * d1);
    printf("5.3/d1 =%f\n", 5.3 / d1);
    printf("d1*d2 =%f\n", d1 * d2);
    printf("d1/d2=%f\n", d1 / d2);

    return 0;
}