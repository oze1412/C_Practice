#include<stdio.h>

int main_control(void)
{
	int i = 0;

	// if�� �ִ� ���ϱ�

	/*int nMax = 0, nInput = 0;

	scanf_s("%d", &nMax);

	for (i = 0; i < 2; i++)
	{
		scanf_s("%d", &nInput);
		if (nInput > nMax)	nMax = nInput;
	}

	printf("MAX : %d", nMax);*/

	
	// ������� ���

	/*int nAge = 0, base_fee = 1000;

	scanf_s("%d", &nAge);

	if (nAge < 20)	base_fee = base_fee * 75 / 100;

	printf("������� : %d", base_fee);*/


	// ���̿� ���� �з� �� ��ݰ��

	/*int nAge = 0, base_fee = 1000;
	int Rate[3] = { 0, 50, 75 };

	scanf_s("%d", &nAge);

	if (nAge >= 0 && nAge < 14)
	{
		if (nAge >= 0 && nAge < 4)	base_fee = base_fee * Rate[0];
		else			base_fee = base_fee * Rate[1] / 100;
	}
	else
	{
		if (nAge < 20)	base_fee = base_fee * Rate[2] / 100;
	}

	printf("������� : %d", base_fee);*/


	// ���� if ������� �з�

	/*int nAge = 0, base_fee = 1000, nRate = 0, calcu_fee = 0;
	int rate[4] = { 0, 50, 75, 100 };

	scanf_s("%d", &nAge);

	if (nAge >= 65)			nRate = rate[0];
	else if (nAge >= 20)	nRate = rate[3];
	else if (nAge >= 14)	nRate = rate[2];
	else if (nAge >= 4)		nRate = rate[1];
	else					nRate = rate[0];

	calcu_fee = base_fee * nRate / 100;

	printf("������� : %d", calcu_fee);*/


	// switch-case

	/*int a = 4, b = 0;

	switch (a)
	{
	case 1:
			a++;

	case 4:
		a--;

	case 2:
		b++;

	default:
		break;
	}

	printf("%d %d", a, b);*/


	// �������� 6-1

	/*int nInput = 0, nMax = 0;

	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &nInput);
		
		if (nInput < 0)				nInput = 0;
		else if (nInput > 100)		nInput = 100;
		
		if (nInput > nMax)		nMax = nInput;
	}

	printf("MAX : %d", nMax);*/

	return 0;
}