/**
 *  지정된 switch 선택문을 가지고 출력하는 프로그램 
 * switch 범위는 {case 3 ~ case 12}까지임.
 * 
 * 
 * @param switch 문을 사용하여 선택문을 출력하는 값,defalut 문을 사용하여 다음구문으로 넘김.
 * @return  지정된 swtich 의 문자 와 default 문자
 *
 * @version 0.28.1
 * @author 깔끔한청년
 * @seecom. C/C++
 * @Since 2020/05/24
 */

#include <stdio.h>

int main(void)
{
    int month; //월

    printf("몇 월 인가요 ?");
    scanf("%d", &month);
    printf("%d월은", month);
    switch (month)
    {
    case 3:
    case 4:
        puts("봄입니다.");
        break;
    case 5:
    case 6:
    case 7:
    case 8:
        puts("여름입니다");
        break;
    case 9:
    case 10:
    case 11:
        puts("가을입니다");
        break;
    case 12:
    case 1:
    case 2:
        puts("겨울입니다");
        break;
    default:
        puts("없는 월입니다!!\a");
        break;
    }

    return 0;
}