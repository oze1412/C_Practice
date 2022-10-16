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
//	printf("나이를 입력하세요 : ");
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
//	printf("정수를 입력하세요 : ");
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
//	printf("%d, %d, %d 중 가장 큰 수는 %d 입니다.", a, b, c, nMax);
//}

//int GetFactorial(int nParam);
//int GetNum(void);
//int GetMin(int a, int b, int c, int d);
//void PrintResult(int a, int b, int c, int d, int nMin);
//int GetAge(void);
//int GetFee(int nAge);

int main_function(void)
{
	// 사용자 정의 함수

	/*printf("%d", Add(3, 4));*/


	//메뉴 이벤트 

	/*int nMenu = 0;

	while ((nMenu = PrintMenu()) != 0)
	{
		switch (nMenu)
		{
		case 1 :
			puts("새 항목 추가");
			break;

		case 2 :
			puts("검색");
			break;

		case 3 :
			puts("출력");
			break;

		case 4 :
			puts("삭제");
			break;

		default:
			puts("알 수 없는 명령어");
			break;
		}
		_getch();
	}

	puts("BYE!");*/


	// 요금 계산 

	/*int nMenu = 0, nAge = 0;

	while ((nMenu = PrintMenu()) != 0)
	{
		switch (nMenu)
		{
		case 1:
			puts("새 항목 추가");
			nAge = GetAge();
			printf("%d", GetFee(nAge));
			break;

		case 2:
			puts("검색");
			break;

		case 3:
			puts("출력");
			break;

		case 4:
			puts("삭제");
			break;

		default:
			puts("알 수 없는 명령어");
			break;
		}
		_getch();
	}

	puts("BYE!");*/


	// 실습문제 10-1

	/*int aList[3] = { 0 };
	int nMax = -9999, i = 0;

	for (i = 0; i < 3; i++)
		aList[i] = GetData();

	nMax = GetMax(aList[0], aList[1], aList[2]);

	PrintData(aList[0], aList[1], aList[2], nMax);*/


	// UI 기능 분리

	/*int nResult = 0, nInput = 0;

	printf("계승을 구할 정수(1~10)를 입력하세요 : ");
	scanf_s("%d", &nInput);

	nResult = GetFactorial(nInput);
	if (nResult == 0)
	{
		puts("ERROR : 1~10 사이의 정수를 입력하세요.");
		return 0;
	}

	printf("Result : %d\n", nResult);*/


	// 연습문제 10-1

	/*int aList[4] = { 0 };
	int i = 0, nMin = 0;

	for (i = 0; i < 4; i++)
		aList[i] = GetNum();
	
	nMin = GetMin(aList[0], aList[1], aList[2], aList[3]);

	PrintResult(aList[0], aList[1], aList[2], aList[3], nMin);*/


	// 연습문제 10-3

	/*int nAge = 0;

	nAge = GetAge();
	if (nAge == 0)
	{
		puts("ERROR : 정상적인 나이를 입력하세요.");
		return 0;
	}

	printf("최종요금 : %d원", GetFee(nAge));*/
	

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
//	printf("정수를 입력하세요 : ");
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
//	printf("%d, %d, %d, %d 중 가장 작은 수는 %d 입니다.", a, b, c, d, nMin);
//}
//
//int GetAge(void)
//{
//	int nAge = 0;
//	printf("나이를 입력하세요 : ");
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