/*
数组求和  (100/100 分数)
题目描述
编写一个模板函数getSum，接收一个数组，返回该数组所有元素的和。部分代码已给出，请将代码填补完整。

输入描述
每个测例共 3 行，第一行为两个整数 n,m(n > 1, m > 1) ，第二行为 n 个整数，用空格隔开，第三行为 m 个实数，用空格隔开。

输出描述
对每个测例输出两行，第一行为输入的n个整数的和，第二行为输入的m个实数的和。

样例输入
5 3
1 2 3 4 5
1.234 5.67 100.01

样例输出
15
106.914

*/
#include <iostream>
using namespace std;
 
/*请在这里填充代码*/
//--------------------以下是答案--------------------
template <typename T>
T getSum(const T* List,int counter)
{
	T sum = 0;
	for (int i = 0; i < counter; i++)
	{
		sum += List[i];
	}
	return sum;
}
//--------------------以上是答案--------------------
int main()
{
       int n, m;
       cin >> n >> m;
       int* arr_int = new int[n];
       double* arr_double = new double[m];
       for (int i = 0; i < n; ++i)
              cin >> arr_int[i];
       for (int i = 0; i < m; ++i)
              cin >> arr_double[i];
       cout << getSum(arr_int, n) << endl;
       cout << getSum(arr_double, m) << endl;
       return 0;
}
