#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <conio.h>

int Add(int *a, int *b)
{
	return *a + *b;
}

void InitList(int* pList, int nSize)
{
	for (int i = 0; i < nSize; i++)
	{
		printf("정수를 입력하세요 : ");
		scanf_s("%d", &pList[i]);
	}
}

void SortList(int* pList, int nSize)
{
	int nTmp = 0;

	for (int i = 0; i < nSize - 1; i++)
		for(int j = i + 1; j < nSize; j++)
			if (pList[i] > pList[j])
			{
				nTmp = pList[i];
				pList[i] = pList[j];
				pList[j] = nTmp;
			}
}

void PrintList(int* pList, int nSize)
{
	for (int i = 0; i < nSize; i++)
		printf("%d", pList[i]);
	putchar('\n');
}

void GetName(char* pszName, int nSize)
{
	printf("이름을 입력하세요 : ");
	gets_s(pszName, nSize);
}

char* GetNameP(void)
{
	char* pszName = NULL;

	pszName = (char*)calloc(32, sizeof(char));

	printf("이름을 입력하세요 : ");
	gets_s(pszName, sizeof(char) * 32);

	return pszName;
}

void Swap(int *a, int *b)
{
	int nTmp = 0;

	nTmp = *a;
	*a = *b;
	*b = nTmp;
}

int GetLength(const char* pszParam)
{
	int nLength = 0;

	while (pszParam[nLength] != '\0')
		nLength++;

	return nLength;
}

int MyStrcpy(char* strDst, int DstSize, char* strSrc)
{
	int nLen = strlen(strSrc), i = 0;
	if (nLen + 1 > DstSize)
		return DstSize - (nLen + 1);

	while (strSrc[i] != NULL)
	{
		strDst[i] = strSrc[i];
		i++;
	}
	
	strDst[i] = '\0';

	return nLen;
}

int NeverUse(void)
{
	int nData = 10;

	return &nData;
}

int GetFactorial(int nParam)
{
	int nResult = 0;

	if (nParam == 1)		return 1;

	nResult = nParam * GetFactorial(nParam - 1);

	return nResult;
}

void PutData(char* pszParam)
{
	if (*pszParam == '\0')	return;

	putchar(*pszParam);

	PutData(pszParam + 1);
}

char* MyStrcat(char* pszDst, char* pszSrc)
{
	while (*pszDst != '\0')
		++pszDst;

	while (*pszSrc != '\0')
		*pszDst++ = *pszSrc++;
	*++pszDst = '\0';

	return --pszDst;
}

void GetString(char* pBuffer, int pSize, char* name)
{
	printf("Input %s : ", name);
	gets_s(pBuffer, pSize);
}

int StrScaner(char* strDst, char* strSrc)
{
	int idx = 0;
	while (strDst[idx] != '\0')
	{
		if (strDst[idx] == strSrc[0])
			if (strncmp(strDst + idx, strSrc, strlen(strSrc)) == 0)
				return idx;

		idx++;
	}

	return -1;
}

void SortString(char* list[], int size)
{
	char* pTmp;
	for(int i = 0; i < size - 1; i++)
		for(int j = i + 1; j < size; j++)
			if (strcmp(list[i], list[j]) > 0)
			{
				pTmp = list[i];
				list[i] = list[j];
				list[j] = pTmp;
			}
}

int GetTotal(int* sumList, int column, int row)
{
	int total = 0, size = column * row;
	for (int i = 0; i < size; i++)
		total += sumList[i];

	return total;
}

int MyStrcmp(char* p_dst, char* p_src)
{
	int len_1 = strlen(p_dst), len_2 = strlen(p_src), i = 0;
	if (len_1 != len_2)
		return 1;

	for(i = 0; i < len_1; i++)
	{
		if (isupper(*(p_dst + i)) != 0)
			*(p_dst + i) = tolower(*(p_dst + i));
		if (isupper(*(p_src + i)) != 0)
			*(p_src + i) = tolower(*(p_src + i));
		if (*(p_dst + i) != *(p_src + i))
			return 1;
	}

	return 0;
}

typedef struct
{
	int num;
	char RSP[32];
}input_data;

void Game_RSP(int AI, int User)
{
	char* trans[3] = { "ROCK", "SCISSOR", "PAPER" };

	if (User > 2 || User < 0)
	{
		printf("입력값이 잘못되었습니다.\n");
	}
	else if (AI == User)
	{
		printf("AI : %s, User : %s\n", trans[AI], trans[User]);
		printf("YOU DRAW");
	}
	else
	{
		if ((User + 1) % 3 == AI)
		{
			printf("AI : %s, User : %s\n", trans[AI], trans[User]);
			printf("YOU WIN");
		}
		else
		{
			printf("AI : %s, User : %s\n", trans[AI], trans[User]);
			printf("YOU LOSE");
		}
	}
}

