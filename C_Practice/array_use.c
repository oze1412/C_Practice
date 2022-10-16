#include<stdio.h>
#include<math.h>

//int GetNum(void);
//void Print(int* arr);

int main_array_use(void)
{
	// 선택정렬로 알려진 버블정렬

	/*int aList[5] = { 0 };
	int i = 0, j = 0, nTmp = 0;

	for (i = 0; i < 5; i++)		scanf_s("%d", &aList[i]);

	for (i = 0; i < 4; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			if(aList[i] > aList[j])
			{
				nTmp = aList[i];
				aList[i] = aList[j];
				aList[j] = nTmp;
			}
		}
	}

	for (i = 0; i < 5; i++)		printf("%d ", aList[i]);*/


	// 버블정렬

	/*int aList[5] = { 0 };
	int i = 0, j = 0, nTmp = 0;

	for (i = 0; i < 5; i++)		scanf_s("%d", &aList[i]);

	for (i = 4; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (aList[j] > aList[j + 1])
			{
				nTmp = aList[j];
				aList[j] = aList[j + 1];
				aList[j + 1] = nTmp;
			}
		}
	}

	for (i = 0; i < 5; i++)		printf("%d ", aList[i]);*/


	// 선택정렬

	/*int aList[5] = { 0 };
	int i = 0, j = 0, nMinIndex = 0, nTmp = 0;

	for (i = 0; i < 5; i++)		scanf_s("%d", &aList[i]);

	for (i = 0; i < 5; i++)
	{
		nMinIndex = i;
		for (j = i + 1; j < 5; j++)
		{
			if (aList[nMinIndex] > aList[j])		nMinIndex = j;
		}
		if (nMinIndex != i)
		{
			nTmp = aList[nMinIndex];
			aList[nMinIndex] = aList[i];
			aList[i] = nTmp;
		}
	}

	for (i = 0; i < 5; i++)		printf("%d ", aList[i]);*/


	// 지그재그 채우기 - 1

	/*int aList[5][5] = { 0 };
	int i = 0, j = 0, nCounter = 0;

	for (i = 0; i < 5; i++)
	{
		if (i % 2)
			for (j = 4; j >= 0; j--)	aList[i][j] = ++nCounter;
		else
			for (j = 0; j < 5; j++)		aList[i][j] = ++nCounter;
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%d\t", aList[i][j]);
		putchar('\n');
	}*/


	// 지그재그 채우기 - 2

	/*int aList[5][5] = {0};
	int i = 0, j = 0, nCounter = 0, Offset = 1;
	
	for (i = 0; i < 5; i++)
	{
		if (i % 2)	nCounter = 5 * (i + 1);
		else		nCounter = 5 * i + 1;

		for (j = 0; j < 5; j++)
		{
			aList[i][j] = nCounter;
			nCounter += Offset;
		}

		Offset = -Offset;
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%d\t", aList[i][j]);
		putchar('\n');
	}*/


	// 지그재그 채우기 - 3

	/*int aList[5][5] = { 0 };
	int i = 0, j = 0, nCounter = 0, flag = 1;

	for (i = 0; i < 5; i++)
	{
		if (flag)
		{
			for (j = 0; j < 5; j++)
			{
				aList[i][j] = ++nCounter;
			}

			flag = 0;
		}
		else
		{
			for (j = 4; j >= 0; j--)
			{
				aList[i][j] = ++nCounter;
			}

			flag = 1;
		}
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%d\t", aList[i][j]);
		putchar('\n');
	}*/


	// 달팽이배열 - 1

	/*int snail[5][5] = { 0 };
	int i = 0, x = 0, y = -1, nCounter = 0, cube = 0, offset = 1;

	cube = 2 * sqrt(sizeof(snail) / sizeof(type(snail))) - 1;

	for (cube; cube > 0; cube -= 2)
	{
		for (i = 0; i < cube; i++)
		{
			if (cube / 2 + 1 > i)
			{
				y += offset;
				snail[x][y] = ++nCounter;
			}
			else
			{
				x += offset;
				snail[x][y] = ++nCounter;
			}
		}
		offset = -offset;
	}

	for (x = 0; x < 5; x++)
	{
		for (y = 0; y < 5; y++)
			printf("%d\t", snail [x][y]);
		putchar('\n');
	}*/


	// 달팽이 배열 - 2

	/*int snail[5][5] = { 0 };
	int i = 0, x = 0, y = -1, nCounter = 0, cube = 0, offset = 1;

	cube = 2 * sqrt(sizeof(snail) / sizeof(type(snail))) - 1;

	for (cube; cube > 0; cube -= 2)
	{
		for (i = 0; i < cube; i++)
		{
			if (cube / 2 + 1 > i)	y += offset;
			else					x += offset;
			
			snail[x][y] = ++nCounter;
		}
		offset = -offset;
	}

	for (x = 0; x < 5; x++)
	{
		for (y = 0; y < 5; y++)
			printf("%d\t", snail[x][y]);
		putchar('\n');
	}*/

	
	// 연습 9-1
	
	/*int i = 0, j = 0, nCounter = 0;
	int aList[5][5] = { 0 };
	
	for (i = 0; i < 5; i++)
	{
		if (i % 2)
			for (j = 4; j >= 0; j--)	aList[j][i] = ++nCounter;
		else 
			for (j = 0; j < 5; j++)		aList[j][i] = ++nCounter;
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%d\t", aList[i][j]);
		putchar('\n');
	}*/


	// 연습 9-2

	/*int b_snail[5][5] = { 0 };
	int i = 0, x = 5, y = 0, nCounter = 0, offset = 1, cube = 0;

	cube = 2 * sqrt(sizeof(b_snail) / sizeof(type(b_snail))) - 1;

	for (cube; cube > 0; cube -= 2)
	{
		for (i = 0; i < cube; i++)
		{
			if (cube / 2 + 1 > i)		x -= offset;
			else						y += offset;

			b_snail[y][x] = ++nCounter;
		}
		offset = -offset;
	}

	for (y = 0; y < 5; y++)
	{
		for (x = 0; x < 5; x++)
			printf("%d\t", b_snail[y][x]);
		putchar('\n');
	}*/


	// 연습(선택정렬로 알려진 버블정렬 - 내림차순)

	/*int Num[5] = { 0 };
	int* pNum = Num;
	int i = 0, j = 0, nTmp = 0;

	for (i = 0; i < 5; i++)
		Num[i] = GetNum();

	for (i = 0; i < 4; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			if (Num[i] < Num[j])
			{
				nTmp = Num[i];
				Num[i] = Num[j];
				Num[j] = nTmp;
			}
		}
	}

	Print(pNum);*/


	// 연습(버블정렬 - 오름차순)

	/*int Num[5] = { 0 };
	int* pNum = Num;
	int i = 0, j = 0, nTmp = 0;

	for (i = 0; i < 5; i++)
		Num[i] = GetNum();

	for (i = 1; i < 5; i++)
	{
		for (j = 0; j < 5 - i; j++)
		{
			if (Num[j] > Num[j + 1])
			{
				nTmp = Num[j];
				Num[j] = Num[j + 1];
				Num[j + 1] = nTmp;
			}
		}
	}

	Print(pNum);*/

	
	// 연습(선택정렬 - 내림차순)

	/*int Num[5] = { 0 };
	int* pNum = Num;
	int i = 0, j = 0, nTmp = 0, std = 0;

	for (i = 0; i < 5; i++)
		Num[i] = GetNum();

	for (i = 0; i < 4; i++)
	{
		std = i;
		for (j = i + 1; j < 5; j++)
		{
			if (Num[std] < Num[j])
				std = j;
		}

		if (std != i)
		{
			nTmp = Num[std];
			Num[std] = Num[i];
			Num[i] = nTmp;
		}
	}

	Print(pNum);*/

	return 0;
}


/*int GetNum(void)
{
	int nInput = 0;

	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &nInput);

	return nInput;
}

void Print(int* arr)
{
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d ", *(arr + i));
	}
}*/