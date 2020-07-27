/**
 * @param   char feeling[2048]
 * @return  get_data
 * 
 * @description Example statement prints the date and time mood at the time of execution
 * 
 * @version 0.29.0
 * @author 깔끔한청년
 * @seecom  C/C++
 * @Since 2020.07.27
 */

#include <time.h>
#include <stdio.h>

char data_file[] = "feeling.dat"; //파일 이름

void get_data(void)
{
    FILE *fp;

    if ((fp = fopen(data_file, "r")) == NULL) //열기
        printf("이 프로그램을 처음 실행하는군요.\n");
    else
    {
        int year, month, day, h, m, s;
        char feeling[2048]; //이전의 기분

        fscanf(fp, "%d%d%d%d%d%d%d", &year, &month, &day, &h, &m, &s);
        fscanf(fp, "%s", feeling);
        printf("이전 실행은  %d년 %d월 %d일  %d시 %d분 %d 초 였고 기분은'%s'였습니다.\n", year, month, day, h, m, s, feeling);
        fclose(fp);
    }
}

void put_data(const char *feeling)
{
    FILE *fp;
    time_t current = time(NULL);            //지금 날짜와 시간
    struct tm *timer = localtime(&current); //요소별 시간(지역 시간)

    if ((fp = fopen(data_file, "W")) == NULL) //열기
        printf("\a 파일을 열수 없습니다.\n");
    else
    {
        fprintf(fp, "%d%d%d%d%d\n", timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday, timer->tm_hour, timer->tm_min, timer->tm_sec);
        fprintf(fp, "%s\n", feeling);
        fclose(fp);
    }
}
int main(void)
{
    char feeling[2048];

    get_data(); //이전 날짜 ,시각을 가져와 출력

    printf("지금의 기분은 : ");
    scanf("%s", feeling);

    put_data(feeling); //이번날짜,시각쓰기

    return 0;
}