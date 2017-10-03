/*
折半查找  (100/100 分数)
题目描述
编写一个折半查找的模板函数binSearch()，接收一个数组，数组长度和要查找的元素key，
按查找顺序输出查找过程中访问的所有元素下标。部分代码已给出，请将代码填补完整。

输入描述
每个测例共 3 行，第一行为 4 个整数 n,m(n > 1, m > 1) ， key1,key2( 要查找的元素 ) 。
第二行为 n 个整数，已按由小到大排序，用空格隔开，第三行为 m 个实数，已按由小到大排序，用空格隔开。

输出描述
对于每次查找，按查找顺序输出访问过的数组元素下标，每个下标占一行。

样例输入
5 5 5 2.3
1 2 3 4 5
2.3 2.4 2.5 2.6 2.7

样例输出
2
3
4
2
0
*/
#include <iostream>
using namespace std;

//template <class T>
//int binSearch(T arr[], int n, T key);
/*请实现折半查找，并按顺序输出被访问的元素下标*/

//--------------------以下是答案--------------------
template <typename T>
void binSearch(const T List[], int MAX, T& key)
{
	int start = 0, end = MAX-1;
	while (start <= end)
	{
		int halfpast = (start + end) / 2;
		cout << halfpast << endl;
		if (key == List[halfpast])
		{
			break;
		}
		else if (key<List[halfpast])
		{
			end = halfpast - 1;
		}
		else
		{
			start = halfpast+1;
		}
	}
}
//--------------------以上是答案--------------------
int main()
{
	int n, m;
	int key1;
	double key2;
	cin >> n >> m >> key1 >> key2;
	int* arr_int = new int[n];
	double* arr_double = new double[m];
	for (int i = 0; i < n; ++i)
		cin >> arr_int[i];
	for (int i = 0; i < m; ++i)
		cin >> arr_double[i];
	binSearch(arr_int, n, key1);
	binSearch(arr_double, m, key2);
	return 0;
}
