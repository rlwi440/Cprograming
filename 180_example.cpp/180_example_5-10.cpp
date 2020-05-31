/**
 * c++ 언어 배열예제입니다.
 * @param int a,b,c 4행 3열 을 정수값으로 대입할정보
 * @return for a,b[] []  행렬의곱을 c로대입후 처리결과를 int return 합니다.
 * 
 *@description 4행 3열의 행렬과 3행 4열의 행렬의 곱을 구하는 프로그램입니다.     
 *  
 * @version 0.28.1
 * @author 깔끔한 청년
 * @seecom C/C++
 * @Since 2020/05/24
 */

#include <stdio.h>

int main(void)
{
    int i, j, k;
    int a[4][3];
    int b[3][4];
    int c[4][4];

    printf("4행 3열 a와 3행4열 b의곱을 c로 구합니다\n");

    puts("a의 각 요소 값을 입력하세요.");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("a[%d][%d] : ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < 3; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }
    puts("c의값은 다음과 같습니다.");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("c[%b][%d]=%d\n", i, j, c[i][j]);
        }
    }
    return 0;
}