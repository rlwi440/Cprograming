#include <stdio.h>

struct profile         //신상명세 구조체 선언
{
    itn age ;           //나이
    double height;      //키
};

struct student
{
    struct profile pf;   //profile 구조체 를 멤버로 사용 pf(profile) 
    int id;              //학번을 저장할 멤버
    double grade ;       //학번을 저장할 멤버
};

int main(void)
{
    struct student yuni ; //sutdent 구조체 변수 선언

     yuni.pf.age  =24;           //pf 멤버의 age 멤버에 나이 저장
     yuni.pf.height =173.5;      //pf 멤버의 height 멤버에 키 저장
     yuni.pr.id=315;
     yuni.pr.grade =4.3;

     printf("나이 : %d\n",yuni.pf.age);             //pf 멤버의 age 멤버 출력
     printf(" 키 : %.1lf\n", yuni.pf.height);       //pf 멤버의 height 멤버 출력
     printf(" 학번: %d\n",yuni.pf.id);              //id 멤버 출력
     printf("학점 :%.1lf\n",yuni.pf .grade);        //gtade 멤버 출력

    return 0;
}