/**
 * @param int i,j
 * @param int mx[4][3],my[3][4],mz[4][4]
 * @return mat_mul
 * 
 * @description example multidimnesional array
 * 
 * @version 0.28.2
 * @author 깔끔한 청년
 * @Seecom  C/C++
 * @Since 2020.06.07
 */

#include <stdio.h>

void mat_add(const int a[][3], const int b[][3], int c[][3], int n) //n행 3열의 행렬 a와 b의합을 c에 저장
{
    int i, j;

    for (i = 0; i < n; i++)
        for (j = 0; j < 3; j++)
            c[i][j] = a[i][j] + b[i][j];
}

void mat_print(const int m[][3], int n) //n행 3열 행렬 m을 출력
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 3; j++)
            printf("4%d", m[i][j]);
        putchar('\n');
    }
}

int main(void)
{
    int i;
    int score[2][4][3] = {
        {{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}},
        {
            {97, 67, 82},
            {73, 43, 46},
            {97, 56, 21},
            {85, 46, 35},
        }};
    int sum[4][3]; //합계

    mat_add(score[0], score[1], sum, 4);

    for (i = 0; i < 2; i++)
    { //각 회의 점수를 출력
        printf("%d회째의 점수\n", i + 1);
        mat_print(score[i], 4);
        putchar('\n');
    }

    puts("합계점수");
    mat_print(sum, 4);

    return 0;
}
