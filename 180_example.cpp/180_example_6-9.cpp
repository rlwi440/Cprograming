/**
 * c++ 함수 예제입니다.
 * @param  int point
 * @param int i 
 * @return extern int point
 * 
 * @description The part that performs the taget display is implemented as an indepedent function 
 * 
 * @version 0.28.1
 * @author 깔끔한 청년
 * @seecom C/C++
 * @Since 2020/06/01
 */

#include <stdio.h>

int point[7];

void print_success(void);

int main(void)
{
    int i;
    extern int point[7];

    puts("7명의 점수를 입력해주세요.");
    for (i = 0; i < 7; i++)
        printf("%d", i + 1);
    scanf("%d", &point[i]);

    print_success();

    return 0;
}

void print_success(void)
{
    int i;
    extern int point[7];

    puts("합격자 목록");
    puts("----------");
    for (i = 0; i < 7; i++)
    {
        if (point[i] >= 60)
            printf("%d번:%d\n", i + 1, point[i]);
    }
    puts("-----------");
}
