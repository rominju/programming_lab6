/*
20183699 �����
lab6.�迭 ����
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void indexAddMat(int ary[][3]);
void ptrProdMat(int ary[][3]);

int main()
{
	int num[3][3];
	int num1[3][3] = { 0 };
	printf("9���� ������ �Է��ϼ���>>");
	scanf("%d %d %d %d %d %d %d %d %d", &num[0][0], &num[0][1], &num[0][2], &num[1][0], &num[1][1], &num[1][2], &num[2][0], &num[2][1], &num[2][2]);

	printf("<�Է³����� ������·� ���>\n\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			printf(" %d  ", num[i][j]);
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			num1[i][j] = num[i][j];
	}
	
	indexAddMat(num1);
	printf("<����� ���� ���Ͽ� ������·� ���>\n\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			printf(" %d  ", num1[i][j]);
		printf("\n");
	}
	printf("\n");

	ptrProdMat(num);
	printf("<����� ���� ���Ͽ� ������·� ���>\n\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			printf(" %d  ", *(*(num + i) + j));
		printf("\n");
	}

	return 0;
}

void indexAddMat(int ary[][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			ary[i][j] += ary[i][j];
		}
	}
}

void ptrProdMat(int ary[][3])
{
	int prod[3][3] = { 0 };
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
		{
			int sum = 0;
			for (int m = 0; m < 3; m++)
			{
				sum += (*(*(ary + i) + m))*(*(*(ary + m) + j));
			}
			*(*(prod + i) + j) = sum;
		}

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			*(*(ary + i) + j) = *(*(prod + i) + j);

}
