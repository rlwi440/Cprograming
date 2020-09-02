#include <stdio.h>

int main(void)
{
    FILE *ifp, *ofp;    //파일 포인터 선언
    char name[20];      //이름
    int kor, eng, math; //세 과목 점수
    int total;          //총점
    double avg;         //평균
    int res;            //fscanf 함수의 반환값 저장

    ifp = fopen("a.txt", "r"); //입력 파일을 읽기전용으로 개방
    if (ifp == NULL)           //개방 여부 확인
    {
        printf("입력 파일을 열지 못했습니다.\n");
        return 1;
    }

    ofp = fopen("b.txt", "w"); //출력 파일을 쓰기전용으로 개방
    if (ofp == NULL)           //개방 여부 확인
    {
        printf("출력 파일을 열지 못했습니다.\n");
        return 1;
    }

    while (1)
    {
        res = fscanf(ifp, "%s%d%d%d%d", name, &kor, &eng, &math); //데이터 입력
        if (res == EOF)                                           //파일의 데이터를  모두 읽으면 EOF 반환
        {
            break;
        }
        total = kor + eng + math;                        //총점계산
        avg = total / 3.0;                               //평균계산
        fprintf(ofp, "%s%5d%7.1lf\n", name, total, avg); //이름 ,총점,평균출력
    }
    fclose(ifp); //입력 파일닫기
    fclose(ofp); //출력 파일 닫기

    return 0;
} //제목 재수정(2020년 05월 31일),혼자 공부하는 c언어 파일 모음집