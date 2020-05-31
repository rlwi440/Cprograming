/**
 * @param int i,j,k 
 * @param int score[2][4][3]
 * @param int sum [4][3]
 * @return void
 * 
 * @description A program that calculates and prints the sum for two times \n
 *
 * @version 0.28.1
 * @author 깔끔한 청년
 * @seecom C/C++
 * @Since 2020/05/31
 */

#include <stdio.h>

int main(void)
{
    int i, j, k;
    int score[2][4][3] = {
        {{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}},
        {{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35}},
    };

    int sum[4][3]; //합계

    /*2회분의 점수 합계 구함*/
    for (i = 0; i < 4; i++)
    { //4명분의
        for (j = 0; j < 3; j++)
            sum[i][j] = score[0][i][j] + score[1][i][j]; //2회분을 더함
    }

    /*각 회의 점수 출력*/
    for (i = 0; i < 2; i++)
    {
        printf("%d번째 점수\n", i + 1);
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
                printf("%4d", score[i][j][k]);
            putchar('\n');
        }
    }
    /*합계 점수 출력 */
    puts("점수 합계");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%4d", sum[i][j]);
        putchar('\n');
    }

    return 0;
}