/**
 * c++언어 배열예제입니다.
 * @param int score[NUMBER]
 * @Param int student[NUMBER] ={0}
 * @Param subject[2] ={0}
 * @return void
 * 
 * @description  program to find the Average total score for each subject \n
 * 
 * @version 0.28.1
 * @author 깔끔한 청년
 * @seecom C/C++
 * @Since 2020/05/31
 */

#include <stdio.h>
#define NUMBER 6 //학생수
void print_line(void);

int main(void)
{
    int i, j;
    int score[NUMBER][2];      //점수
    int student[NUMBER] = {0}; //각 학생의 점수합계
    int subject[2] = {0};      //각 과목의 점수합계

    printf("%d명의 점수를 입력하세여.\n", NUMBER);

    for (i = 0; i < NUMBER; i++)
    {
        printf("%2번...국어: ", i + 1);
        scanf("%d", &score[i][0]);
        printf("     수학: ", i + 1);
        scanf("%d", &score[i][1]);

        student[i] = score[i][0] + score[i][1];
        subject[0] += score[i][0]; //국어 합계
        subject[1] += score[i][1]; //수학 합계
    }
    print_line();
    printf("번호 국어 수합 합계 평균\n");
    print_line();
    for (i = 0; i < NUMBER; i++)
        printf("%3d%6d%6d%6d%7.1f\n", i + 1, score[i][0], score[i][1],
               student[i], (double)student[i] / 2);
    print_line();
    printf("합계:%5d%6d%6d%6d7.1f\n", subject[0], subject[1], subject[0] + subject[1]);
    printf("평균:%6.1f%6.1f%6.1f\n", (double)subject[0] / NUMBER,
           (double)subject[1] / NUMBER,
           (double)(subject)[0] + subject[1] / NUMBER);
    print_line();

    return 0;
}

void print_line(void)
{
    int i;
    for (i = 0; i < 50; i++)
    {
        printf(" -");
    }
    printf("\n");
}