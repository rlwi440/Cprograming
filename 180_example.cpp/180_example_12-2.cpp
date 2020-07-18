/**
 * @param  struct student
 * @return struct
 * 
 * @description structure representing the student 
 * 
 * @version 0.29.0
 * @author 깔끔한청년
 * @seecom C/C++
 * @Since 2020.07.18
 */

#include <stdio.h>

#define NAME_LEN 64 //이름 문자 개수

typedef struct student
{
    char name[NAME_LEN];
    int height;
    float weight;
    long schols; //장학금
} student;

void heeyoon(student *std)
{
    if (std->height < 180)
        std->height = 180;
    if (std->weight > 80)
        std->weight = 80;
}

int main(void)
{
    student gildong;

    printf("이름 : ");
    scanf("%s", gildong.name);
    printf("키 : ");
    scanf("%d", &gildong.height);
    printf("몸무게 :");
    scanf("%f", &gildong.weight);
    printf("장학금 : ");
    scanf("%ld", &gildong.schols);

    heeyoon(&gildong);

    printf("이름 : ");
    scanf("%s", gildong.name);
    printf("키 : ");
    scanf("%d", &gildong.height);
    printf("몸무게 :");
    scanf("%f", &gildong.weight);
    printf("장학금 : ");
    scanf("%ld", &gildong.schols);

    return 0;
}