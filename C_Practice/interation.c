#include<stdio.h>

int main_interation(void)
{
	// ���� ��� �ݺ���

	/*FILE* fp = stdin;

	char ch = 0;

	while ((ch = getchar()) != '\n')	putchar(ch);*/


	// ����ڰ� �Է��� ���ڸ�ŭ '*' ȣ��

	/*int nInput = 0;

	scanf_s("%d", &nInput);

	if (nInput > 9)			nInput = 9;
	else if (nInput < 0)	nInput = 0;

	while (nInput > 0)
	{
		putchar('*');
		nInput--;
	}*/


	// 5�� 5�� �簢�� ���

	/*int i = 0, j = 0;

	while (i < 5)
	{
		j = 0;
		while (j < 5)
		{
			printf("*\t");
			j++;
		}
		printf("\n");
		i++;
	}*/


	// 1~10���� ���� ���ϱ�

	/*int i = 1;
	int sum = 0;

	while (i <= 10)
	{
		sum += i;
		i++;
	}

	printf("%d", sum);*/


	// ������ �� �� ���

	/*int nInput = 0;
	int i = 1;
	
	scanf_s("%d", &nInput);

	while (i <= 9)
	{
		printf("%d * %d = %d\n", nInput, i, nInput * i);
		i++;
	}*/


	// �����ﰢ�� ���
	
	/*int i = 0, j = 0;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j <= i; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}*/
	

	// ������ �����ﰢ�� ���

	/*int i = 0, j = 0;

	for (i = 0; i < 5; i++)
	{
		for (j = 5; j > 0; j--)
		{
			if(j - i > 1)	putchar(' ');
			else			putchar('*');
		}
		putchar('\n');
	}*/


	// �Ƕ�̵� ���

	/*int i = 0, j = 0;

	for (i = 0; i < 5; i++)
	{
		for (j = 9; j + i >= 5; j--)
		{
			if (j - i > 5)		putchar(' ');
			else				putchar('*');
		}
		putchar('\n');
	}*/
	

	// ������ �����ﰢ�� ��� - r

	/*int i = 0, j = 0;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (j + i < 4)		putchar(' ');
			else				putchar('*');
		}
		putchar('\n');
	}*/


	// �Ƕ�̵� ��� -r

	/*int i = 0, j = 0;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5 + i; j++)
		{
			if (j + i >= 4)		putchar('*');
			else				putchar(' ');
		}
		putchar('\n');
	}*/


	// �������� 7-1

	/*int sum = 0, conter = 0;
	int i = 1;
	
	while (i <= 100)
	{
		if (i % 4 == 0)
		{
			sum += i;
			conter++;
		}
		i++;
	}

	printf("%d %d", sum, conter);*/


	// �������� 7-2

	/*int i = 0, j = 0;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5 + i; j++)
		{
			if (j + i >= 4 && (j + i) % 2 == 0)		putchar('*');
			else									putchar(' ');
		}
		putchar('\n');
	}*/


	// �������� 7-4

	/*int nInput = 0;

	do
	{
		printf("Input number : ");
		scanf_s("%d", &nInput);
	} while (nInput < 0 || nInput > 10);

	puts("End");*/

	return 0;
}