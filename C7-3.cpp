/*
C7-3 用类实现A+B  (100/100 分数)
题目描述
下面的代码声明了两个基类Base1和Base2，然后从这两个基类按照公有方式派生出类Derived。
基类和派生类都各自包含一个公有成员x，并且Base1和Base2各有接受一个整型参数的构造函数，
Derived的构造函数接受Base1和Base2的对象引用a，b来初始化Derived类对象，并令x为Base1::x和Base2::x之和。
请将下面的代码补充完成，使得输出符合要求。

输入描述
每组输入为 2 个整数用空格隔开

输出描述
主函数自动完成输出

样例输入
1 2

样例输出
1+2=3
*/
#include <iostream>
using namespace std;
 
struct Base1
{
    int x;
    Base1(int x);
};
 
struct Base2
{
    int x;
    Base2(int x);
};
 
struct Derived:public Base1, public Base2
{
    int x;
    Derived(Base1& a, Base2& b);
};

//请实现Base1，Base2, Derived的构造函数
//--------------------以下是答案--------------------

Derived::Derived(Base1& a,Base2& b):Base1(a),Base2(b)
{
    x=Base1::x+Base2::x;
}
Base1::Base1(int x):x(x)
{

}
Base2::Base2(int x):x(x)
{
    
}
//--------------------以上是答案--------------------
int main()
{
    int x, y;
    cin >> x >> y;
    Base1 a(x);
    Base2 b(y);
    Derived d(a, b);
    cout << d.Base1::x << "+" << d.Base2::x << "=" << d.x << endl;
    return 0;
}
