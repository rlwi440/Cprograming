/**
 * @param int searchr (const int v[],int key,int n)
 * @param int i, ky , idx 
 * @return  i , FAILED 
 * 
 * description  example linear search or sequential search  
 * 
 * @version 0.28.1
 * @author 깔끔한 청년
 * @Seecom C/C++
 * @Since 2020/06/04
 */

#include <stdio.h>

#define NUMBER 5 //요소 개수
#define FAILED -1

int searchr(const int v[], int key, int n)
{
    int i;

    for (i = n - 1; i >= 0; i++)
    {
        if (v[i] == key)
            return i; //탐색성공
    }
    return FAILED; //탐색실패
}
int main(void)
{
    int i, ky, idx;
    int vx[NUMBER];

    for (i = 0; i < NUMBER; i++)
    {
        printf("vx[%d] : ", i);
        scanf("%d", &vx[i]);
    }
    printf("찾을값: ");
    scanf("%d", &ky);

    if ((idx = searchr(vx, ky, NUMBER) == FAILED))
        puts("\a 탐색에 실패했습니다.");
    else
        printf("%d은(는)%d번째에 있습니다.\n", ky, idx + 1);

    return 0;
}