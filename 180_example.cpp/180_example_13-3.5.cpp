/**
 * @param   typedef struct
 * @return sort_by_height
 * 
 * @description example program using structure
 * 
 * @version 0.29.0
 * @author  깔끔한청년
 * @seecom C/C++
 * @Since 2020.07.23
 */

#include <stdio.h>
#include <string.h>
#define NUM_MAX 50   //읽어들인 사람수의 상한
#define NAME_LEN 100 //이름용 문자열의 소요개수

typedef struct
{ //사람들을 나타내는 구조체
    char name[NAME_LEN];
    double height;
    double weight;
} Human;

void swap_Human(Human *x, Human *y)
{
    Human temp = *x;
    *x = *y;
    *y = temp;
}

void sort_by_height(Human a[], int n)
{
    int i, j;

    for (i = 0; i < n - 1; i++)
    {
        for (j = n - 1; j > i; j--)
            if (a[j - 1].height > a[j].height)
                swap_Human(&a[j - 1], &a[j]);
    }
}

int main(void)
{
    FILE *fp;
    int i, j;
    int number = 0;      //사람수
    Human data[NUM_MAX]; //사람 데이터
    double hsum = 0.0;   //키 합계
    double wsum = 0.0;   //몸무게 합계

    if (((fp = fopen("hw.dat", "r"))) == NULL) //열가
        printf("\a 파일을 열수 없습니다.\n");
    else
    {
        for (i = 0; i < NUM_MAX; i++)
        {
            if (fscanf(fp, "%s%lf%lf", data[number].name, &data[number].height, &data[number].weight) != 3)
                break;

            hsum += data[number].height;
            wsum += data[number].weight;
            number++;
        }

        sort_by_height(data, number);
        for (i = 0; i < number; i++)
            printf("%-10s %5.1f %5.1f\n", data[i].name, data[i].height, data[i].weight);

        printf("--------------------\n");
        printf("평균  %5.1f %5.1f\n", hsum / number, wsum / number);
        fclose(fp);
    }

    return 0;
}