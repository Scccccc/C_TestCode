#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <ctype.h>
#include <stdlib.h>

//找单身狗
//void Find_single_dog(int arr[], int sz, int single_dog[])
//{
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	int pos = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((ret >> i) & 1) == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			single_dog[0] ^= arr[i];
//		}
//		else
//		{
//			single_dog[1] ^= arr[i];
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int single_dog[2] = { 0 };
//	Find_single_dog(arr, sz, single_dog);
//	printf("%d %d\n", single_dog[0], single_dog[1]);
//	return 0;
//}

//模拟实现atoi
enum state
{
	VALID,
	INVALID
}state = INVALID;

int my_atoi(const char* str)
{
	assert(str);
	if (*str == '\0')
	{
		return 0;
	}
	while(isspace(*str))
	{
		str++;
	}
	int flag = 1;
	if (*str == '+')
	{
		str++;
	}
	else if (*str == '-')
	{
		flag = -1;
		str++;
	}

	long long ret = 0;
	while (*str)
	{
		if (isdigit(*str))
		{
			ret = ret * 10 + flag * (*str - '0');
			if (ret > INT_MAX)
			{
				return INT_MAX;
			}
			else if (ret < INT_MIN)
			{
				return INT_MIN;
			}
		}
		else
		{
			return (int)ret;
		}
		str++;

	}
	state = VALID;
	return (int)ret;

}

int main()
{
	int ret = my_atoi("1234");
	if (state == VALID)
	{
		printf("%d\n", ret);
	}
	else
	{
		printf("Wrong, %d\n", ret);
	}
	return 0;
}
