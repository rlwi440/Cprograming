/**
 * @param fscanf  
 * @return fscanf
 * 
 * @description example statement print out personal data
 * 
 * @version 0.29.0
 * @author 깔끔한청년
 * @Seecom  C/C++
 * @Since 2020.07.2
 */

#include <stdio.h>
#include <string.h>
#define NUM_MAX 50   //읽어들인사람수의상한
#define NAME_LEN 100 //이름용 문자열의 요소개수

int main(void)
{
    FILE *fp;
    int i, j;
    int number = 0;               //사람수
    char name[NAME_LEN][NUM_MAX]; //이름수
    double height[NUM_MAX];       //키
    double weight[NUM_MAX];       //몸무게
    double hsum = 0.0;            //키 합계
    double wsum = 0.0;

    if ((fp = fopen("hw.dat", "r")) == NULL) //열기
        printf("\a파일 열 수 없습니다.\n");
    else
    {
        for (i = 0; i < NUM_MAX; i++)
        {
            if (fscanf(fp, "%s%lf%lf", name[number], &height[number], &weight[number]) != 3)
                break;

            hsum += height[number];
            wsum += weight[number];
            number++;
        }

        for (i = 0; i < number - 1; i++)
        { //오름차순 정렬
            for (j = number - 1; j > 1; j--)
            {
                if (height[j - 1] > height[j])
                {
                    char tn[NAME_LEN];
                    double td;
                    strcpy(tn, name[j]);
                    strcpy(name[j], name[j - 1]);
                    strcpy(name[j - 1], tn);
                    td = height[j];
                    height[j] = height[j - 1];
                    height[j - 1] = td;
                    td = weight[j];
                    weight[j] = weight[j - 1];
                    weight[j - 1] = td;
                }
            }
        }

        for (i = 0; i < number; i++)
            printf("%-10s %5.1f %5.1f\n", hsum / number, wsum / number);
        fclose(fp);
    }
    return 0;
}