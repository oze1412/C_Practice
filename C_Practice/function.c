#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


//int Add(int a, int b)
//{
//	return a + b;
//}
//
//int GetAge(void)
//{
//	int nAge = 0;
//
//	printf("���̸� �Է��ϼ��� : ");
//	scanf_s("%d", &nAge);
//
//	return nAge;
//}
//
//int GetFee(int nAge)
//{
//	int base_fee = 1000;
//
//	if (nAge < 20)		base_fee /= 2;
//
//	return base_fee;
//}
//
//int PrintMenu(void)
//{
//	int nInput = 0;
//
//	system("cls");
//
//	printf("[1]New\t[2]Search\t[3]Print\t[4]Remote\t[0]Exit\n");
//	scanf_s("%d", &nInput);
//
//	return nInput;
//}

//int GetData(void)
//{
//	int nData = 0;
//	printf("������ �Է��ϼ��� : ");
//	scanf_s("%d", &nData);
//
//	return nData;
//}
//
//int GetMax(int a, int b, int c)
//{
//	int nMax = 0;
//	nMax = a;
//
//	if (nMax < b)			nMax = b;
//	if (nMax < c)			nMax = c;
//
//	return nMax;
//}
//
//void PrintData(int a, int b, int c, int nMax)
//{
//	printf("%d, %d, %d �� ���� ū ���� %d �Դϴ�.", a, b, c, nMax);
//}

//int GetFactorial(int nParam);
//int GetNum(void);
//int GetMin(int a, int b, int c, int d);
//void PrintResult(int a, int b, int c, int d, int nMin);
//int GetAge(void);
//int GetFee(int nAge);

int main_function(void)
{
	// ����� ���� �Լ�

	/*printf("%d", Add(3, 4));*/


	//�޴� �̺�Ʈ 

	/*int nMenu = 0;

	while ((nMenu = PrintMenu()) != 0)
	{
		switch (nMenu)
		{
		case 1 :
			puts("�� �׸� �߰�");
			break;

		case 2 :
			puts("�˻�");
			break;

		case 3 :
			puts("���");
			break;

		case 4 :
			puts("����");
			break;

		default:
			puts("�� �� ���� ��ɾ�");
			break;
		}
		_getch();
	}

	puts("BYE!");*/


	// ��� ��� 

	/*int nMenu = 0, nAge = 0;

	while ((nMenu = PrintMenu()) != 0)
	{
		switch (nMenu)
		{
		case 1:
			puts("�� �׸� �߰�");
			nAge = GetAge();
			printf("%d", GetFee(nAge));
			break;

		case 2:
			puts("�˻�");
			break;

		case 3:
			puts("���");
			break;

		case 4:
			puts("����");
			break;

		default:
			puts("�� �� ���� ��ɾ�");
			break;
		}
		_getch();
	}

	puts("BYE!");*/


	// �ǽ����� 10-1

	/*int aList[3] = { 0 };
	int nMax = -9999, i = 0;

	for (i = 0; i < 3; i++)
		aList[i] = GetData();

	nMax = GetMax(aList[0], aList[1], aList[2]);

	PrintData(aList[0], aList[1], aList[2], nMax);*/


	// UI ��� �и�

	/*int nResult = 0, nInput = 0;

	printf("����� ���� ����(1~10)�� �Է��ϼ��� : ");
	scanf_s("%d", &nInput);

	nResult = GetFactorial(nInput);
	if (nResult == 0)
	{
		puts("ERROR : 1~10 ������ ������ �Է��ϼ���.");
		return 0;
	}

	printf("Result : %d\n", nResult);*/


	// �������� 10-1

	/*int aList[4] = { 0 };
	int i = 0, nMin = 0;

	for (i = 0; i < 4; i++)
		aList[i] = GetNum();
	
	nMin = GetMin(aList[0], aList[1], aList[2], aList[3]);

	PrintResult(aList[0], aList[1], aList[2], aList[3], nMin);*/


	// �������� 10-3

	/*int nAge = 0;

	nAge = GetAge();
	if (nAge == 0)
	{
		puts("ERROR : �������� ���̸� �Է��ϼ���.");
		return 0;
	}

	printf("������� : %d��", GetFee(nAge));*/
	

	return 0;
}

//int GetFactorial(int nParam)
//{
//	int nResult = 1, i = 0;
//
//	if (nParam < 1 || nParam > 10)		return 0;
//
//	for (i = 1; i <= nParam; i++)
//		nResult *= i;
//
//	return nResult;
//}
//
//int GetNum(void)
//{
//	int nInput = 0;
//	printf("������ �Է��ϼ��� : ");
//	scanf_s("%d", &nInput);
//
//	return nInput;
//}
//
//int GetMin(int a, int b, int c, int d)
//{
//	int arr[4] = { a, b, c, d };
//	int nMin = arr[0], i = 0;
//	for (i = 1; i < 4; i++)
//		if (arr[i] < nMin)	nMin = arr[i];
//	
//	return nMin;
//}
//
//void PrintResult(int a, int b, int c, int d, int nMin)
//{
//	printf("%d, %d, %d, %d �� ���� ���� ���� %d �Դϴ�.", a, b, c, d, nMin);
//}
//
//int GetAge(void)
//{
//	int nAge = 0;
//	printf("���̸� �Է��ϼ��� : ");
//	scanf_s("%d", &nAge);
//
//	if (nAge < 0)	return 0;
//
//	return nAge;
//}
//
//int GetFee(int nAge)
//{
//	int BaseFee = 1000;
//	if (nAge < 14)
//	{
//		if (nAge < 4)	BaseFee *= 0;
//		else			BaseFee = BaseFee * 50 / 100;
//	}
//	else
//	{
//		if(nAge < 20)	BaseFee = BaseFee * 25 / 100;
//	}
//
//	return BaseFee;
//}