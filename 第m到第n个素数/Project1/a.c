#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define MAX_SIZE 10000
int main()
{
	int k, num, i, n, m, j, flag = 1;
	int a[MAX_SIZE];
	scanf("%d %d", &m, &n);
	a[0] = 2, num = 2;
	for (j = 1; j <= n - 1; j++)
	{
		for (num = num+1;; num++)
		{
			flag = 1;
			for (i = 2; i < num; i++)
				if (num % i == 0)
				{
					flag = 0; break;
				}
			if (flag == 1)
			{
				a[j] = num;
				break;
			}
		}
	}
	int count = 1;
	for (k = m-1 ; k <= n - 1; k++, count++)
	{
		printf("%d", a[k]);
		if (count > 0 && count % 10 != 0)
			printf(" ");
		if (count % 10 == 0)
			printf("\n");
	}
}