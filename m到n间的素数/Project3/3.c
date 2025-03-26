#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n, m, num, flag;
	scanf("%d %d", &m, &n);
	for (num = m+1; num <n; num++)
	{
		flag = 1;
		for (int i = 2; i < num; i++)
			if (num % i == 0)
			{
				flag = 0;
				break;
			}
		if (flag == 1)
			printf("%d ", num);
	}
}