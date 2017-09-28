/*
C8-3 三角形还是长方形？  (100/100 分数)
题目描述
在多态概念中，基类的指针既可以指向基类的对象，又可以指向派生类的对象。
我们可以使用dynamic_cast类型转换操作符来判断当前指针（必须是多态类型）是否能够转换成为某个目的类型的指针。
同学们先查找dynamic_cast的使用说明
（如http://en.wikipedia.org/wiki/Run-time_type_information#dynamic_cast），
然后使用该类型转换操作符完成下面程序（该题无输入）。
函数int getVertexCount(Shape * b)计算b的顶点数目，若b指向Shape类型，返回值为0；
若b指向Triangle类型，返回值为3；若b指向Rectangle类型，返回值为4。

输入描述
无

输出描述
无

样例输入
无

样例输出


*/
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

class Shape
{
  public:
    Shape() {}
    virtual ~Shape() {}
};

class Triangle : public Shape
{
  public:
    Triangle() {}
    ~Triangle() {}
};

class Rectangle : public Shape
{
  public:
    Rectangle() {}
    ~Rectangle() {}
};

/*用dynamic_cast类型转换操作符完成该函数*/
//题目
//int getVertexCount(Shape * b){
//}

//--------------------以下是答案--------------------
int getVertexCount(Shape *b)
{
/*
思路：
    使用dynamic_cast在转换类型后给出的指针结果是否为空来判断推定的类型是否正确
*/
    Triangle *pt = dynamic_cast<Triangle *>(b);
    if (pt != nullptr)
    {
        return 3;
    }
    Rectangle *pr = dynamic_cast<Rectangle *>(b);
    if (pr != nullptr)
    {
        return 4;
    }
    return 0;
}
//--------------------以上是答案--------------------
int main()
{
    Shape s;
    cout << getVertexCount(&s) << endl;
    Triangle t;
    cout << getVertexCount(&t) << endl;
    Rectangle r;
    cout << getVertexCount(&r) << endl;
}
