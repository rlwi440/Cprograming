/**
 * @param  int scan
 * @param int ave
 * @param int n1,n2,n3
 * @return avee
 * 
 * @description Example function that does not require a factor
 * 
 * @version 0.28.1
 * @author 깔끔한청년
 * @seecom.C/C++
 * @Since 2020/06/01
 */

#include <stdio.h>

int scan_int(void) //2개의 정숫값 평균 구하기
{
    int temp;

    printf("정숫값: ");
    scanf("%d", &temp);

    return temp;
}

int ave_of(int a, int b)
{
    return (a + b) / 2;
}

int main(void)
{
    int n1 = scan_int(); //n1 에 int형 정숫값을 읽어들임
    int n2 = scan_int(); //n2 에 int형 정숫값을 읽어들임
    int n3 = scan_int(); //n3에 int형 정숫값을 읽어들임

    int ave;

    if (ave = ave_of(n1, n2) == 0) //n1과 n2의 평균값
        printf("n1와n2의 평균값은 0입니다.\n");
    else if (ave > 0)
        printf("n1와 n2의 평균값은 양수로,%d입니다.\n", ave);
    else
        printf("n1와 n2의 평균값은 음수로,%d입니다.\n", ave);

    if ((ave = ave_of(n1, n3)) == 0)
        printf("n1 와 n3의 평균값은 0입니다.\n");
    else if (ave > 0)
        printf("n1와 n3의 평균값은 양수로 %d입니다.\n", ave);
    else
        printf("n1와 n3의 평균값은 음수로 %d입니다.\n", ave);

    if ((ave = ave_of(n2, n3)) == 0)
        printf("n2와 n3의 평균값은 0입니다.\n");
    else if (ave > 0)
        printf("n2와 n3의 평균값은 양수로 %d입니다.\n", ave);
    else
        printf("n2와 n3의 평균값은 음수로 %d입니다.\n", ave);

    return 0;
}
