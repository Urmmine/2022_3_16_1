#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//goto 语句
//打乱代码执行顺序

//int main()
//{
//falg:
//	printf("hehe\n");
//	printf("haha\n");
//
//	goto flag;
//	return 0;
//}

//关机程序
//shutdown -s -t 60
//shutdown -a

int main()
{
	//关机
	//C语言提供了一个函数：styem() - 执行系统命令
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("输入：我是猪取消关机\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}


//跳出多层嵌套结构