#include<stdio.h>
#include<malloc.h>
#include<string.h>
#include<stdlib.h>

//int TestFunc(void);
//int GetLength(char* pszBuffer);
//void MyStrrev(char* strRev);


// main 함수 원형

int main_pointer2(int argc, char* argv[])
{
	/*int i = 0;
	for (i = 0; i < argc; i++)
		puts(argv[i]);

	puts("End");*/


	// 다중 포인터

	/*char ch = 'A';
	char* pData = &ch;
	char** ppData = &pData;
	char*** pppData = &ppData;

	printf("%c\n", ch);
	printf("%c\n", *pData);
	printf("%c\n", **ppData);
	printf("%c\n", ***pppData);*/


	// 포인터배열 및 다중포인터 예제

	/*char* astrList[3] = { "Hello", "World", "String" };
	char** ppstrList = astrList;
	char*** pppstrList = &ppstrList;

	puts(ppstrList[0]);
	puts(ppstrList[1]);
	puts(ppstrList[2]);

	puts(*pppstrList[0]);
	puts(*(*(pppstrList + 0) + 1));*/


	// 다차원 배열에 대한 포인터

	/*char astrList[2][12] = { "Hello", "World" };
	char(*pstrList)[12] = astrList;

	puts(pstrList[0]);
	puts(astrList[1]);*/


	// auto -> 자동 범위 변수 -> but, C++ 11 표준부터 자동 타입 추론

	/*auto int aList[3] = { 10, 20, 30 };
	auto int i = 0;

	for (i = 0; i < 3; i++)
		printf("%d ", aList[i]);*/


	// static 정적변수

	/*printf("%d\n", TestFunc());
	printf("%d\n", TestFunc());
	printf("%d\n", TestFunc());*/


	// register -> 레지스터변수(cpu 메모리 사용 / 8비트, 16비트 컴퓨터 시절) -> 현재는 임베디드, H/W에 사용

	/*register int i = 0;
	printf("%d\n", i);*/
	//printf("%d\n", &i);	-> 레지스터는 주소가 아니라 고유명사로 식별


	// 연습문제 11-2

	/*char szBuffer[36] = { 0 };
	gets_s(szBuffer, 35);
	printf("문자열 길이 : %d\n", GetLength(szBuffer));*/


	// 연습문제 11-3

	/*char szBuffer[12] = { "HelloWorld" };
	char* pszData = NULL;

	puts(szBuffer);
	pszData = (char*)malloc(sizeof(char) * 12);
	memcpy(pszData, szBuffer, _msize(pszData));
	puts(pszData);
	free(pszData);*/


	// 연습문제 11-4

	/*char szBuffer[50] = { 0 };
	
	gets_s(szBuffer, sizeof(szBuffer));
	MyStrrev(szBuffer);

	printf("%s\n", szBuffer);*/



	// 연습문제 11-5

	/*char szBuffer[50] = { 0 };
	char* pszData = NULL, * pszNData = NULL;
	int len1 = 0, len2 = 0;

	gets_s(szBuffer, sizeof(szBuffer));
	len1 = GetLength(szBuffer) + 1;

	pszData = (char*)malloc(sizeof(char) * len1);
	memcpy(pszData, szBuffer, len1);
	puts(pszData);

	gets_s(szBuffer, sizeof(szBuffer));
	len2 = GetLength(szBuffer) + 1;

	pszNData = (char*)realloc(pszData, len1 + len2 - 1);
	if (pszNData == NULL)
		free(pszData);
	memcpy(&pszNData[len1 - 1], szBuffer, len2);
	puts(pszNData);

	free(pszNData);*/



	// 연습문제 11-5`

	/*char szBuffer[50] = { 0 };
	char* pszData = NULL, * pszNData = NULL;
	int len1 = 0, len2 = 0, len_sum = 0;

	gets_s(szBuffer, sizeof(szBuffer));
	len1 = GetLength(szBuffer) + 1;

	pszData = (char*)malloc(sizeof(char) * len1);
	strcpy_s(pszData, len1, szBuffer);
	puts(pszData);

	gets_s(szBuffer, sizeof(szBuffer));
	len2 = GetLength(szBuffer) + 1;
	len_sum = len1 + len2 - 1;

	pszNData = (char*)malloc(sizeof(char) * len_sum);
	strcpy_s(pszNData, len_sum, pszData);
	strcpy_s(&pszNData[len1 - 1], len2, szBuffer);
	puts(pszNData);


	free(pszData);
	free(pszNData);*/


	// 연습문제 11-6
	
	int cnt = 0, len = 0, sel = 0, i = 0;
	char** ppszBuf = NULL;

	printf("입력받을 문자열 갯수 : ");
	scanf_s("%d%*c", &cnt);
	printf("최대 문자열 길이 : ");
	scanf_s("%d%*c", &len);
	putchar('\n');
	ppszBuf = (char**)malloc(sizeof(char*) * cnt);

	for (i = 0; i < cnt; i++)
	{
		ppszBuf[i] = (char*)malloc(sizeof(char) * (len + 1));
		printf("%d번 째 문자열 : ", i + 1);
		gets_s(ppszBuf[i], len + 1);
	}
	putchar('\n');
	
	printf("출력받을 문자열 번호 : ");
	scanf_s("%d%*c", &sel);

	printf("%s\n", ppszBuf[sel - 1]);

	for (i = 0; i < cnt; i++)
		free(ppszBuf[i]);
	free(ppszBuf);




	

	



	return 0;
}

//int TestFunc(void)
//{
//	static int nData = 10;
//
//	++nData;
//
//	return nData;
//}

//int GetLength(char* pszBuffer)
//{
//	int Len = 0;
//	while (pszBuffer[Len] != '\0')
//		Len++;
//
//	return Len;
//}
//
//void MyStrrev(char* strRev)
//{
//	char* szCopy = NULL;
//
//	int len = GetLength(strRev);
//	szCopy = (char*)calloc(len + 1, sizeof(char));
//	memcpy(szCopy, strRev, len + 1);
//
//	for (int i = 0; i < len; i++)
//		strRev[i] = szCopy[(len - 1) - i];
//
//	free(szCopy);
//}