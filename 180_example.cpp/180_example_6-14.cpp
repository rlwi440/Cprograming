/**
 * @param int searchr (const int v[],int key,int n)
 * @param int i,ky,num
 * @return  count,key,idx
 * 
 * @description  example  application linear search
 * 
 * @version  0.28.2
 * @author 깔끔한 청년
 * @seecom  C/C++
 * @Since 2020/06/07
 */

#include <stdio.h>

#define NUMBER 7  //요소개수
#define FAILED -1 //탐색실패

/* 요소개수가 n개안 배열 v에서 값이 key 인 모든 요소의 첨자를 idx에 저장하고 개수를반환 */
int search_idx(const int v[], int idx[], int key, int n)
{
    int i, count = 0;

    for (i = 0; i < n; i++)
    {
        if (v[i] == key)
            idx[count++] = i;
    }
    return count;
}

int main(void)
{
    int i, ky, num;
    int vx[NUMBER];
    int pt[NUMBER];

    for (i = 0; i < NUMBER; i++)
    {
        printf("vx[%d]: ", i);
        scanf("%d", &vx[i]);
    }
    printf("찾을값 :");
    scanf("%d", &ky);

    if ((num = search_idx(vx, pt, ky, NUMBER)) == 0)
        puts("/a배열에 해당값이 없습니.다.");
    else
    {
        printf("%d은(는)%d개 있습니다.\n", ky, num);
        for (i = 0; i < num; i++)
            printf("vx[%d]=%d\n", pt[i], vx[pt[i]]);
    }

    return 0;
}