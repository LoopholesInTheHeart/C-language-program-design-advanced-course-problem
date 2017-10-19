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
