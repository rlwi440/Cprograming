#include<stdio.h>
#include<string.h> 
int main(void)
{
    char str[80];    // 문자열 을 입력한 배열
        char res_str[80]; // 생략 문자열을 저장할 배열
    char*star = "********" ;// 생략 부분을 채울 문자열
    int len; //  입력 문자열의 길이 보관
    printf("단어입력: ");
    scanf("%s",str);
    len=strlen(star);//입력한 단어의 길이 계산
   if(len <= 5)  // 길이가 5 이하이면 그대로 복사
   {
        strcpy(res_str,str);
    }
     else // 5보다 크면
    {
        strncpy(res_str,str,5);// 일단 다섯 문자 만 복사
        res_str[5]='\0'; // 마지막에 널문자 저장
        strncat(res_str,star,len-5);// 문자열 의 길이만큼 별로 채움
    }
    printf("입력한 단어:%s,생략한 단어: %s",str,res_str);
    return 0;
}

#include<stdio.h>

int main(void)
{
    int i=0;  //배열 요소 첨자 변수
    char str[20]; //문자열 저장할 배열
    char ch;//입력한 문자를 받아둘 임시 변수

    do // do~while 문이나 실행 후 조건을 검사합니다.
    {
    ch= getchar(); // 일단 문자 하나 입력
    str[i]=ch;// 배열에 저장
    i++; //첨자 증가
    }while(ch!='\n'); //입력한 문자가 개행이면 종료

    str[i]='\0'; // 개행문자가 입력된 위치에 널 문자 저장
    //printf("%s",str);
    return 0;
}

#include<stdio.h>

    char*my_strcpy(char*pd,char*ps); // 함수선언

    int main(void)
 {
     char str[80] ="strawberry";

     printf("바꾸기 전 문자열: %s\n",str);
     my_strcpy(str,"apple"); // 문자열 "apple" 복사
     printf("바꾼 후 문자열 후:%s\n",str);
     printf("다른 문자열 대입: %s\n",my_strcpy(str,"kiwi")); //반환값으로 출력

     return 0;
 }

    char*my_strcpy(char*pd,char*ps) // 복사 받을 곳(pd)와 복사할 곳 (ps)의 포인터
    {
      char*po =pd;  // pd 값을 나중에 반환하기 위해 보관

     while (*ps !='\0') //ps가 가리키는 문자가 널 문자가 아닌 모양
        {
            *pd =*ps; // ps가 가리키는 문자를 pd가 가리키는 위치에 대입
            pd++; //복사 받을 다음위치로  포인터 증가
            ps++; //복사할 다음 문자의 위치로 포인터 증가
        }
        *pd='\0'; //복사가 모두 끝난 후 복사 받을 곳 에 널문자 로 마무리

        return po; // 복사가  끝난 저장 공간의 시작 주소 반환
    }

#include <stdio.h>

void auto_func(void);  // auto_func 함수선언
void static_func(void); // static_func 함수선언

int main(void)
{
    int i;

    printf("일반 지역변수(auto)를 사용한 함수 ...\n");
    for (i=0; i<3; i++)
    {
        auto_func();
    }

    printf("정적 지역 변수(static)를 사용한 함수...\n");
    for (i=0; i<3; i++)
    {
        static_func();
    }

    return 0;
}

void auto_func(void)
{
  auto  a = 0; //지역변수 선언과 초기화 

  a++; //a 값 1증가
  printf("%d\n",a);  //a 출력
}

void auto_func(void)
{
  static int a;   // 정적 지역 변수 선언    

  a++;    // a 값 1증가
  printf("%d\n",a); // a 출력
}
#include <stdio.h>

int main(void)
{ 
    register int i; //레지스터 변수
    auto sum =0; //auto 지역 변수
    
    for(i=1; i<=10000; i++) //반복과정에서 i를 계속 사용
    {
        sum += i;    //i 값을 반복하여 누적
    }
    printf("%d\n",sum);

    return 0;
}