#include <stdio.h>

struct profile //신상명세 구조체 선언
{
    int age;       //나이
    double height; //키
};

struct student
{
    struct profile pf; //profile 구조체 를 멤버로 사용 pf(profile)
    int id;            //학번을 저장할 멤버
    double grade;      //학번을 저장할 멤버
};

int main(void)
{
    struct student yuni; //sutdent 구조체 변수 선언

    yuni.pf.age = 24;       //pf 멤버의 age 멤버에 나이 저장
    yuni.pf.height = 173.5; //pf 멤버의 height 멤버에 키 저장
    yuni.id = 315;
    yuni.grade = 4.3;

    printf("나이 : %d\n", yuni.pf.age);      //pf 멤버의 age 멤버 출력
    printf(" 키 : %.1lf\n", yuni.pf.height); //pf 멤버의 height 멤버 출력
    printf(" 학번: %d\n", yuni.id);          //id 멤버 출력
    printf("학점 :%.1lf\n", yuni.grade);     //gtade 멤버 출력

    return 0;
} //제목 재수정(2020년 05월 31일),혼자 공부하는 c언어 파일 모음집