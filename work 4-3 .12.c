#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[] = {' ','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int n = 0;
	int i = 0;
	scanf("%d", &n);
	for (i = 1; i < n; i++)
	{
		int j = 0;
		for (j = 0; j < n-i; j++) //��ӡ�ո�
		{
				printf("%c", arr[0]);
		}
		for (j = 1; j < i+1; j++) //��ӡǰi��ǰi����ĸ
		{
			printf("%c", arr[j]);
		}
		for (j = i-1; j > 0 ;j--)//��ӡ��n-i�к�i-1����ĸ
		{
			printf("%c", arr[j]);
		}
		putchar('\n');
	}
	return 0;
}