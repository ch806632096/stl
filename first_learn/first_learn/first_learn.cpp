// first_learn.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <vector>  
#include <iostream>
#include"out.h"
//����һ�����������洢char�ͱ�������һ��˼���������char�ͣ��洢�������Ƿ����

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

