#define _CRT_SECURE_NO_WARNINGS

// 1.��������һ�������
// 2.������

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//��������Ϸ�˵�����
void menu()
{
	printf("*************************\n");
	printf("******   1. play    *****\n");
	printf("******   0. exit    *****\n");
	printf("*************************\n");
}
// ��Ϸ�Ĳ���
void game()
{
	int guess = 0;
	//���������
	int ret = rand() % 100 + 1;
	//�����ֻ���
	while (1)
	{
		printf("�������:>\n");
		scanf("%d", &guess);
		if (guess > ret)
			printf("�´���\n");
		else if (guess < ret)
			printf("��С��\n");
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	do
	{
		menu();
		srand((unsigned int)time(NULL));
		printf("��ѡ��:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game(); //��Ϸ�߼�����
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������,�����ԣ�\n");
			break;
		}
	} while (input);
	return 0;
}