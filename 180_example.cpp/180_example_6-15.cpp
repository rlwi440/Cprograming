/**
 * @param int i,j,k
 * @param int a[4][3],b[3][4],c[4][4]
 * @return mat_mul
 * 
 * @description  example multiply processions
 * 
 * @version 0.28.2
 * @author 깔끔한 청년
 * @Seecom C/C++
 * @Since 2020.06.07
 */

#include <stdio.h>

void mat_mul(const int a[4][3], const int b[3][4], int c[4][4])
{
    int i, j, k;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < 3; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }
}

int main(void)
{
    int i, j;
    int mx[4][3];
    int my[3][4];
    int mz[4][4];

    printf("4열의3행의 mx와 3열 4행의 my의 곱을 구합니다.\n");

    puts("행렬 mx");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("mx[%d][%d] : ", i, j);
            scanf("%d", &mx[i][j]);
        }
    }
    puts("행렬 my");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("my[%d][%d] : ", i, j);
            scanf("%d", &my[i][j]);
        }
    }

    mat_mul(mx, my, mz);

    puts("행렬의곱");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%4d", mz[i][j]);
            putchar('\n');
        }

        return 0;
    }