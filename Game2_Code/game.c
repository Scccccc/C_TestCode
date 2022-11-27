#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//初始化数组
void init(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

//打印数组
void print(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("       扫雷       \n");
	//打印列序
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

//布置雷
void set_mine(char mine[ROWS][COLS], int row, int col)
{
	
	int count = Easy_count;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

//排查雷
int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return (mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] + mine[x][y - 1] +
		mine[x][y + 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0');
}


void cheak_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while ((ROW*COL-Easy_count) > win)
	{
		printf("请输入：");
		scanf("%d %d", &x, &y);
		if ((x >= 1 && x <= row) && (y >= 1 && y <= col))
		{
			if (show[x][y] != '*')
			{
				printf("坐标已被占用,重新输入\n");
				continue;
			}
			if (mine[x][y] == '1')
			{
				printf("被炸死\n");
				set_mine(mine, ROW, COL);
				break;
			}
			else
			{
				int n = get_mine_count(mine, x, y);
				show[x][y] = n + '0';
				print(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("坐标错误，重新输入\n");
		}
	}
	if (ROW * COL - Easy_count == win)
	{
		printf("Success!\n");
		print(mine, ROW, COL);
	}
	
}