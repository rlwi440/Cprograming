#include <stdio.h>
#include <string.h>
#define max_count 3	   //사용할 문자열 개수는 3개
#define max_length 100 //문자열 최대길이는 100 개

void print_line(void); //함수선언

int main(void)

{

	printf("3명의 학생 정보를 입력하시오.\n");
	print_line();
	printf("이름 : 배기원\n");
	printf("학과 : 컴퓨터 과학과\n");
	printf("주민등록번호 : 971001xxxxxx\n");
	printf("배기원 , 1997년 10월 01일, 윤년아님, 대한민국,남자, 컴퓨터과학과\n");
	print_line();
	printf("이름 : 빅토리아 \n");
	printf("학과 : 경영학과\n");
	printf("주민등록번호 : 000317xxxxxxx\n");
	printf("빅토리아 , 2000년 03월 17일 윤년, 외국,여자 경영학과\n");
	print_line();
	printf("이름 : 타이슨\n");
	printf("학과 : 유치원교육과\n");
	printf("주민등록번호 : 001001xxxxxx\n");
	printf("타이슨 , 2002년 09월 01일, 윤년, 대만,남자, 유치원교육과\n");
	printf("===========================================================\n");
	printf("입력 받은 3명의 정보를 생년월일 기준으로 오름차순으로 출력\n");
	print_line();

	int step, i;
	char temp_str[max_length];
	char str_list[max_count][max_length] = {
		"타이슨 , 2002년 09월 01일, 윤년, 외국,남자, 유치원교육과\n",
		"빅토리아 , 2000년 03월 17일, 윤년, 외국,여자, 경영학과\n",
		"배기원 , 1997년 10월 01일, 윤년아님, 대한민국,남자, 컴퓨터과학과\n",
	};

	for (i = 0; i < max_count; i++)
		printf("%s\n", str_list[i]);

	for (step = 0; step < max_count - 1; step++)
	{
		if (strcmp(str_list[i], str_list[i + 1]) > 0)
		{
			strcpy_s(temp_str, max_length, str_list[i]);
			strcpy_s(str_list[i], max_length, str_list[i + 1]);
			strcpy_s(str_list[i + 1], max_length, temp_str);
		}
	}
	return 0;
}

void print_line(void)
{
	int i;
	for (i = 0; i < 50; i++)
	{
		printf(" -");
	}
	printf("\n");
}