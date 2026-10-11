#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// 棋盘按最高难度(30*16)预留大小，每局实际用到的行列数由“难度选择”决定
#define MAX_ROW 16
#define MAX_COL 30
#define ROWS (MAX_ROW+2)
#define COLS (MAX_COL+2)

// 三个难度分别对应的雷数
#define EASY_COUNT 10
#define MID_COUNT 40
#define HARD_COUNT 99

// 函数的声明
void initboard(char board[ROWS][COLS], int r, int z, char set);

void displayboard(char board[ROWS][COLS], int r,int z);
void setmine(char arr1[ROWS][COLS], int r, int z, int mine);
void findmine(char arr1[ROWS][COLS], char show[ROWS][COLS], int r, int z, int mine);
