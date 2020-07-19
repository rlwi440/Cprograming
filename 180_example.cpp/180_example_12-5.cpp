/**
 * @param typedef struct point,car
 * @return typedef struct 
 * 
 * @description example statement A struncture representing coordinates and a struncture representing automobiles
 * 
 * @version 0.29.0
 * @author 깔끔한청년
 * @seecom  C/C++
 * @Since   2020.07.19
 */

#include <math.h>
#include <stdio.h>

#define sqr(n) ((n) * (n))

typedef struct
{ //점의 좌표를 나타내는 구조체
    double x;
    double y;
} point;

typedef struct
{                //자동차를 나타내는 구조체
    point pt;    //현재위치
    double fuel; //남은연료
} car;

double distance_of(point pa, point pb)
{
    return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pa.y));
}

void put_info(car c)
{
    printf("현재위치:(%.2f,%.2f)\n", c.pt.x, c.pt.y);
    printf("남은연료:%2f리터\n", c.fuel);
}

int move(car *c, point dest)
{
    double d = distance_of(c->pt, dest); //이동거리
    if (d > c->fuel)                     //이동거리가 연료를 초과
        return 0;
    c->pt = dest; //현재위치 갱신(dest로이동)
    c->fuel -= d; //연료갱신(이동거리 d만큼 감소0)
    return 1;
}

int main(void)
{
    car mycar = {{0.0, 0.0}, 90.0};

    while (1)
    {
        int select;
        point dest;

        put_info(mycar);

        printf("이동할까요? [1...이동할곳 좌표 입력/2..이동 거리 입력/0..종료");
        scanf("%d", &select);
        if (select != 1 && select != 2)
            break;

        switch (select)
        {
        case 1:
            printf("목적지 x좌표 : ");
            scanf("&lf", &dest.x);
        case 2:
        {
            double x, y;
            printf("x 방향 이동거리: ");
            scanf("%lf,&x");
            printf("y 방향 이동거리: ");
            scanf("%lf", &y);
            dest.x = mycar.pt.x + x;
            dest.y = mycar.pt.y + y;
            break;
        }
        }
        if (!move(&mycar, dest))
            puts("\a연료 부족으로이동할 수 없습니다.");
    }

    return 0;
}