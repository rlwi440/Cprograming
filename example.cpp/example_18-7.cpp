#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *fp;
    char str[20];
    fp = fopen("a.txt", "a+"); //읽기 가능한 추가 모드로 개방
    if (fp == NULL)            //파일 개방 확인
    {
        printf("파일을 만들지 못했습니다.\n");
        return 1;
    }

    while (1)
    {
        printf("과일이름 : ");
        scanf("%s", str);            //키보드 로 과일 이름 입력
        if (strcmp(str, "end") == 0) //end 입력시 종료
        {
            break;
        }
        else if (strcmp(str, "list") == 0) //list를 입력하면 파일의 내용확인
        {
            fseek(fp, 0, SEEK_SET); //버퍼의 위치지시자를 맨 처음으로 이동
            while (1)
            {
                fgets(str, sizeof(str), fp); //과일이름을 읽는다.
                if (feof(fp))                //파일의 내용을 모두 읽으면 종료
                {
                    break;
                }
                printf("%s", str); //읽은 과일 이름을 화면출력
            }
        }
        else
        {
            {
                fprintf(fp, "%s\n", str); //입력한 과일 이름을 파일에출력
            }
        }
        fclose(fp);

        return 0;
    }
} //제목 재수정(2020년 05월 31일),혼자 공부하는 c언어 파일 모음집