#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    int Array[6] = { 0 };
    int iReturn = 0;

    printf("숫자 6개를 입력하시오 : ");
    scanf_s("%d, %d, %d, %d, %d, %d", &Array[0], &Array[1], &Array[2], &Array[3], &Array[4], &Array[5]);


    for (int isum = 0; isum < 6; isum++)
    {

        iReturn += Array[isum];
    }

    printf("입력하신 숫자의 합은 %d입니다.", iReturn);

}