#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("���������ּ���׳� ");
	int n = 0;
	scanf("%d", &n);

		int m = 1;
		int a = 1;
		while (m < n + 1)
		{
			
				a = a * m;
				m++;
		}
		printf("���Ϊ %d", a);
      return 0;
}