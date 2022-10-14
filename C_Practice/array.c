#include<stdio.h>

int main_array(void)
{
	// 배열의 값 인덱스

	/*int aList[5] = { 0 };
	int bList[5] = { 1, 2, 3, 4, 5 };

	scanf_s("%d", &aList[3]);
	printf("%d", aList[bList[2]]);*/


	// 실습 8-1

	/*int aList[5] = { 30, 40, 10, 50, 20 };
	int i = 0;

	for (i = 1; i < 5; i++)
	{
		if (aList[i] > aList[0])
			aList[0] = aList[i];
	}

	for (i = 0; i < 5; i++)		printf("%d ", aList[i]);
	putchar('\n');

	printf("MAX : %d\n", aList[0]);*/


	// 실습 8-2

	/*int aList[5] = { 30, 40, 10, 50, 20 };
	int i = 0, nTmp = 0;

	for (i = 1; i < 5; i++)
	{
		if (aList[i] < aList[0])
		{
			nTmp = aList[i];
			aList[i] = aList[0];
			aList[0] = nTmp;
		}
	}

	for (i = 0; i < 5; i++)		printf("%d ", aList[i]);
	putchar('\n');

	printf("MIN : %d\n", aList[0]);*/


	// 문자열

	/*char a[8] = { 0 };
	scanf_s("%s", a, sizeof(a));
	printf("%s(%d)", a, sizeof(a));*/


	// 실습 8-3

	/*int aList[3][4] = {
		{10, 20, 30},
		{40, 50, 60}
	};
	int i = 0, j = 0;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			aList[i][3] += aList[i][j];
			aList[2][j] += aList[i][j];
		}
		aList[2][3] += aList[i][3];
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%d ", aList[i][j]);
		putchar('\n');
	}*/


	// 연습 1

	/*int input_num[5] = { 0 };
	int i = 0, min = 0, max = 0;

	for (i = 0; i < 5; i++)		scanf_s("%d", &input_num[i]);

	min = max = input_num[0];

	for (i = 1; i < 5; i++)
	{
		if (input_num[i] > max)			max = input_num[i];
		else if (input_num[i] < min)	min = input_num[i];
	}

	printf("MIN : %d, MAX : %d", min, max);*/

	
	// 연습 2

	/*int i = 0;
	char input_str[999] = { 0 };
	int Length = 0;
	gets_s(input_str, sizeof(input_str));

	while (input_str[Length] != '\0')
		Length++;

	printf("한글 문자의 개수는 %d자 입니다.", Length / 2);*/

	// 장난

	/*int i = 0;
	char input_str[999] = { 0 };
	char right[11] = { "나는천재다" };
	char correct = 0;

	gets_s(input_str, sizeof(input_str));

	for (i = 0; sizeof(input_str) > i; i++)
	{
		if (input_str[i] == '\0')	break;
		else if (input_str[i] == right[i])	correct = 'X';
		else								
		{
			correct = 'O';
			break;
		}
	}

	printf("%c", correct);*/

	return 0;
}