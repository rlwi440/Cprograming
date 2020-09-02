#include <stdio.h>

struct address // 주소록을 만들 구조체 선언
{
    char name[20];
    int age;
    char tel[20];
    char addr[80];
};

void print_list(struct address *lp);

int main(void)
{
    struct address list[5] = {//요소가 5개인 구조체 배열 선언
                              {"홍길동", 23, "111-1111", "울릉도 독도"},
                              {"이순신", 35, "222-2222", "서울 건청동"},
                              {"장보고", 19, "333-3333", "완도 청해진"},
                              {"유관순", 15, "444-4444", "충남 천안"},
                              {"안중근", 45, "555-5555", "황해도 해주"}};

    print_list(list);

    return 0;
}

void print_list(struct address *lp)
{
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("%10s%5d%15s%20s\n", //각 배열 요소의 멤버 출력
               (lp + i)->name, (lp + i)->age, (lp + i)->tel, (lp + i)->addr);
    }
} //제목 재수정(2020년 05월 31일),혼자 공부하는 c언어 파일 모음집