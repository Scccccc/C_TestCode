#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <ctype.h>


//int main()
//{
//	char arr[10] = { 0 };
//	gets(arr);
//	int i = 0;
//	int count = 0;
//	while (arr[i] != '0')
//	{
//		if (arr[i] == 'A')
//		{
//			count++;
//		}
//		if (arr[i] == 'B')
//		{
//			count--;
//		}
//		i++;
//	}
//	if (count > 0)
//		printf("A\n");
//	if (count == 0)
//	{
//		printf("E\n");
//	}
//	else
//		printf("B\n");
//	return 0;
//}


//
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	int i = 0;
//	int count = 0;
//	while (arr[i] != '0')
//	{
//		if (arr[i] == 'A')
//			count++;
//		else if (arr[i] == 'B')
//			count--;
//
//		i++;
//	}
//	if (count > 0)
//		printf("A\n");
//	else if (count == 0)
//		printf("E\n");
//	else
//		printf("B\n");
//	return 0;
//}


//int main()
//{
//	printf("hehehe\n");
//	return 0;
//}

//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        if (n >= 140)
//        {
//            printf("Genius\n");
//        }
//    }
//    return 0;
//}
//
//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		if (n >= 90 && n <= 100)
//		{
//			printf("Perfect\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		if (n >= 60 && n <= 100)
//		{
//			printf("Pass\n");
//		}
//		else
//			printf("Fail\n");
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		if (n % 2 == 0)
//			printf("Even\n");
//		else
//			printf("Odd\n");
//	}
//	return 0;
//}

//int Add(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int ret;
//	scanf("%d %d", &a, &b);
//	ret = Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (~scanf("%d %d %d", &a, &b, &c));
//	{
//		int max = 0;
//
//		if (a > max)
//			max = a;
//		if (b > max)
//			max = b;
//		if (c > max)
//			max = c;
//		printf("%d\n", max);
//
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	char arr[] = "AaEeIiOoUu";
//	while (~(n = getchar()))
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			if (n == arr[i])
//			{
//				printf("Vowel\n");
//				break;
//			}
//		}
//		if (i == 10)
//		{
//			printf("Consonant\n");
//		}
//		getchar();
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	while (~(n = getchar()))
//	{
//		if ((n >= 65 && n <= 90) || (n >= 97 && n <= 122))
//		{
//			printf("%c is an alphabet.\n", n);
//		}
//
//		else
//			printf("%c is not an alphabet.\n", n);
//
//		getchar();
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar() != EOF))
//	{
//		if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c\n", ch - 32);
//		}
//		else if (ch >= 'A' && ch <= 'Z')
//		{
//			printf("%c\n", ch + 32);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (islower(ch))
//		{
//			printf("%c\n", ch - 32);
//		}
//		else if (isupper(ch))
//		{
//			printf("%c\n", ch + 32);
//		}
//		getchar();
//	}
//	return 0;
//}


//int main()
//{
//	int t = 0;
//	while (scanf("%d", &t) != EOF)
//	{
//		if (t > 0)
//			printf("1\n");
//		if (t == 0)
//			printf("0.5\n");
//		if (t < 0)
//			printf("0\n");
//	}
//	return 0;
//}
//
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	while (~scanf("%d %d %d", &a, &b, &c))
	{
		if (a < b+c && b < a+c && c < a+b)
		{
			if (a == b && b == c)
			{
				printf("Equilateral triangle!\n");
			}
			else if ((a == b && b != c) || (a == c && b != c) || (b == c && c != a))
			{
				printf("Isosceles triangle!\n");
			}
			else
			{
				printf("Ordinary triangle!\n");
			}
		}
		else
		{
			printf("Not a triangle!\n");
		}
	}
	return 0;
}