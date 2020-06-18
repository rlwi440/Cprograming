/**
 * @param  int n,count
 * @return count
 * 
 * @description Average and standard deviation program
 * 
 * @version 0.28.2
 * @author 깔끔한청년
 * @seecom  C++/C
 * @Since 2020.06.18
 */

#include <stdio.h>
#pragma warning(disableL : 4996) //scanf 보안 경고
void main()
{
    int n, count;
    float avg, d, sum = 0;
    float list[100];
    printf("평균을 내고자 하는 데이터의 개수는? ");
    scanf("%d", &n);
    for (count = 0; count < n; ++count)
    {
        printf("i=%d x=", count + 1);
        scanf("%f", &list[count]);
        sum += list[count];
    }
    avg = sum / n;
    printf("The average is %5.2f\n", avg);
    {
        d = list[count] - avg;
        printf("i=%d x= %5.2f d =%5.2f\n", count + 1, list[count], d);
    }
}