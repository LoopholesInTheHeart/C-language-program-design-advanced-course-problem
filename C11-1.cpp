/*
浮点数输出  (100/100 分数)
题目描述
编写一个程序，输入一个浮点数和输出格式要求，按照格式要求将该浮点数输出。
给定非负整数m和n，表示输出的浮点数小数点前的宽度为m，若宽度不够则在前面补0，
小数点后的宽度为n，若宽度不够则在后面补0(补充说明：当n=0时，只需输出整数部分，
当m,n都为0时，则输出0)。

输入描述
每个测例共 2 行，第一行为两个整数 m,n(n >= 0, m >= 0) ，第二行为一个浮点数。

输出描述
对每个测例输出的浮点数占一行，其小数点前宽度为m，小数点后宽度为n，不足时补零。

样例输入
5 3
12.3456789
2 10
12.34

样例输出
00012.345
12.3400000000
*/

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

using namespace std;

void printNumber(string value, int m)
{
	auto temp = value.find('.');
	value.erase(value.begin() + temp, value.end());

	if (m > value.length())
	{
		for (int i = 0; i < m - value.length(); i++)
		{
			cout << "0";
		}
	}

	cout << value;
}

void printDec(string value, int n)
{
	auto temp = value.find('.');
	value.erase(value.begin(), value.begin() + temp);

	if (n > value.length())
	{
		cout << value;
    //程序难点：  2.之所以为<=比较符，是因为还有小数点
		for (int i = 0; i <= n - value.length(); i++)
		{
			cout << "0";
		}
	}
	else if (n < value.length())
	{
  //程序难点：  3.此处的+1同样，n的数量应该加上小数点
		value.erase(value.begin() + n + 1, value.end());
		cout << value;
	}
}

int main()
{
	int m, n;
	string a;
//程序难点：  1.程序输入时不能以double存储，因为受限于数字的二进制表示，有可能损失精度
	while (cin >> m >> n >> a)
	{
		if (m == 0 && n == 0)
		{
			cout << 0 << endl;
		}
		else if (m != 0 && n == 0)
		{
			printNumber(a, m);
			cout << endl;
		}
		else
		{
			printNumber(a, m);
			printDec(a, n);
			cout << endl;
		}
	}
	return 0;
}
