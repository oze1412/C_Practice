#include <stdio.h>

int main_operater_app(void)
{
	// ������ �ڷ����� int, ũ��� 4

	/*printf("%d\n", sizeof('A'));*/


	// sizeof();�� ���� x

	/*int nData = 10;
	printf("%d\n", sizeof(nData + 10));
	printf("%d\n", nData);*/


	// true, false ����

	/*printf("%d\n", nData == 10);

	float num = 0.1, num2 = 1.1;
	printf("%d\n", num + num2 == 1.2);
	printf("%d\n", (num*10 + num2*10) / 10.0 == 1.2);*/


	// ��������

	/*int nInput = 0, bResult = 0;

	printf("Input(1 || 0) : ");
	scanf_s("%d", &nInput);
	printf("Result : %d\n", bResult = !nInput);*/


	// short circuit

	/*int nAge = 0, nHeight = 0;

	printf("����, Ű ������ �Է��ϼ��� : ");
	scanf_s("%d%d", &nAge, &nHeight);

	printf("��� : %s\n", nAge >= 20 && nAge <= 30 && nHeight >= 150 ? "�հ�" : "���հ�");*/


	// ���׿���

	/*int nInput = 0;

	scanf_s("%d", &nInput);
	printf("%d\n", nInput <= 10 ? 10 : nInput);*/


	// �պ��� �з�

	/*int nHeight = 0;

	printf("���̸� �Է��ϼ��� : ");
	scanf_s("%d", &nHeight);

	printf("��� : %s\n", nHeight >= 150 ? "�հ�" : "���հ�");*/


	// ��ʸ�Ʈ ���

	/*int nMax = 0, nMax2 = 0;

	int a, b, c, d;

	scanf_s("%d%d%d", &a, &b, &c);
	
	nMax = a > b ? a : b;
	nMax2 = d > c ? d : c;
	nMax = nMax > nMax2 ? nMax : nMax2;

	printf("MAX : %d\n", nMax);*/


	// �����̹� ���

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