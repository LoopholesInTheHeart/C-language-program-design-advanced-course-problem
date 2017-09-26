/*
C7-2 多继承  (100/100 分数)
题目描述:
下面的代码声明了三个基类Base1、Base2和Base3，然后从这三个基类按照公有方式派生出类Derived。
在每个类中分别定义带一个整型参数的构造函数和析构函数输出提示信息，
构造函数的提示信息中需要包含整型参数的数值。
请将下面的代码补充完整，使得输出结果与样例输出相同，
注意：测试数据有多组。

输入描述
每组输入为 4 个整数用空格隔开

输出描述
根据构造和析构函数的调用顺序输出

样例输入
1 2 3 4

样例输出
Base2 constructor called 3
Base1 constructor called 2
Base3 constructor called 4
Derived constructor called 1
Derived destructor called
Base3 destructor called
Base1 destructor called
Base2 destructor called

*/
#include <iostream>
using namespace std;

class Base1
{
public:
    Base1(int x);
    ~Base1();
};

class Base2
{
public:
    Base2(int x);
    ~Base2();
};
class Base3
{
public:
    Base3(int x);
    ~Base3();
};

//原题中的，重复了所以注释掉
// class Derived://继承上面3个类
// {
// public:
//     Derived(int x1, int x2, int x3, int x4);
//     ~Derived();
// };

Base1::Base1(int x)
{
    cout<<"Base1 constructor called "<<x<<endl;
}

Base1::~Base1()
{
    cout<<"Base1 destructor called"<<endl;
}
//依照Base1类中的代码实现其它类的构造函数和析构函数 
//--------------------以下是答案--------------------

class Derived:public Base2,public Base1,public Base3//公有继承
{
public:
    Derived(int x1, int x2, int x3, int x4);
    ~Derived();
};
Derived::Derived(int x1, int x2, int x3, int x4):Base1(x2),Base2(x3),Base3(x4)
{
    cout<<"Derived constructor called "<<x1<<endl;
}
Derived::~Derived()
{
    cout<<"Derived destructor called"<<endl;
}
Base2::Base2(int x)
{
    cout<<"Base2 constructor called "<<x<<endl;
}

Base2::~Base2()
{
    cout<<"Base2 destructor called"<<endl;
}

Base3::Base3(int x)
{
    cout<<"Base3 constructor called "<<x<<endl;
}

Base3::~Base3()
{
    cout<<"Base3 destructor called"<<endl;
}

//--------------------以上是答案--------------------

int main()
{
    int x[4];
    for (int i = 0; i < 4; ++i)
        cin >> x[i];
    Derived d(x[0], x[1], x[2], x[3]);
    return 0;
}
