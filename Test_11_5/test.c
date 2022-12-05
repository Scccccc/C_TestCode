#define _CRT_SECURE_NO_WARNINGS 1

//
//#include <stdio.h>
//#include <stdlib.h>
//
//
//void menu()
//{
//	printf("****************************\n");
//	printf("*****   1.Play game    *****\n");
//	printf("*****   0.Exit game    *****\n");
//	printf("****************************\n");
//}
//
//
//void game()
//{
//	int num = 0;
//	int ret = rand() % 100 + 1;
//	//printf("%d\n", ret);
//	while (1)
//	{
//		printf("Guess number:");
//		scanf("%d", &num);
//
//		if (num > ret)
//		{
//			printf("Biger\n");
//		}
//		else if (num < ret)
//		{
//			printf("Small\n");
//		}
//		else
//		{
//			printf("You are right\n");
//			break;
//		}
//	}
//
//}
//
//int main()
//{
//	srand((unsigned int) time(NULL));//随机值生成一次就可以，所以不能放在循环中
//	int input = 0;
//	do
//	{	
//		menu();
//		scanf("%d", &input);
//
//		switch(input)
//		{
//		case 1:
//			{
//				printf("Play game\n");
//				game();
//				break;
//			}
//		case 0:
//			{
//				printf("Exit game\n");
//				break;
//			}
//		default:
//			{
//				printf("input worong.Retry pls\n");
//				break;
//			}
//		}
//	} while (input);
//	return 0;
//}

//#include <stdio.h>
//
//
//int main()
//{
//	long n = 0;
//	scanf("%ld", &n);
//	printf("%ld\n", (n + 1) * n / 2);
//	return 0;
//}


#include <stdio.h>

int main()
{
    int n = 0;
    int i = 0;
    int ret = 0;
    int sum = 0;
    scanf("%d", &n);
    if (n >= 12)
    {
        ret = n / 12;
        sum = ret * 4 + 2;
        printf("%d\n", sum);

    }
    else
        printf("2\n");
    return 0;
}