//字节序大端小端的判断（函数的方式实现）代码优化
#include<stdio.h>
int check_sys()
{
	int a = 1;
	char* p = (char*)&a;
	return *p;//当*p为1，返回1，*p为0，返回0	
}
int main()
{
	//考虑函数的作用，如返回1，则为小端，返回0，则为大端
	int ret = check_sys();
	if (ret == 1)
		printf("小端\n");
	else
		printf("大端\n");
	return 0;
}