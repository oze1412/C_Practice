#include<stdio.h>

int main_operater_base(void)
{
	// 이형자료, 형승격(type promotion)

	/*int a = 3;
	char ch = 'A';

	printf("%d", sizeof(ch * a));*/


	// 평균 계산 (실습 4-1)

	/*int a = 0, b = 0;


	printf("두 정수를 입력하세요 : ");
	scanf_s("%d%d", &a, &b);

	printf("AVG : %.2lf", (a + b) / 2.0);*/


	// 시간 변환 프로그램 (실습 4-2)

	/*int i_second = 0, hour = 0, minute = 0, second = 0;

	scanf_s("%d", &i_second);

	hour = i_second / 3600;
	minute = i_second % 3600 / 60;
	second = i_second % 60;

	printf("%d초는 %02d시간 %02d분 %02d초 입니다.", i_second, hour, minute, second);*/


	// 세 정수 누적 및 출력

	/*int nInput, nTotal;

	scanf_s("%d", &nTotal);
	scanf_s("%d", &nInput);
	nTotal += nInput;
	scanf_s("%d", &nInput);
	nTotal += nInput;
	
	printf("Total : %d\n", nTotal);*/


	// 연습문제 4-5

	int nInput = 0;
	
	printf("입력 : ");
	scanf_s("%d", &nInput);

	printf("나머지 : %d", nInput % 5);

	return 0;
}