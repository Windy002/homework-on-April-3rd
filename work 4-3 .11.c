#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int x = 0;
//	int i = 0;
//	scanf("%d", &x);
//	putchar('\n');
//	for (i = 2; i <= x; i++)
//	{
//		while (x >= i) // ������Ƕ��һ��while ��Ϊһ��������%ĳ�����
//					   //��� û��while���ᵼ�����������������ǰһ�����ı��� ����3��9 
//						//9 �����ı����� ������û��while��ֻ����һ��3�����ˣ�������ܻ������9
//		{
//			if (x % i == 0)
//			{
//				printf("%d ", i);
//				x /= i;
//			}
//			else
//			{
//				break;
//			}
//		}
//	}
//	putchar('\n');
//	return 0;
//}

int main()
{
	int i = 2;
	int n = 0;
	scanf("%d", &n);
	do
	{
		while (n % i == 0)
		{
			printf("%d ", i);
			n /= i; //n ��ÿ�������������ӵ�
		}
		i++;
	} while (i <= n);//���Ե�n=iʱ��i��Ȼ�����ӣ�������i<=n;
	return 0;
}

//int main()
//{
//    int n, i = 2;
//    printf("����һ����������\n");
//    scanf("%d", &n);
//    printf("%d=", n);
//    do
//    {
//        while (n % i == 0)        //��� i ��n�������ӣ��򷴸��ֽ�� i
//        {
//            printf("%d*", i);     //��������Ӻ�һ���˺�
//            n /= i;              //n = n / i,�������������Ϊ�µı�����
//        }
//        i++;                     //�����µ�i
//    } while (i < n);
//    printf("%d\n", n);//nֵÿ�ζ����滻����������̣�ֱ����������ʱ��n��Ȼ�����ӣ����Դ�ӡ����
//    return 0;
//}