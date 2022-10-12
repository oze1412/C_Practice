#include <stdio.h>

int main_operater_app(void)
{
	// 문자의 자료형은 int, 크기는 4

	/*printf("%d\n", sizeof('A'));*/


	// sizeof();는 연산 x

	/*int nData = 10;
	printf("%d\n", sizeof(nData + 10));
	printf("%d\n", nData);*/


	// true, false 연산

	/*printf("%d\n", nData == 10);

	float num = 0.1, num2 = 1.1;
	printf("%d\n", num + num2 == 1.2);
	printf("%d\n", (num*10 + num2*10) / 10.0 == 1.2);*/


	// 부정연산

	/*int nInput = 0, bResult = 0;

	printf("Input(1 || 0) : ");
	scanf_s("%d", &nInput);
	printf("Result : %d\n", bResult = !nInput);*/


	// short circuit

	/*int nAge = 0, nHeight = 0;

	printf("나이, 키 순으로 입력하세요 : ");
	scanf_s("%d%d", &nAge, &nHeight);

	printf("결과 : %s\n", nAge >= 20 && nAge <= 30 && nHeight >= 150 ? "합격" : "불합격");*/


	// 삼항연산

	/*int nInput = 0;

	scanf_s("%d", &nInput);
	printf("%d\n", nInput <= 10 ? 10 : nInput);*/


	// 합불합 분류

	/*int nHeight = 0;

	printf("나이를 입력하세요 : ");
	scanf_s("%d", &nHeight);

	printf("결과 : %s\n", nHeight >= 150 ? "합격" : "불합격");*/


	// 토너먼트 방식

	/*int nMax = 0, nMax2 = 0;

	int a, b, c, d;

	scanf_s("%d%d%d", &a, &b, &c);
	
	nMax = a > b ? a : b;
	nMax2 = d > c ? d : c;
	nMax = nMax > nMax2 ? nMax : nMax2;

	printf("MAX : %d\n", nMax);*/


	// 서바이벌 방식

	/*int nInput = 0, nMax = 0;
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		scanf_s("%d", &nInput);
		nMax = nMax > nInput ? nMax : nInput;
	}
	printf("MAX : %d\n", nMax);*/

	return 0;
}