
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <Windows.h>

int main21()
{
	char addr[32];
	int ret;

	printf("��Ů�����������ˣ�\n");
	scanf_s("%s", addr, _countof(addr));

	if (strcmp(addr, "����") == 0)
	{
		printf("��Ů�����������簡��\n");
	}
	else
	{
		printf("��Ů�������ͬѧ�����簡��");
	}
	system("pause");
	return 0;
}
