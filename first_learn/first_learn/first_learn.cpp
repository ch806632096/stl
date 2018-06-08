// first_learn.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <vector>  
#include <iostream>
#include"out.h"
//创建一个容器，来存储char型变量，进一步思考，不光存char型，存储其他类是否可以

int main()
{
	int a = 1;
	int b = 2;
	std::cout << ::max(a, b);
	system("pause");
    return 0;
}

void first_sight()
{
	std::vector<char> a;
	a.push_back('h');
	a.push_back('e');
	a.push_back('l');
	a.push_back('l');
	a.push_back('o');

	for (int i = 0; i < a.size(); ++i)
	{
		std::cout << a[i] << std::endl;
	}
	system("pause");
}

