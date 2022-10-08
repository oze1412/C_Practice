#include<stdio.h>
#include<conio.h>

int main(void)
{
	int i = 0;

	// getchar, putchar

	/*char ch = 0;
	for (i = 0; i < 3; i++)
	{
		ch = getchar();
		putchar(ch);
	}

	putchar('Z');*/
	

	// _getch, _getche

	/*char ch[5] = {0};
	ch[0] = _getch();
	putchar(ch[0]);
	putchar('\n');
	ch[0] = _getche();
	putchar(ch[0]);

	for (i = 0; i < 4; i++)
	{
		ch[i] = _getch();
		if (ch[i] == '\r')	break;
	}

	puts(ch);*/


	// long long int

	/*long long int lldData = 4294967295LL;

	printf("%d\n", lldData);
	printf("%d\n", lldData + 1);
	printf("%d\n", lldData + 2);
	printf("%d\n", lldData + 3);

	printf("%u\n", lldData);
	printf("%u\n", lldData + 1);
	printf("%u\n", lldData + 2);
	printf("%u\n", lldData + 3);

	printf("%lld\n", lldData);*/

	
	// 나이와 이름을 입력받는 프로그램 (실습 3-1)

	/*int nAge = 0;
	char name[32] = { 0 };

	printf("나이를 입력하세요 : ");
	scanf_s("%d%*c", &nAge);
	printf("이름를 입력하세요 : ");
	gets_s(name, sizeof(name));

	printf("당신의 이름은 \'%s\'이고 나이는 %d살 입니다.", name, nAge);*/


	// Input 오류

	/*int num = 0;
	char name[32] = { 0 };

	gets_s(name, sizeof(name));
	scanf_s("%d\n", &num);

	printf("%s %d", name, num);


	scanf_s("Input : %d", &num);
	printf("Input : %d", num);*/


	// 문자열 : scanf -> 화이트스페이스로 구분(Buffer에도 input o), gets_s -> enter로 구분(Buffer에 input x)

	/*gets_s(name, sizeof(name));
	printf("%s", name);
	gets_s(name, sizeof(name));
	printf("%s", name);*/


	// 실습 3-1 수정 

	/*int nAge = 0;
	char name[32] = { 0 };

	// 또는, fflush(stdin) 사용 -> VS and windows에서만 가능 -> 되도록 사용 x
	printf("이름를 입력하세요 : ");
	gets_s(name, sizeof(name));
	printf("나이를 입력하세요 : ");
	scanf_s("%d", &nAge);

	printf("당신의 이름은 \'%s\'이고 나이는 %d살 입니다.", name, nAge);*/


	// 연습문제 3-1

	/*char ch = 0;
	
	printf("입력 : ");
	getchar();
	ch = getchar();

	printf("출력 : %c", ch);*/

	return 0;
}