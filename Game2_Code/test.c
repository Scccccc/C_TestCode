#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("**********************************\n");
	printf("********      1.Play      ********\n");
	printf("********      0.Exit      ********\n");
	printf("**********************************\n");

}

void game()
{
	srand((unsigned int)time(NULL));
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };

	//初始化数组
	init(mine, ROWS, COLS, '0');
	init(show, ROWS, COLS, '*');

	//打印数组
	//print(mine, ROW, COL);
	print(show, ROW, COL);

	//布置雷
	set_mine(mine, ROW, COL);
	//print(mine, ROW, COL);

	//排查雷
	cheak_mine(mine, show, ROW, COL);



}

void test()
{
	int input = 0;

	do
	{
		menu();
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("Byebye\n");
			break;
		default:
			printf("Try again!\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}