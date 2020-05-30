#include <stdio.h>

struct student //학생 구조체 선언
{
    int id;
    char name[20]; //이름
    double grade;  //학점
};

int main(void)
{
    struct student s1 = {315, "깔끔한 청년", 2.4}, // 구조체 변수 선언과 초기화
        s2 = {316, "이순산", 3.7},
                   s3 = {317, "한량쟁이", 4.4};

    struct student max; //최고 학점을 저장할 구조체 변수

    max = s1; //s1을 최고 학점으로 가정
    if (s2.grade > max.grade)
        max = s2; //s2가 더 높으면  max 에 대입
    if (s3.grade > max.grade)
        max = s3; //s3가 더 높으면  max 에 대입

    printf("학번: %d\n", max.id);       //최고 학점 학생의 학번 출력
    printf("이름 :%s\n", max.name);     //최고 학점 학생으 이름 출력
    printf("학점 :%.1lf\n", max.grade); //최고 학점 학생의 학점 출력

    return 0;
} //제목 재수정(2020년 05월 31일),혼자 공부하는 c언어 파일 모음집