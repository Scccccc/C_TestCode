#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//打印菜单
void menu()
{
	printf("************************************\n");
	printf("*********      1.play      *********\n");
	printf("*********      0.exit      *********\n");
	printf("************************************\n");

}

void game()
{
	char board[ROW][COL] = { 0 };
	char ret = 0;
	srand((unsigned)time(NULL));
	init_board(board, ROW, COL);//初始化棋盘
	print_board(board, ROW, COL);//打印棋盘

	while (1)
	{
		player_board(board, ROW, COL);//玩家下棋
		print_board(board, ROW, COL);
		ret = is_win(board, ROW, COL);//判断输赢
		if (ret != 'C')
		{
			break;
		}

		computer_board(board, ROW, COL);//电脑下棋
		print_board(board, ROW, COL);
		ret = is_win(board, ROW, COL);//判断输赢
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("Player win!\n");
	}
	if (ret == '#')
	{
		printf("Computer win!\n");
	}
	if (ret == 'N')
	{
		printf("Nobody win:)\n");
	}

}

void test()
{
	int input = 0;
	do
	{
		menu();//打印菜单
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				printf("Game of three chess\n");
				game();
				break;
			case 0:
				printf("Byebye!\n");
				break;
			default:
				printf("Input worong,try again!\n");
				break;
		}
	} while (input);
}
//主函数
int main()
{
	test();
	return 0;
}

