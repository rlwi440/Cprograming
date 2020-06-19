/**
 * @param   int i
 * @return  struct enetry
 * 
 * @description example struct array program
 * 
 * @version 0.28.2 
 * @author  깔끔한청년
 * @seecom  C++/C
 * @Since   2020.06.18
 */

#include <stdio.h>
#pragma warning(disableL : 4996)
struct entry
{
    char fname[20];
    char lname[20];
    char phone[10];
};
struct entry list[4];
int i;
void main()
{
    for (i = 0; i < 4; i++)
    {
        printf("Enter first name : ");
        scanf("%s", list[i].fname);
        printf("Enter last name : ");
        scanf("%s", list[i].lname);
        printf("Enter phone number : ");
        scanf("%s", list[i].phone);
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < 4; i++)
    {
        printf("Name:%s %s", list[i].fname, list[i].lname);
        printf("\t\tphone :%s\n", list[i].phone);
    }
}