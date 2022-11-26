#pragma once


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3

//声明初始化函数
void init_board(char board[ROW][COL], int row, int col);
//声明打印函数
void print_board(char board[ROW][COL], int row, int col);
//玩家下棋
void player_board(char board[ROW][COL], int row, int col);
//电脑下棋
void computer_board(char board[ROW][COL], int row, int col);
//判断输赢
char is_win(char board[ROW][COL], int row, int col);
