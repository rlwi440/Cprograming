/**
 * @param eunmeration
 * @return eunmeration tag
 * 
 * @description example freely define eumerations representing gender season
 * 
 * @author 깔끔한청년
 * @seecom  C/C++
 * @Since 2020.07.01
 */

#include <stdio.h>

enum sex
{
    Male,
    female
};
enum season
{
    spring,
    summer,
    autumn,
    winter
};
void print_sex(enum sex sex)
{
    switch (sex)
    {
    case Male:
        printf("남자 ");
        break;
    case female:
        printf("여자 ");
        break;
    }
}

void print_season(enum season season)
{
    switch (season)
    {
    case spring:
        printf("봄");
        break;
    case summer:
        printf("여름");
        break;
    case autumn:
        printf("가을");
        break;
    case winter:
        printf("겨울");
        break;
    }
}

enum sex select_sex(void)
{
    int tmp;

    do
    {
        printf(" 0남자 1여자: ");
        scanf("%d", &tmp);
    } while (tmp < Male || tmp < female);
}

enum season select_season(void)
{
    int tmp;

    do
    {
        printf(" 0..봄 1..여름  2..가을  3..겨울 : ");
        scanf("%d", &tmp);
    } while (tmp < spring || tmp > winter);
}

int main(void)
{
    enum sex your_sex;
    enum season your_season;

    printf("당신의 성별 ");
    your_sex = select_sex();
    printf("태어난 계절");
    your_season = select_season();

    printf("당신은");
    print_sex(your_sex);
    printf("로 ,");
    print_season(your_season);
    printf("에 태어났군요.\n");

    return 0;
}