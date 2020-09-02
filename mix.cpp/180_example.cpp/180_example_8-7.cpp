/**
 * @param   enum month 
 * @return enum month select month 
 * 
 * @description Enumeration indicating  month,enumeration indicating season
 * 
 * @version 0.29.0
 * @author 깔끔한청년
 * @seecom  C/C++
 * @Since 2020.07.02
 */

#include <stdio.h>

enum month
{
    january = 1,
    February,
    March,
    April,
    May,
    June,
    july,
    August,
    september,
    Octorber,
    November,
    December
};

void print_season(enum month month)
{
    switch (month)
    {
    case March:
    case April:
    case May:
        printf("봄");
        break;

    case June:
    case july:
    case August:
        printf("여름 ");
        break;
    case september:
    case Octorber:
    case November:
        printf("가을");
        break;
    case December:
    case january:
    case February:
        printf("겨울");
        break;
    default:
        printf("지구에 존재하지 않는 계절");
        break;
    }
}
enum month select_month(void)
{
    int tmp;
    do
    {
        printf("몇 월 입니까 :");
        scanf("%d", &tmp);
    } while (tmp < january || tmp > December);
}
int main(void)
{
    enum month your_month;

    printf("태어난 월을 입력해주세요.");
    your_month = select_month();

    printf("당신은");
    print_season(your_month);
    printf("에 태어났군요.\n");

    return 0;
}
