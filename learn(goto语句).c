#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//goto ���
//���Ҵ���ִ��˳��

//int main()
//{
//falg:
//	printf("hehe\n");
//	printf("haha\n");
//
//	goto flag;
//	return 0;
//}

//�ػ�����
//shutdown -s -t 60
//shutdown -a

int main()
{
	//�ػ�
	//C�����ṩ��һ��������styem() - ִ��ϵͳ����
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("���룺������ȡ���ػ�\n");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}


//�������Ƕ�׽ṹ