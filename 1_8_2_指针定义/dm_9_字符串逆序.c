#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char input[128];
	int len;
	char tmp;

	scanf_s("%s", input, 128);

	len = strlen(input);

	//方法1
	/*
	for (int i = 0; i < len / 2; i++)
	{
		tmp = input[i];
		input[i] = input[len - i - 1];
		input[len - i - 1] = tmp;
	}
	*/
	//方法2
	/*
	for (int i = 0; i < len; i++)
	{
		printf("%c", input[len-i-1]);
	}
	*/
	//方法三
	char* p = &input[len - 1];
	for (int i = 0; i < len; i++)
	{
		printf("%c", *p--);
	}
	//printf("%s\n", input);
	system("pause");
	return 0;
}