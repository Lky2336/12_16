#define _CRT_SECURE_NO_WARNINGS

// 1.电脑生成一个随机数
// 2.猜数字

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//猜数字游戏菜单界面
void menu()
{
	printf("*************************\n");
	printf("******   1. play    *****\n");
	printf("******   0. exit    *****\n");
	printf("*************************\n");
}
// 游戏的部分
void game()
{
	int guess = 0;
	//生成随机数
	int ret = rand() % 100 + 1;
	//猜数字环节
	while (1)
	{
		printf("请猜数字:>\n");
		scanf("%d", &guess);
		if (guess > ret)
			printf("猜大了\n");
		else if (guess < ret)
			printf("猜小了\n");
		else
		{
			printf("恭喜你，猜对了！\n");
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
		printf("请选择:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game(); //游戏逻辑部分
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误,请重试！\n");
			break;
		}
	} while (input);
	return 0;
}