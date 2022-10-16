#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>

int main(void)
{
	// 주소 번지 연산자

	/*int nData = 10;

	printf("%s\n", "nData");
	printf("%d\n", nData);
	printf("%p\n", &nData);*/


	// 간접 지정 연산자

	/*int x = 10;
	int* pnData = &x;

	printf("x : %d\n", x);

	*pnData = 20;
	printf("x : %d\n", x);*/


	// 배열과 포인터

	/*int aList[5] = {0};
	int* pnData = aList; // aList == &aList[0]

	printf("aList[0] : %d\n", *pnData);
	printf("aList[0] : %d\n", aList[0]);

	*pnData = 20;
	printf("aList[0] : %d\n", *pnData);
	printf("aList[0] : %d\n", aList[0]);

	*pnData++;
	*pnData = 30;
	printf("aList[1] : %d\n", *pnData);
	printf("aList[1] : %d\n", aList[1]);*/


	// 배열 길이

	/*char szBuffer[16] = { "Hello" };
	char* pszData = szBuffer;
	int nLength = 0;

	while (*pszData != '\0')
	{
		pszData++;
		nLength++;
	}

	printf("Length : %d\n", nLength);
	printf("Length : %d\n", strlen(szBuffer));
	printf("Length : %d\n", strlen("Hello"));*/


	// 주소차로 문자열 길이 측정

	/*char szBuffer[16] = { "Hello" };
	char* pszData = szBuffer;

	while (*pszData != '\0')
		pszData++;

	printf("Length : %d\n", pszData - szBuffer);*/


	// malloc; free;

	/*int* pList = NULL, i = 0;

	pList = (int*)malloc(sizeof(int) * 3);

	pList[0] = 10;
	pList[1] = 20;
	pList[2] = 30;

	for (i = 0; i < 3; i++)
		printf("%d ", pList[i]);

	free(pList);*/


	// 동적 할당 메모리 초기화 1

	/*int* pList = NULL, * pNewList = NULL;

	// A
	int aList[3] = { 0 };

	// B
	pList = (int*)malloc(sizeof(int) * 3);
	memset(pList, 0, sizeof(int) * 3);

	// C
	pNewList = (int*)calloc(3, sizeof(int));

	free(pList);
	free(pNewList);*/


	// 동적 할당 메모리 초기화 2

	/*int i = 0;
	char szBuffer[] = { "Hello" };
	char* pszBuffer = "Hello";
	char* pszData = NULL;

	pszData = (char*)malloc(sizeof(char) * 6);
	for (i = 0; i < 6; i++)
		pszData[i] = szBuffer[i];

	printf("%p\n", pszData);

	puts(szBuffer);
	puts(pszBuffer);
	puts(pszData);

	free(pszData);*/


	// 동적 할당 메모리 크기 확인

	/*int* pData = NULL;

	pData = (int*)malloc(sizeof(int) * 3);
	printf("%d\n", _msize(pData));

	free(pData);*/

	
	// 메모리 복사

	/*char szBuffer[12] = { "HelloWorld" };
	char szNewBuffer[12] = { 0 };

	memcpy(szNewBuffer, szBuffer, 5);
	puts(szNewBuffer);

	memcpy(szNewBuffer, szBuffer, 8);
	puts(szNewBuffer);

	memcpy(szNewBuffer, szBuffer, 3);
	puts(szNewBuffer);

	memcpy(szNewBuffer, szBuffer, sizeof(szBuffer));
	puts(szNewBuffer);*/


	// 메모리 복사 (문자열 한정)

	/*char szBuffer[12] = {"HelloWorld"};
	char* pszData = NULL;

	pszData = (char*)malloc(sizeof(char) * 12);
	strcpy_s(pszData, sizeof(szBuffer), szBuffer);	// memcpy(pszData, szBuffer, sizeof(szBuffer));
	puts(pszData);

	free(pszData);*/


	// 메모리 비교 1

	/*char szBuffer[12] = { "TestString" };
	char* pszData = "TestString";

	printf("%d\n", memcmp(szBuffer, pszData, 10));
	printf("%d\n", memcmp("testData", pszData, 8));
	printf("%d\n", memcmp("DataString", pszData, 10));*/


	// 메모리 비교(문자열 한정)
	
	/*char szBuffer[12] = { "TestString" };
	char* pszData = "TestString";

	printf("%d\n", strcmp(szBuffer, pszData));
	printf("%d\n", strcmp("Teststring", pszData));
	printf("%d\n", strcmp("Test", pszData));*/


	// 문자열 검색

	char szBuffer[32] = { "I am a boy." };
	char* szp1 = strstr(szBuffer, "am");
	char szData[5] = { 0 };
	char* szp2 = strstr(szBuffer, "boy");

	printf("%p\n", szBuffer);

	printf("%p\n", szp1);
	printf("%p\n", szp2);

	printf("INDEX : %d\n", szp1 - szBuffer);
	printf("INDEX : %d\n", szp2 - szBuffer);

	strncpy_s(szData, sizeof(szData), szp1, 2);
	printf("%s\n", szData);
	strncpy_s(szData, sizeof(szData), szp2, 3);
	printf("%s\n", szData);








	return 0;
}