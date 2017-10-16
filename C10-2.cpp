/*
数组排序  (100/100 分数)
题目描述
输入n个数，对这n个数去重之后排序，并输出从小到大排序结果

（友情提示：去重函数unique
排序函数sort
具体函数使用规则请查阅相关文档）

输入描述
首先输入n，然后接着输入n个数。其中1<=n<=100，每个数的范围1<=x<=n

输出描述
输出去重之后从小到大排序结果

样例输入
5
1 3 2 1 3

样例输出
1
2
3
*/

#include <iostream>
#include <cstdlib>
//#include <cmath>
#include <string>
#include <vector>
//#include <array>
#include <map>
#include <utility>
#include <algorithm>

using namespace std;

void printint(int inval)
{
	cout << inval << endl;
}
int f3()
{
	vector <int> a;
	int c = 0;
	cin >> c;
	for (int i = 0;i<c;i++)
	{
		int d = 0;
		cin >> d;
		a.push_back(d);
	}
	sort(a.begin(), a.end());
	auto it = unique(a.begin(), a.end()); //去重前必须先排序
	a.erase(it, a.end());
	for_each(a.begin(), a.end(), printint);

	return 0;
}
int main(void)
{
	//f1();
	//f2();
	f3();
	return 0;

}
