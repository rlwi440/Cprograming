<<<<<<< HEAD
#include <stdio.h>

struct profile         //신상명세 구조체 선언
{
    itn age ;           //나이
=======
#include<stdio.h>

struct profile          //신상명세 구조체 선언
{   
    int age;            //나이
>>>>>>> 6a08625... [update] use structers with other structuers as members at 483 page
    double height;      //키
};

struct student
{
<<<<<<< HEAD
    struct profile pf;   //profile 구조체 를 멤버로 사용 pf(profile) 
    int id;              //학번을 저장할 멤버
    double grade ;       //학번을 저장할 멤버
=======
    struct profile pf;      //pro file 구조체를 멤버 로 사용 pf (profile)
    int id;                 //학번을 저장할 멤버
    double grade            //학점을 저장할 멤버
>>>>>>> 6a08625... [update] use structers with other structuers as members at 483 page
};

int main(void)
{
<<<<<<< HEAD
    struct student yuni ; //sutdent 구조체 변수 선언

     yuni.pf.age  =24;           //pf 멤버의 age 멤버에 나이 저장
     yuni.pf.height =173.5;      //pf 멤버의 height 멤버에 키 저장
     yuni.pr.id=315;
     yuni.pr.grade =4.3;

     printf("나이 : %d\n",yuni.pf.age);             //pf 멤버의 age 멤버 출력
     printf(" 키 : %.1lf\n", yuni.pf.height);       //pf 멤버의 height 멤버 출력
     printf(" 학번: %d\n",yuni.pf.id);              //id 멤버 출력
     printf("학점 :%.1lf\n",yuni.pf .grade);        //gtade 멤버 출력
=======
    struct student yuni;         //student 구조체 변수 선언

    yuni.pf.age  =24;           //pf 멤버의 age 멤버 출력
    yuni.pf.height =173.5;
    yuni.pr.id=315;
    yuni.pr.grade =4.3;

    printf("나이 : %d\n",yuni.pf.age);
    printf(" 키 : %.1lf\n", yuni.pf.height);
    printf(" 학번: %d\n",yuni.pf.id);
    printf("학점 :%.1lf\n",yuni.pf .grade);
>>>>>>> 6a08625... [update] use structers with other structuers as members at 483 page

    return 0;
}