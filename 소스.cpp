#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    int Array[6] = { 0 };
    int iReturn = 0;

    printf("���� 6���� �Է��Ͻÿ� : ");
    scanf_s("%d, %d, %d, %d, %d, %d", &Array[0], &Array[1], &Array[2], &Array[3], &Array[4], &Array[5]);


    for (int isum = 0; isum < 6; isum++)
    {

        iReturn += Array[isum];
    }

    printf("�Է��Ͻ� ������ ���� %d�Դϴ�.", iReturn);

}