#include<stdio.h>

int main(void)
{
	// data type == num

	char a = 68;
	printf("%c\n", a);


	// ���� ���, ���ڿ� ���

	char b = 'B';
	printf("%c\n", b);
	char c[] = "C"; // == char c = { 'C' };
	printf("%s\n", &c);

	return 0;
}