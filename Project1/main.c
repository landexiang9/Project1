/*
 * 程序主入口
 * 本文件是项目的入口点，main 函数调用不同练习函数来演示各 C 语言知识点。
 * 当前配置直接调用判断单词个数的函数 panduandancigeshu()。
 * 可通过修改 main() 中的调用切换为其他练习。
 */
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include <stdio.h>
#include <math.h>
#include <windows.h>

/* 前向声明：声明在判断单词个数.c 中定义的函数 */
int  maopaoapixuyinyong();

int main()
{
	// 设置控制台输入和输出编码为 UTF-8，防止中文乱码
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);

	/* 调用统计单词个数的函数 */
	panduandancigeshu();
	return 0;
}