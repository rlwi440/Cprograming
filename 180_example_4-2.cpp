/**
 *  지정된  정숫값 2개를  작은쪽,큰쪽 모든 정수를 더한 값을 출력하는프로그램
 *  정숫값 범위는 {A,B 를 이용하여 변수 sum 에 대입}
 * 
 * 
 * @param    작은쪽 과 큰수를 변수 sum에 대입  , while문 을 이용하여 작은쪽과 큰수를 합을 구함.
 * @return  int 형, do문 , while 문 sum 대입
 *
 * @version 0.28.1
 * @author 깔끔한청년
 * @seecom. C/C++
 * @Since 2020/05/24
 */

#include <stdio.h>

int main(void)
{
    int a, b;
    int no, lower, upper;
    int sum = 0;

    printf("정수 A: ");
    scanf("%d", &a);
    printf("정수 B: ");
    scanf("%d", &b);

    if (a > b)
    { /*b~a의 합을 구한준비 */
        lower = a;
        upper = b;
    }

    no = lower; /*lower부터 시작*/
    do
    {
        sum = sum + no;
        no = no + 1;
    } while (no <= upper); /*upper까지의 합을 구함*/

    printf("%d 이상의 %d이하의 모든 정수를 더한값은 %d 입니다\n", lower, upper, sum);

    return 0;
}
