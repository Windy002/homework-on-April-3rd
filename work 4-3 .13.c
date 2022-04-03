#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int pow(int x, int y)
{
	int i = 0;
	int s = 1;
	for (i=0; i < y; i++)
	{
		 s*= x;
	}
	return s;
}

int tim(int x)
{
	int i = 0;
	while (x != 0)
	{
		x/=10;
		i++;
	}
	return i;
}

int f(int arr[], int ret, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		arr[i] = ret % 10;
		ret /= 10;
	}
}

void mp(int arr[], int n)
{
	int i = 0;
	int t = 0;
	for (i = 0; i < n - 1;i++)
	{
		int j = 0;
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1]=t;
			}
		}
	}

	for (i = 0; i < 3; i++)
	{
		printf("%d", arr[i]);
	}
}

int main()
{
	int x = 0;
	int y = 0;
	int arr[20] = { 0 };
	scanf("%d,%d", &x, &y);
	int ret = pow(x, y);
	int n = tim(ret);
	f(arr, ret,n);
	mp(arr, n);
	return 0;
}