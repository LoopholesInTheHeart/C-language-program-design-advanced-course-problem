/*
字符串出现个数  (100/100 分数)
题目描述
给定一个串a和串b，求b在a中出现次数

（友情提示可以使用stl::count函数）

输入描述
字符串a,b的长度1<= len(a)<=100, 1<=len(b)<=len(a)

输出描述
一个数字

样例输入
ababac
aba

样例输出
2
*/
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>

using namespace std;

int f5()
{
	string a, b;
  cin>> a >> b;
	int len_b = b.length();
	int c = a.length() - b.length() + 1;
	int reval = 0;
	for (int ii = 0; ii < c; ii++)
	{
  //使用substr构建一个新的字符串，比较两者是否相等
		if (b== a.substr(ii,b.length()))
		{
			reval++;
		}
	}
	cout << reval << endl;
	return 0;
}
int main(void)
{
	f5();
	return 0;
}
