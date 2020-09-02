/**
 * @param int na nb nc 
 * @return sort3(&na,&nb,&nc)
 * 
 * @description exammple Sort 3 integers in ascending order 
 * 
 * @version 0.29.0
 * @author 깔끔한청년
 * @Seecom  C/C++
 * Since 2020.07.08
 */

#include <stdio.h>

void swap(int *px, int *py) //px와 py가 가리키는 객체의 값 교환
{
    int temp = *px;
    *px = *py;
    *py = temp;
}

void sort3(int *n1, int *n2, int *n3) //*n1?*n2?*n3이 되도록 정렬
{
    if (*n1 > *n2)
        swap(n1, n2);
    if (*n2 > *n3)
        swap(n2, n3);
    if (*n1 > *n3)
        swap(n1, n3);
}

int main(void)
{
    int na, nb, nc;

    puts("3개의 정수를 입력해주세요.");
    printf("정수 A: ");
    scanf("%d", &na);
    printf("정수 b: ");
    scanf("%d", &nb);
    printf("정수 c: ");
    scanf("%d", &nc);

    sort3(&na, &nb, &nc);

    puts("오름차순으로 정렬했습니다.");
    printf("정수 A는 %d입니다.\n", na);
    printf("정수 B는 %d입니다.\n", nb);
    printf("정수 C는 %d입니다.\n", nc);

    return 0;
}