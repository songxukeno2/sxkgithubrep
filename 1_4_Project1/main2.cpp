
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <Windows.h>

int main21()
{
	char addr[32];
	int ret;

	printf("美女，你是哪里人？\n");
	scanf_s("%s", addr, _countof(addr));

	if (strcmp(addr, "湖南") == 0)
	{
		printf("美女，我们是老乡啊！\n");
	}
	else
	{
		printf("美女，你和我同学是老乡啊！");
	}
	system("pause");
	return 0;
}
