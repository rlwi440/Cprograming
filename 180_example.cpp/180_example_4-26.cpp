/**
 *  정숫값 no 와 width를 읽어들여   홀수행 과  짝수행 출력프로그램
 *  width 개마다 줄 바꿈하면서 '+'와 '-' 출력
 * 
 * 
 * @param    for문(i=0; i<no/width /2; i++) 으로 int i,j (for문)으로 대입 후 putchar('\n')줄바꿈 변경 
 * @return  for문, putchar문, swith문
 *
 * @version 0.28.1
 * @author 깔끔한청년
 * @seecom. C/C++
 * @Since 2020/05/26
 */

#include <stdio.h>

int main(void)
{
    int no, width;

    printf("몇개를 출력할까요? ");
    scanf("%d", &no);
    printf("몇개 마다 줄바꿈 할까요 ?");
    scanf("%d", &width);

    if (no > 0)
    {
        int i, j;
        int rem = no % width;
        int wid = width / 2; /*열수의 절반*/
        int odd = width % 2; /*열수의 홀수인가?*/
        for (i = 0; i < no / width; j++)
            printf("-+");
        if (odd)
            putchar('+');
        putchar('\n');
        for (j = 0; j < wid; j++)
            printf("-+");
        if (odd)
            putchar('-');
        putchar('\n');

        if (no / width % 2)
            for (j = 0; j < wid; j++)
                printf("-+");
        if (odd)
            putchar('+');
        putchar('\n');

        if (rem > 0)
        {
            switch (no / width % 2)
            {
            case 0:
                for (j = 0; j < rem / 2; j++)
                    printf("+-");
                if (rem % 2)
                    putchar('+');
                break;
                for (j = 0; j < rem / 2; j++)
                    printf("-+");
                if (rem % 2)
                    putchar('-');
                break;
            }
            putchar('\n');
        }
        return 0;
    }
