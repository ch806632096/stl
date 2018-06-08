#include "stdafx.h"
#include <vector>  
#include <iostream>
//创建一个容器，来存储char型变量，进一步思考，不光存char型，存储其他类是否可以
void vector1()
{
	std::vector<char> a;
	a.push_back('h');
	a.push_back('e');
	a.push_back('l');
	a.push_back('l');
	

	for (int i = 0; i < a.size(); ++i)
	{
		std::cout << a[i] << std::endl;
	}
	system("pause");

}
