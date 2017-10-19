/*
单词计数
题目描述
编写一个程序，从键盘输入一个个单词，每接收到一个单词后，
输出该单词曾经出现过的次数，接收到“QUIT”单词后程序直接退出。

建议使用multiset或者map来解决该问题

输入描述
一行一个单词，"QUIT"结束

输出描述
每行输出为相应单词统计结果

样例输入
c++
map
set
map
vector
set
multiset
c++
QUIT

样例输出
0
0
0
1
0
1
0
1
*/
#include <iostream>
#include <string>
#include <map>
#include <utility>
#include <algorithm>

using namespace std;
/*
程序思路：
  使用map构建一个<string,int>,string存储输入的字符串，int存储被输入的次数。
  字符串被读入时先与QUIT做对比，然后搜索map主键看是否有一致的字符串，
  当有一致的字符串时对int执行自增操作，并输出引用数量，
  不一致时insert一个，使用make_pair构建一个
*/
int f2()
{
	map<string, int> mapval2;
	string stringval2;
	do
	{
		//getline(cin, stringval2);
		cin>>stringval2;
		//输入一串字符串，判断是不是 QUIT
		if ("QUIT" != stringval2)
		{
			auto reval2 = mapval2.find(stringval2);
			//在已有的数据中搜索输入的字符串，看是否存在，不存在就新建一个数据
			//如果存在与输入的字符串相等的key，则将对应的次数增加
			if (reval2 == mapval2.end())
			{
				mapval2.insert(make_pair(stringval2, 0));
				cout << "0" << endl;
			}
			else
			{
				reval2->second += 1;
				cout << reval2->second << endl;
			}
		}
	} while ("QUIT" != stringval2);

	return 0;
}

int main(void)
{
	f2();
	return 0;
}
