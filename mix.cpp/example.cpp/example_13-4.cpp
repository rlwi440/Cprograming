#include <stdio.h>

void auto_func(void);   // auto_func 함수선언
void static_func(void); // static_func 함수선언

int main(void)
{
  int i;

  printf("일반 지역변수(auto)를 사용한 함수 ...\n");
  for (i = 0; i < 3; i++)
  {
    auto_func();
  }

  printf("정적 지역 변수(static)를 사용한 함수...\n");
  for (i = 0; i < 3; i++)
  {
    static_func();
  }

  return 0;
}

void auto_func(void)
{
  auto a = 0; //지역변수 선언과 초기화

  a++;               //a 값 1증가
  printf("%d\n", a); //a 출력
}

void auto_func(void)
{
  static int a; // 정적 지역 변수 선언

  a++;               // a 값 1증가
  printf("%d\n", a); // a 출력
} //제목 재수정(2020년 05월 31일),혼자 공부하는 c언어 파일 모음집