#include<stdio.h>

int main_operater_base(void)
{
	// �����ڷ�, ���°�(type promotion)

	/*int a = 3;
	char ch = 'A';

	printf("%d", sizeof(ch * a));*/


	// ��� ��� (�ǽ� 4-1)

	/*int a = 0, b = 0;


	printf("�� ������ �Է��ϼ��� : ");
	scanf_s("%d%d", &a, &b);

	printf("AVG : %.2lf", (a + b) / 2.0);*/


	// �ð� ��ȯ ���α׷� (�ǽ� 4-2)

	/*int i_second = 0, hour = 0, minute = 0, second = 0;

	scanf_s("%d", &i_second);

	hour = i_second / 3600;
	minute = i_second % 3600 / 60;
	second = i_second % 60;

	printf("%d�ʴ� %02d�ð� %02d�� %02d�� �Դϴ�.", i_second, hour, minute, second);*/


	// �� ���� ���� �� ���

	/*int nInput, nTotal;

	scanf_s("%d", &nTotal);
	scanf_s("%d", &nInput);
	nTotal += nInput;
	scanf_s("%d", &nInput);
	nTotal += nInput;
	
	printf("Total : %d\n", nTotal);*/


	// �������� 4-5

	int nInput = 0;
	
	printf("�Է� : ");
	scanf_s("%d", &nInput);

	printf("������ : %d", nInput % 5);

	return 0;
}