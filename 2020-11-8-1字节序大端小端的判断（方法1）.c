//字节序大端小端的判断（方法1）
#include<stdio.h>
int main()
{
	int a = 1;
	char* p =(char*)&a;//进行强制转化为一个字节，用char
	if (*p == 1)
	{
		printf("小端\n");
	}
	else
		printf("大端\n");
	return 0;
}