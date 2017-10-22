/*
等腰三角形的面积  (100/100 分数)
题目描述
输入一个三角形三条边长，判断是否是等腰三角形并计算其面积。
注意若输入数据非等腰三角形数据，要求使用exception处理。

#include <iostream>
#include <stdexcept>
#include <cmath>

using namespace std;

/*完善此函数*/
double calArea(double a, double b, double c) {
}

int main(){
    double a, b, c;
    cin >> a >> b >> c;
    try{
        double area = calArea(a, b, c);
        cout << area << endl;
    }catch(exception& e){
        cout << e.what() << endl;
    }
}

输入描述
输入三角形三条边

输出描述
若输入确实为等腰三角形，输出其面积，保留两位小数。

若不是等腰三角形，抛出异常并输出字符串"The input is illegal"

样例输入
3 4 5

样例输出
The input is illegal
*/

#include <iostream>
#include <stdexcept>
#include <cmath>
#include <iomanip>
using namespace std;

/*完善此函数*/
double calArea(double a, double b, double c) {
	if (a <= 0 || b <= 0 || c <= 0)
	{
		throw invalid_argument("The input is illegal");
	}
	if (a + b <= c || b + c <= a || a + c <= b)
	{
		throw invalid_argument("The input is illegal");
	}
	if (a == b || b == c || a == c)
	{
		double s = (a + b + c) / 2;
		return sqrt(s * (s - a) * (s - b) * (s - c));
	}
	throw invalid_argument("The input is illegal");
}

int main() {
	double a, b, c;
	cin >> a >> b >> c;
	try {
		double area = calArea(a, b, c);
    //其中一个坑点，题目要求是使用小数点后两位， setiosflags 和 setprecision 配合输出小数点后精度
		cout << setiosflags(ios::fixed) << setprecision(2) << area << endl;
	}
	catch (exception& e) {
		cout << e.what() << endl;
	}
}
