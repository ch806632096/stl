#include "stdafx.h"
#include <vector>  
#include <iostream>
//����һ�����������洢char�ͱ�������һ��˼���������char�ͣ��洢�������Ƿ����
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
