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

	
	// ���̿� �̸��� �Է¹޴� ���α׷� (�ǽ� 3-1)

	/*int nAge = 0;
	char name[32] = { 0 };

	printf("���̸� �Է��ϼ��� : ");
	scanf_s("%d%*c", &nAge);
	printf("�̸��� �Է��ϼ��� : ");
	gets_s(name, sizeof(name));

	printf("����� �̸��� \'%s\'�̰� ���̴� %d�� �Դϴ�.", name, nAge);*/


	// Input ����

	/*int num = 0;
	char name[32] = { 0 };

	gets_s(name, sizeof(name));
	scanf_s("%d\n", &num);

	printf("%s %d", name, num);


	scanf_s("Input : %d", &num);
	printf("Input : %d", num);*/


	// ���ڿ� : scanf -> ȭ��Ʈ�����̽��� ����(Buffer���� input o), gets_s -> enter�� ����(Buffer�� input x)

	/*gets_s(name, sizeof(name));
	printf("%s", name);
	gets_s(name, sizeof(name));
	printf("%s", name);*/


	// �ǽ� 3-1 ���� 

	/*int nAge = 0;
	char name[32] = { 0 };

	// �Ǵ�, fflush(stdin) ��� -> VS and windows������ ���� -> �ǵ��� ��� x
	printf("�̸��� �Է��ϼ��� : ");
	gets_s(name, sizeof(name));
	printf("���̸� �Է��ϼ��� : ");
	scanf_s("%d", &nAge);

	printf("����� �̸��� \'%s\'�̰� ���̴� %d�� �Դϴ�.", name, nAge);*/


	// �������� 3-1

	/*char ch = 0;
	
	printf("�Է� : ");
	getchar();
	ch = getchar();

	printf("��� : %c", ch);*/

	return 0;
}