/**
 * @param typedef struct
 * @return student std[5]
 * 
 * @description  example structure array sort
 * 
 * @version 0.29.0
 * @author  깔끔한청년
 * @seecom  C/C++
 * @Since 2020.07.18
 */

#include <stdio.h>
#include <string.h>

#define NUMBER 5    //학생수
#define NAME_LEN 64 //이름문자 개수

typedef struct
{
    char name[NAME_LEN]; //이름
    int height;          //키
    float weight;        //몸무게
    long schols;         //장학금
} student;

void swap_student(student *x, student *y) //x와y가 가리키는  학생을 교환
{
    student temp = *x;
    *x = *y;
    *y = temp;
}

void sort_by_height(student a[], int n)
{
    int i, j;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j > i; j--)
            if (a[j - 1].height > a[j].height)
                swap_student(&a[j - 1], &a[j]);
    }
}

void sort_by_name(student a[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = n - 1; j > i; j--)
            if (strcmp(a[j - 1].name, a[j].name) > 0)
                swap_student(&a[j - 1], &a[j]);
    }
}

int main(void)
{
    int i;
    int sort_type;
    student std[5];

    for (i = 0; i < NUMBER; i++)
    {
        printf("%d번째 학생\n", i + 1);
        printf("이름:   ");
        scanf("%S", std[i].name);
        printf("키 :");
        scanf("%d", &std[i].height);
        printf("몸무게 :  ");
        scanf("%f", &std[i].weight);
        printf("장학금 : ");
        scanf("%ld", &std[i].schols);
    }

    printf("어떤 순서로 정렬할까요? [0]...키순  [1]...이름순 :  ");
    scanf("%d", &sort_type);

    switch (sort_type)
    {
    case 0:
        sort_by_height(std, NUMBER); //키순으로 오름차순 정렬
        break;
    case 1:
        sort_by_name(std, NUMBER); //이름순으로 오름차순 정렬
        break;
    }
    for (i = 0; i < NUMBER; i++)
        printf("%-8s %6d%6.1f%7ld\n", std[i].name, std[i].height, std[i].weight, std[i].schols);

    return 0;
}