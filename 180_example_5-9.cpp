/**
 * 학생수와 그 학생수만큼의 시험점수(0이상 100이하의 값)을 읽어들여 10점 단위로 분포를 출력 하는프로그램
 * 학생 수를 int num;로대입,학생점수 int score[NUMBER];로 대입 점수분포 int dist[11] =0 대입함,
 * 
 * @param do 문을 활용해, 15명의 점수(NUMBER)와  시험점수(score) (0이상 100의 값) 사용함,  분포그래프를 세로방향으로 출력문
 * @return do문과 while 문 으로 활용한  학생수와 학생수만큼의 시험점수를  출력하는 프로그램이다.,이중 for문에서 모든 요소의 값을 세로 막대그래프로 표시함
 * 
 * 
 * @version 0.28.1
 * @author 깔끔한청년
 * @seecom. C/C++
 * @Since 2020/05/30
 */

#include <stdio.h>
#define NUMBER 80 //최대학생수

int main(void)
{
    int i, j;
    int num;            //실제 학생수;
    int score[NUMBER];  //학생점수
    int dist[11] = {0}; //점수분포
    int dist_max = 0;   //분포의 최댓,값

    printf("학생 수를 입력해주새요.");

    do
    {
        scanf("%d", &num);
        if (num < 1 || num > NUMBER)
            printf("\a~%d 사이로 입력해주세요.", NUMBER);
    } while (num < 1 || num > NUMBER);

    printf("%명의 점수를 입력해주새요.\n", num);

    for (i = 0; i < num; i++)
    {
        printf("%2번 :", i + 1);
        do
        {
            scanf("%d", &score[i]);
            if (score[i] < 0 || score[i] > 100)
                printf("a\0~100 사이로 입력하세요.");
        } while (score[i] < 0 || score[i] > 100);
        dist[score[i] / 10]++;
    }

    puts("\n---분포 그래프 ---");

    for (i = 0; i <= 10; i++) //분포의 최댓값 구하기
        if (dist[i > dist_max])
            dist_max = dist[i];

    for (i = dist_max; i >= 1; i--)
    {
        for (j = 0; j <= 10; j++)
        {
            if (dist[j >= i])
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for (i = 0; i < 34; i++)
        putchar('-');
    putchar('\n');

    for (i = 0; i <= 10; i++)
        printf("%2d", i * 10);
    putchar('\n');

    return 0;
}