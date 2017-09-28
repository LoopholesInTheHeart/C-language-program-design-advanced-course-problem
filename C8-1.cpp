/*
C8-1 复数加减乘除  (100/100 分数)
题目描述
求两个复数的加减乘除。
要求使用c++ class编写程序。可以创建如下class

输入描述
第一行两个double类型数，表示第一个复数的实部虚部
第二行两个double类型数，表示第二个复数的实部虚部

输出描述
输出依次计算两个复数的加减乘除，一行一个结果

输出复数先输出实部，空格，然后是虚部，

样例输入
1 1
3 -1

样例输出
4 0
-2 2
4 2
0.2 0.4
*/
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

class Complex
{
  public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i){};
    Complex operator+(const Complex &c2) const;
    Complex operator-(const Complex &c2) const;

    /*实现下面三个函数*/
    Complex operator*(const Complex &c2) const;
    Complex operator/(const Complex &c2) const;
    friend ostream &operator<<(ostream &out, const Complex &c);

  private:
    double real;
    double imag;
};

Complex Complex::operator+(const Complex &c2) const
{
    return Complex(real + c2.real, imag + c2.imag);
}

Complex Complex::operator-(const Complex &c2) const
{
    return Complex(real - c2.real, imag - c2.imag);
}
//--------------------以下是答案--------------------
Complex Complex::operator*(const Complex &c2) const
{
    return Complex((real * c2.real) - (imag * c2.imag), (imag * c2.real + real * c2.imag));
}
Complex Complex::operator/(const Complex &c2) const
{
    return Complex(((real * c2.real) + (imag * c2.imag)) / ((c2.real * c2.real) + (c2.imag * c2.imag)),
                   ((imag * c2.real) - (real * c2.imag)) / ((c2.real * c2.real) + (c2.imag * c2.imag)));
}
ostream &operator<<(ostream &out, const Complex &c)
{
    cout << c.real << " " << c.imag << endl;
    return out;
}
//--------------------以上是答案--------------------
int main()
{
    double real, imag;
    cin >> real >> imag;
    Complex c1(real, imag);
    cin >> real >> imag;
    Complex c2(real, imag);
    cout << c1 + c2 << c1 - c2;
    // cout
    cout << c1 * c2;
    cout << c1 / c2;
}
