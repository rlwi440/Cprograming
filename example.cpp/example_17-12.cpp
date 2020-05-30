#include <stdio.h>

struct student
{
    int num;
    double grade;
};
typedef struct student student; //Student 형으로 재정의
void print_data(student *ps);   //매개변수는 student형의 포인터

int main(void)
{
    student s1 = {315, 4.2}; //student형의 변수 선언 과  초기화

    print_data(&s1); //Student형 변수의 주소 전달

    return 0;
}

void print_data(student *ps)
{
    printf("학번 : %d\n", ps->num); //student 포인터로 멤버접근
    printf("학점 : %.1lf\n", ps->grade);
} //제목 재수정(2020년 05월 31일),혼자 공부하는 c언어 파일 모음집