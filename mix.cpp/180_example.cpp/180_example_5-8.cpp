/**
 * 학생수와 그 학생수만큼의 시험점수(0이상 100이하의 값)을 읽어들여 10점 단위로 분포를 출력하는 프로그램이다.
 * 학생 수를 int num;로대입,학생점수 int score[NUMBER];로 대입 점수분포 int dist[11] =0 대입함.
 * 
 * 
 * @param do 문을 활용해, 15명의 점수(NUMBER)와  시험점수(score) (0이상 100의 값) 사용함. 
 * @return do문과 while 문 으로 활용한  학생수와 학생수만큼의 시험점수를  출력하는 프로그램이다. 
 * 
 * 
 * @version 0.28.1
 * @author 깔끔한청년
 * @seecom. C/C++
 * @Since 2020/05/30
 */

#include <stdio.h>
#define NUMBER 80 //최대 학생수

int main(void)
{
    int i, j;
    int num;            //실제 학생수
    int score[NUMBER];  // 학생점수
    int dist[11] = {0}; //점수 분포

    printf("학생 수를 입력해주세요 .");

    do
    {
        scanf("%d,&num");
        if (num < 1 || num > NUMBER)
            printf("\a1~%d 사이로 입력해주세요.", NUMBER);
    } while (num < 1 || num > NUMBER);

    printf("%d명의 점수를 입력해주세요.\n", num);

    for (i = 0; i < num; i++)
    {
        printf("%2번: i+1");
        do
        {
            scanf("%d", &score[i]);
            if (score[i] < 0 || score[i] > 100)
                ;
        } while (score[i] < 0 || score[i] > 100);
        dist[score[i] / 10]++;
    }
    puts("\n---분포 그래프 ---");

    for (i = 0; i <= 9; i++)
    { //100점 미만
        printf("%3d~%3d :", i * 10, i * 10 + 9);
        for (j = 0; j < dist[i]; j++)
            putchar('*');
        putchar('\n');
    }
    printf("  100 : ");
    for (j = 0; j < dist[10]; j++) //100점
        putchar('*');
    putchar('\n');

    return 0;
}