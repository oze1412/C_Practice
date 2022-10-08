#include<stdio.h>

int main_data_type(void)
{
	// data type == num

	char a = 65;
	printf("%c\n", a);


	// 문자 상수, 문자열 상수

	char b = 'B';
	printf("%c\n", b);
	char c[] = "C"; // == char c = { 'C' };
	printf("%s\n", &c);
	
	return 0;
}