void AfterDay(int add)
{
	time_t cur_time = time(NULL);
	struct tm ptime = { 0 };
	cur_time += add * 60 * 60 * 24;

	localtime_s(&ptime, &cur_time);

	printf("%04d-%02d-%02d\n", ptime.tm_year + 1900, ptime.tm_mon + 1, ptime.tm_mday);
}

int main_func_app(void)
{
	// Call By Reference

	/*int a = 3, b = 7;
	printf("%d\n", Add(&a, &b));

	int aList[5] = { 0 };

	InitList(aList, 5);
	SortList(aList, 5);
	PrintList(aList, 5);*/


	// 문자열 받기

	/*char szName[12] = { 0 };

	GetName(szName, sizeof(szName));
	puts(szName);*/

	/*char* pszName = NULL;
	pszName = GetNameP();

	puts(pszName);

	free(pszName);*/


	// 교환

	/*int x = 10, y = 20;

	Swap(&x, &y);
	printf("%d %d", x, y);*/


	// 문자열 길이

	/*char* pszData = "Hello";

	printf("%d\n", GetLength("Hi"));
	printf("%d\n", GetLength(pszData));*/


	// 문자열복사

	/*char szBufferSrc[12] = { "TestString" };
	char szBufferDst[12] = { 0 };
	MyStrcpy(szBufferDst, sizeof(szBufferDst), szBufferSrc);
	puts(szBufferDst);*/


	// 절대 사용 금지 함수

	/*int* pnResult = NULL;
	pnResult = NeverUse();

	printf("%d\n", *pnResult);*/


	// 재귀호출

	/*printf("5! == %d\n", GetFactorial(5));*/


	// 재귀호출을 이용한 문자열 출력

	/*PutData("TestString");
	putchar('\n');*/


	// 문자처리함수

	/*char szBuffer[32] = { "Hello, World, 1245" };
	int upper = 0, lower = 0, num = 0, alpha = 0, ch = 0, hex = 0, space = 0;
	for (int i = 0; i < sizeof(szBuffer); i++)
	{
		if (isalpha(szBuffer[i]))
			alpha++;
		if (isdigit(szBuffer[i]))
			num++;
		if (isxdigit(szBuffer[i]))
			hex++;
		if (isalnum(szBuffer[i]))
			ch++;
		if (islower(szBuffer[i]))
			lower++;
		if (isupper(szBuffer[i]))
			upper++;
		if (isspace(szBuffer[i]))
			space++;
	}

	printf("szBuffer : %s\nalpha : %d, num : %d, hex : %d, ch : %d, lower : %d, upper : %d, space : %d\n"
		, szBuffer, alpha, num, hex, ch, lower, upper, space);

	for (int i = 0; i < sizeof(szBuffer); i++)
	{
		if (isupper(szBuffer[i]))
			szBuffer[i] = tolower(szBuffer[i]);
		else if (islower(szBuffer[i]))
			szBuffer[i] = toupper(szBuffer[i]);
	}
	printf("%s\n", szBuffer);*/


	// 문자열처리 - strcat_s

	/*char szPath[128] = { "C:\\Program Files\\" };
	char szBuffer[128] = { 0 };
	GetString(szBuffer, sizeof(szBuffer), "Path");

	strcat_s(szPath, sizeof(szPath), szBuffer);
	puts(szPath);*/


	// mystrcat

	/*char szPath[128] = { 0 };
	char* pszEnd = NULL;

	pszEnd = MyStrcat(szPath, "C:\\Program Files\\");
	pszEnd = MyStrcat(pszEnd, "qwe\\");
	pszEnd = MyStrcat(pszEnd, "asd");

	puts(szPath);*/


	// sprinf_s

	/*char szPath[128] = { 0 };
	char szBuffer[128] = { 0 };

	GetString(szBuffer, sizeof(szBuffer), "String");

	sprintf_s(szPath, sizeof(szPath), "C:\\Program Files\\%s", szBuffer);
	puts(szPath);*/
	

	// strpbark

	/*char szBuffer[128] = { 0 };
	char szSet[128] = { 0 };
	char* pszStart = szBuffer;

	GetString(szBuffer, sizeof(szBuffer), "String");

	GetString(szSet, sizeof(szSet), "character set");

	while ((pszStart = strpbrk(pszStart, szSet)) != NULL)
	{
		printf("[%p] Index : %d, Character : %c\n", pszStart, pszStart - szBuffer, *pszStart);

		pszStart++;
	}*/


	// strtok (가급적 사용 x)

	/*char szBuffer[128] = { "nData = x + y;\nnResult = a * b" };
	char* pszSep = "*+=;\n";
	char* pszToken = NULL;
	char* context = NULL;
	
	pszToken = strtok_s(szBuffer, pszSep, &context);
	while (pszToken != NULL)
	{
		puts(pszToken);
		puts(context);
		pszToken = strtok_s(NULL, pszSep, &context);
	}

	printf("szBuffer: %s\n", szBuffer);*/

	
	// 유니코드 문자열 - wprintf, wcscpy

	/*wchar_t* pwszData = L"String";
	wchar_t wszData[32];

	wcscpy_s(wszData, sizeof(wszData) / sizeof(wchar_t), pwszData);
	wprintf(wszData);*/


	// wcstombs, mbstowcs

	/*wchar_t* pwszData = L"String";
	char szData[32];
	wchar_t wszData[32];
	size_t nConverted = 0;

	wcstombs_s(&nConverted, szData, sizeof(szData), pwszData, sizeof(szData));
	printf("%s / %d\n",szData, nConverted);*/


	// 유틸리티 - atoi, atol, atof

	/*char szBuffer[32];


	GetString(szBuffer, sizeof(szBuffer), "String");

	printf("szBuffer(int) : %d \nszBuffer(long) : %ld \nszBuffer(double) : %f\n\n"
		, atoi(szBuffer), atol(szBuffer), atof(szBuffer));
	
	printf("2147483647(int) : %d\n2147483647(long) : %ld\n\n2147483648(int) : %d\n2147483648(long) : %ld\n\n1.7e+308(double) : %e\n1.7e+309(double) : %e\n"
		, atoi("2147483647"), atol("2147483647"), atoi("2147483648"), atol("2147483648"), atof("1.7e+308"), atof("1.7e+309"));*/


	// time, localtime, ctime

	/*struct tm ptime = { 0 };
	time_t t = 0;
	char c_time[128];

	t = time(NULL);
	ctime_s(c_time, sizeof(c_time), &t);
	localtime_s(&ptime, &t);

	printf("%d\n", t);
	printf("%s", c_time);

	printf("%04d-%02d-%02d\n", ptime.tm_year + 1900, ptime.tm_mon + 1, ptime.tm_mday);*/


	// srand, rand

	/*int i = 0;
	srand(time(NULL));

	for (i = 0; i < 10; i++)
		printf("%d\n", rand());

	puts("");

	for (i = 0; i < 10; i++)
		printf("%d\n", rand() % 10);*/

	
	// system, exit

	/*char ch;
	char szCommand[512] = { 0 };

	while (1)
	{
		printf("Do you wnat to command? (Y/N)\n");
		ch = _getch();
		if (ch == 'y' || ch == 'Y')
		{
			char szCommand[512] = { 0 };
			GetString(szCommand, sizeof(szCommand), "Command");

			system(szCommand);
		}
		else
		{
			printf("Do you wnat to EXIT? (Y/N)\n");
			ch = _getch();
			if (ch == 'y' || ch == 'Y')
			{
				puts("EXIT");
				exit(0);
			}
			else
			{
				puts("Return\n");
			}
		}
	}*/


	// 연습문제 1

	/*char szBuffer[32] = { "I am a boy" };
	printf("%d", StrScaner(szBuffer, "a boy"));*/


	// 연습문제 2

	/*char* aList[5] = {
		"정형돈",
		"노홍철",
		"하하",
		"유재석",
		"박명수"
	};
	int i = 0;

	SortString(aList, 5);

	for (i = 0; i < 5; i++)
		puts(aList[i]);*/

	
	// 연습문제 3

	/*int nData[5][8] = { 0 };
	int nInput = 0, total = 0;
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 8; j++)
			nData[i][j] = ++nInput;

	total = GetTotal(nData, sizeof(nData) / sizeof(*nData), sizeof(*nData) / sizeof(int));

	printf("%d\n", total);*/

	
	// 연습문제 4

	char szData_1[32] = { "HELLO, WORLD, BYE" };
	char szData_2[32] = { "Hello, World, Bye" };

	printf("%d\n", MyStrcmp(szData_1, szData_2));


	// 연습문제 5
	
	/*srand(time(NULL));
	int r_num = rand() % 3, n_input = 0;
	scanf_s("%d", &n_input);
	Game_RSP(r_num, n_input);*/


	// 연습문제 6

	AfterDay(1000);




	return 0;
}